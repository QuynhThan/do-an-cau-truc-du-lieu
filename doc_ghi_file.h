#pragma once
#pragma warning(disable : 4996)
#include "xu_ly.h"

void doc_file_MB(dsMB& ds_mb);
void ghi_file_MB(dsMB& ds_mb);
void doc_file_CB(PTR_CB& CB, int& so_CB, dsMB& dsmb);
void ghi_file_CB(PTR_CB& CB, int so_CB);
void doc_file_VE(PTR_CB& CB);
void ghi_file_VE(PTR_CB& CB);
void delete_dsmb(dsMB& dsmb);
void delete_CB(PTR_CB& CB);
void status_CB(PTR_CB& p, dsMB& dsmb);
bool so_sanh_tgian(DATE_TIME date_time1, DATE_TIME date_time2);
long time_to_number(DATE_TIME date_time);
void doc_file_mang_MB(int* &a, int& n);
void ghi_file_mang_MB(int* a, int n);
void doc_file_mang_CB(int*& a, int& n, int& so, char* macb);
void ghi_file_mang_CB(int* a, int n, int so, char* macb);
//==============================
void filein_dshk(PTR_HK& Root);
void ghi_hk(PTR_HK Root, ofstream& fout);
void fileout_dshk(PTR_HK Root);
bool fileHK_is_good();
//===========================

void doc_file_MB(dsMB& ds_mb)
{
	ifstream ifs("DS_MB.txt", ios::binary);
	int n;
	ifs.read((char*)&n, sizeof(int));
	ifs.ignore();
	if (n == 0) return;
	else
	{
		ds_mb.soMB = n;
		for (int i = 0; i < n; i++)
		{
			ds_mb.mb[i] = new MB;
			ifs.read((char*)&*ds_mb.mb[i], sizeof(MB));
			ifs.ignore();
		}

	}
	ifs.close();
}

void ghi_file_MB(dsMB& ds_mb)
{
	ofstream ofs("DS_MB.txt", ios::binary);
	ofs.write((char*)&ds_mb.soMB, sizeof(int));
	if (ds_mb.soMB != 0)
	{
		ofs << endl;
		for (int i = 0; i < ds_mb.soMB - 1; i++)
		{
			ofs.write((char*)&*ds_mb.mb[i], sizeof(MB));
			ofs << endl;
		}
		ofs.write((char*)&*ds_mb.mb[ds_mb.soMB - 1], sizeof(MB));
	}
	ofs.close();
}

void delete_dsmb(dsMB& ds_mb)
{
	for (int i = ds_mb.soMB - 1; i >= 0; i--)
	{
		delete ds_mb.mb[i];
		ds_mb.soMB--;
	}
}

void delete_CB(PTR_CB& CB)
{
	PTR_CB p;
	while (CB != NULL)
	{
		p = CB;
		CB = CB->next;
		for (int i = p->infocb.dsve.gioi_han; i >= 1; i--)
		{
		//	if (strlen(p->infocb.dsve.ve[i]) == 0)
			delete[] p->infocb.dsve.ve[i];
		}
		delete[] p->infocb.dsve.ve;
		delete p;
	}
}

void ghi_file_CB(PTR_CB& CB, int so_CB)
{
	ofstream ofs("DS_CB.txt", ios::binary);
	if (CB != NULL)
	{
		PTR_CB p = CB;
		ofs.write((char*)&so_CB, sizeof(int));
		ofs << endl;
		for (int i = 0; i < so_CB - 1; i++)
		{
			ofs.write((char*)&*p, sizeof(nodeCB));
			ofs << endl;
			p = p->next;
		}
		ofs.write((char*)&*p, sizeof(nodeCB));
	}
	ofs.close();
}

void doc_file_CB(PTR_CB& CB, int& so_CB, dsMB& dsmb)
{
	ifstream ifs("DS_CB.txt", ios::binary);
	int n;
	ifs.read((char*)&n, sizeof(int));
	ifs.ignore();
	if (n != 0)
	{
		PTR_CB p = CB, last;
		so_CB = n;
		p = new nodeCB;
		ifs.read((char*)&*p, sizeof(nodeCB));
		status_CB(p,dsmb);
		ifs.ignore();
		CB = last = p;
		for (int i = 1; i < n; i++)
		{
			p = new nodeCB;
			ifs.read((char*)&*p, sizeof(nodeCB));
			status_CB(p,dsmb);
			ifs.ignore();
			last->next = p;
			last = p;
		}
	}
	ifs.close();
}

void doc_file_VE(PTR_CB& CB)
{
	if (CB != NULL)
	{
		ifstream ifs("DS_VE.txt", ios::binary);
		PTR_CB p = CB;
		int n;
		while (p != NULL)
		{
			tao_ds_ve(p->infocb.dsve, p->infocb.dsve.gioi_han);
			if (p->infocb.dsve.ve_da_dat != 0)
			{
				for (int i = 1; i <= p->infocb.dsve.ve_da_dat; i++)
				{
					ifs.read((char*)&n, sizeof(int));
					/*delete p->infocb.dsve.ve[n];
					p->infocb.dsve.ve[n] = new char[15];*/
					ifs.read((char*)p->infocb.dsve.ve[n], sizeof(char[15]));
				}
				ifs.ignore();
			}
			p = p->next;
		}
		ifs.close();
	}
}

void ghi_file_VE(PTR_CB& CB)
{
	if (CB != NULL)
	{
		PTR_CB p = CB;
		ofstream ofs("DS_VE.txt", ios::binary);
		while (p->next != NULL)
		{
			if (p->infocb.dsve.ve_da_dat != 0)
			{
				for (int i = 1; i <= p->infocb.dsve.gioi_han; i++)
				{
					if (strlen(p->infocb.dsve.ve[i]) == 9 || strlen(p->infocb.dsve.ve[i]) == 12)
					{
						ofs.write((char*)&i, sizeof(int));
						ofs.write((char*)p->infocb.dsve.ve[i], sizeof(char[15]));
					}
				}
				ofs << endl;
			}
			p = p->next;
		}
		if (p->infocb.dsve.ve_da_dat != 0)
		{
			for (int i = 1; i <= p->infocb.dsve.gioi_han; i++)
			{
				if (strlen(p->infocb.dsve.ve[i]) == 9 || strlen(p->infocb.dsve.ve[i]) == 12)
				{
					ofs.write((char*)&i, sizeof(int));
					ofs.write((char*)p->infocb.dsve.ve[i], sizeof(char[15]));
				}
			}
		}
		ofs.close();
	}
}

void status_CB(PTR_CB& p, dsMB& dsmb)
{
	
	DATE_TIME date_time;
	time_t now = time(0);
	tm* ltm = localtime(&now);
	date_time.nam = ltm->tm_year + 1900;
	date_time.thang = ltm->tm_mon + 1;
	date_time.ngay = ltm->tm_mday;
	date_time.gio = ltm->tm_hour;
	date_time.phut = ltm->tm_min;
	if (p->infocb.status == 1 || p->infocb.status == 2)
		if (so_sanh_tgian(date_time, p->infocb.date_time)) {
			if (p->infocb.dsve.ve_da_dat > 0 && p->infocb.status != 3) {
				p->infocb.status = 3;
				dsmb.mb[tim_kiem_MB(dsmb, p->infocb.shMB)]->slth++;
			}
			else
				p->infocb.status = 0;
		}
}

void doc_file_mang_CB(int*& a, int& n, int& so, char* macb)
{
	ifstream ifs("mang_CB.txt");
	string b;
	getline(ifs, b, ' ');
	for (int i = 0; i < b.length(); i++)
		macb[i] = b[i];
	ifs >> n;
	ifs >> so;
	if (n != 0)
		a = new int[n];
	for (int i = 0; i < n; i++)
		ifs >> a[i];
	ifs.close();
}

void ghi_file_mang_CB(int* a, int n, int so, char* macb)
{
	ofstream ofs("mang_CB.txt");
	ofs << macb;
	ofs << " ";
	ofs << n;
	ofs << " ";
	ofs << so;
	ofs << endl;
	for (int i = 0; i < n; i++)
	{
		ofs << a[i]; ofs << " ";
	}
	ofs.close();
}
void doc_file_mang_MB(int*& a, int& n)
{
	ifstream ifs("mang_MB.txt");
	ifs >> n;
	if (n != 0)
		a = new int[n];
	for (int i = 0; i < n; i++) ifs >> a[i];
	ifs.close();
}

void ghi_file_mang_MB(int* a, int n)
{
	ofstream ofs("mang_MB.txt");
	ofs << n;
	ofs << endl;
	for (int i = 0; i < n; i++)
	{
		ofs << a[i];
		ofs << " ";
	}
	ofs.close();
}

//===============================
bool fileHK_is_good() {
	ifstream fin("DS_HANH_KHACH.txt", ios::binary);
	if (fin.fail()) {
		cout << "\nLOI MO FILE DS_HANH_KHACH.TXT";
		fin.close();
		return 0;
	}
	string a;
	fin >> a;
	fin.close();
	if (a.length() == 0) {
		return 0;
	}
	else return 1;
}
void filein_dshk(PTR_HK& Root) {
	/// them cau lech mo file khong duoc
	int dem = 0;
	if (fileHK_is_good() == 1) {
		ifstream fin("DS_HANH_KHACH.txt", ios::binary);
		string en;
		while (!fin.eof()) {//doc du 1 lan cuoi
			infoHK hk;
			fin.read((char*)&hk, sizeof(infoHK));
			fin.ignore();
			THEM_HK(Root, hk);
			dem++;
		}
		fin.close();
	}
//	DUYET_CAY(Root);
//	cout << dem; system("pause");
}

////GHI FILE THEO NLR ================(DOC BI LAP LAI 1 PHAN TU CUOI)/////////////////////////
void ghi_hk(PTR_HK Root, ofstream& fout) {
	if (Root != NULL) {
		fout.write((char*)&(Root->infohk), sizeof(infoHK));
		fout << endl;
		ghi_hk(Root->pleft, fout);
		ghi_hk(Root->pright, fout);
	}
}
void fileout_dshk(PTR_HK Root) {
	ofstream fout("DS_HANH_KHACH.txt", ios::binary);
	ghi_hk(Root, fout);
	fout.close();
}