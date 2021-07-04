#pragma once
#include"CAU_TRUC_DU_LIEU.h"

// x max 210 , ymax 49
//205: dong ngang
//186: dong ke thang dung
//187: goc nho ben phai phia tren
//188: goc nho ben phai phia duoi
//200: goc nho ben trai phia duoi
//201: goc nho ben trai phia tren
//202: noi trai,phai,duoi
//203: noi trai,phai,tren
//204: noi tren, duoi, phai
//206: noi tren, duoi, phai, trai
//185: noi tren, duoi, trai
//toa do x cua man hinh tu 0->236

const int len = 72;
const int xuong = 80;
const int phai = 77;
const int trai = 75;
const int enter = 13;
const int esc = 27;
const int tab = 9;
const int backspace = 8;
const int space = 32;
const int so_SB = 22;
const int so_MB = 5;

void Normal_khung_MB(int x, int y, int n);
void ke_khung_chon_MB(int x, int y);
void HighLight_khung_MB(int x, int y, int n);
void tao_khung(int x, int y, int length);
void Normal_khung_chu(int x, int y, int length, char* a);
int nhap_so_cho(char* a, char& g, int& i);
void HighLight_khung(int x, int y, int length, char* a);
void HighLight();
void Normal();
void ke_khung_in_MB(int x, int y);
void ke_khung_SB(int x, int y);
void ancontro();
void hiencontro();
void HighLight_Word(int x, int y, char* a, char* b);
void Normal_Word(int x, int y, char* a, char* b);
void them_MB(dsMB& ds_mb, int* a, int& n);
void hieu_chinh_MB(dsMB& ds_mb,PTR_CB&First);
int tim_kiem_MB(dsMB ds_mb, char* a);
char* tao_so_hieu_MB(int* a, int& n);
char* chon_loai_MB();
void ke_khung_MB(int x, int y);

char* chon_SB(int x, int y);
void hieu_chinh_CB(PTR_CB &CB);
void huy_chuyen(PTR_CB& CB);
char* tao_ma_CB(int*& a,int&sl, int& max);
void ke_khung(int x, int y);
int lay_so_ve(dsMB ds_mb,char*a);
bool ktra_tgian_hc(PTR_CB& CB, DATE_TIME& date_time, char* a);
bool co_sb(PTR_CB& CB, char* a);
bool la_nam_nhuan(int x);
void ke_khung_chu(int x, int y, char*a);
bool so_sanh_tgian(DATE_TIME date_time1, DATE_TIME date_time2);
long time_to_number(DATE_TIME date_time);
void Insert_Order(PTR_CB& CB, PTR_CB& p);
void nhap_cmnd(char* a);
void nhap_ho_ten(char* a);
void ho_tro_xoa_MB(dsMB& dsmb, int& n, char& k, int& i, int& r, int& so, int x, int y);
void xoa_MB(dsMB& ds_mb, PTR_CB& First);
void Lap_CB_moi(PTR_CB& CB, dsMB ds_mb, int* a, int& n, int& so_0, char* macb, int& so_CB);
void ho_tro_CB(dsMB& dsmb, char& k, int& n, int i, int r, int so, int x, int y);
void chon_phut(int& phut, char& k, int x, int y);
void chon_gio(int& gio, char& k, int x, int y);
void chon_ngay(int& ngay, int thang, int nam, char& k, int x, int y);
void chon_thang(int& thang, char& k, int x, int y);
void chon_nam(int& nam, char& k, int x, int y);
bool ktra_SHMB(PTR_CB CB, PTR_CB q, dsMB dsmb);
bool ktra_SBden(PTR_CB CB, PTR_CB p, dsMB dsmb);
void ke_khung_CB(int x, int y);
void in_infoCB(PTR_CB p, char* a, DATE_TIME date_time, int x, int y);
PTR_CB Tao_CB(PTR_CB& CB, dsMB& ds_mb, int* a, int& n, int& so_0, char* macb, int x, int y);
void dieu_chinh_vtri(PTR_CB& First, PTR_CB& p);
int yes_no(int x, int y);
void xoa_khung(int x, int y, int length, int width);
void ke_khung_date_time(int x, int y);
void nhap_maCB(char* a, char& k, int x, int y);
void in_infoCB_chuabay(PTR_CB& p, char* a, int x, int y);
bool kt_cho_ngoi_CB(PTR_CB& First, char* a, int n);
void hieu_chinh_dsveCB(PTR_CB& First, char* a, int n);
bool kt_MB_duoc_chon(PTR_CB& First, char* a);
void xoa_CB(PTR_CB& CB, int& so_CB);
/////////////////
//void ShowCur(bool CursorVisibility);
char ROLL_NUM(int& num, int max, int min, int x, int y, int xshow, int yshow);

void CHON_DATE(int& ngay, int& thang, int& nam, int x, int y, int cn);
/////
void IN_STATUS(int n);
int leng_int(int x);
void free_char(char**& a, int num);
bool chon_YN(int x, int y);
int chon_cb(char** dsmacb, int x, int y, int dem, int h, int& dau);
int char_to_int(char* g);
void nhap_so(char* a, int n);
void nhap_cmnd(char* a);
void nhap_ten(char* word, int i);
void Lay_info(PTR_HK Root, char* cm, PTR_HK& p);
PTR_CB nhap_macb( PTR_CB First);
void INdsHK(PTR_CB First, PTR_HK Root);
DATE_TIME gettime();
void delete_ve(PTR_CB& p, char* cm);
void HuyVE(PTR_CB& First, PTR_HK Root);
void INdsCB(PTR_CB First);
bool CB_TUONG_LAI(PTR_CB& p);
void INinfoCB(PTR_CB p,int x, int y, int stt);
void INCHONGOI(PTR_CB p);
int only_1_onCB(PTR_CB p, char* cm);
bool CB_1H_APART(PTR_CB a, PTR_CB b);
PTR_CB only_1_sametime(PTR_CB First, char* cm, PTR_CB p, PTR_CB cb_trung_1);
PTR_HK search_HK(PTR_HK Root, char* cm);
void DUYET_CAY(PTR_HK Root);
void LAY_TEN(char* ho, char* ten);
void Nhap_infoHK(infoHK& infohk, int x, int y);
PTR_HK Rotate_Left(PTR_HK& ya);
PTR_HK Rotate_Right(PTR_HK& ya);
void delete_DSHK(PTR_HK& Root);
void THEM_HK(PTR_HK& Root, infoHK hk);
void Them_HK(PTR_HK& Root, infoHK hk);
bool SO_SANH_INFOHK(infoHK a, infoHK b);
void DAT_VE(PTR_CB& First, PTR_HK& Root);
void TK_MB(dsMB dsmb);
void IN_DSVE_CT(PTR_CB First);
////////////// HAM VE ///////////////
void XOA_TB_ENTER_ESC();
void IN_TB_ENTER_ESC();
bool TB_THOAT();
void XOA_CHON_SB();
void CAN_GIUA(int x, int y, int w, char* a);
void IN_TBTIEPTUC();
void XOA_TBTIEPTUC();
void IN_TBESC();
void XOA_TBESC();
void ve_vien(int x, int y, int w, int h, int color_vien);
void thanh_sang(int x, int y, int w, int h, int t_color_sang, int bg_color_sang, char* nd);
void XOA_MH();
void THONG_BAO(char* a);
void TB_ESC();
void BOX(int x, int y, int w, int h, int t_color, int bg_color, char* nd);
void n_BOX_ke_duoi(int x, int y, int w, int h, int t_color, int bg_color, int n, char nd[][20]);
void Xoa_n_BOX(int x, int y, int w, int h, int n);
void KE_BANG(int x, int y, int* wcot, int col, int row, char** nd);
void XOA_CUOI_BANG(int x, int y, int* wcot, int col, int row, char** nd);
void THEM_CUOI_BANG(int x, int y, int* wcot, int col, int row, char** nd);
#pragma warning(disable : 4996)//di thi nho xoa
#pragma warning(disable : 4703)

void ke_khung_SB(int x, int y)
{
	gotoxy(x, y);
	cout << char(201); for (int i = 1; i <= 20; i++) cout << char(205); cout << char(187); y++;
	gotoxy(x, y); cout << char(186);
	gotoxy(x + 21, y); cout << char(186); y++;
	gotoxy(x, y); cout << char(186);
	gotoxy(x + 21, y); cout << char(186); y++;
	gotoxy(x, y); cout << char(200); for (int i = 1; i <= 20; i++)cout << char(205); cout << char(188);
}
void ke_khung_in_MB(int x, int y)
{
	gotoxy(x, y);
	cout << (char)201;
	for (int i = 1; i <= 83; i++) cout << (char)205; cout << (char)187;
	gotoxy(x + 84, y + 1); cout << (char)186;
	gotoxy(x + 84, y + 2); cout << (char)188;
	gotoxy(x, y + 2); for (int i = 0; i <= 83; i++) cout << (char)205;
	gotoxy(x, y + 2); cout << (char)200;
	gotoxy(x, y + 1); cout << (char)186;

	gotoxy(x + 19, y); cout << (char)203;//vien 
	gotoxy(x + 19, y + 1); cout << (char)186;
	gotoxy(x + 19, y + 2); cout << (char)202;

	gotoxy(x + 54, y); cout << (char)203;
	gotoxy(x + 54, y + 1); cout << (char)186;
	gotoxy(x + 54, y + 2); cout << (char)202;

	gotoxy(x + 74, y); cout << (char)203;
	gotoxy(x + 74, y + 1); cout << (char)186;
	gotoxy(x + 74, y + 2); cout << (char)202;
}
void Normal_Word(int x, int y, char* a, char* b)
{
	gotoxy(x + (22 - strlen(a)) / 2, y);
	Normal(); cout << a;
	gotoxy(x + (22 - strlen(b)) / 2, y + 1); cout << b;
}
void HighLight_Word(int x, int y, char* a, char* b)
{
	gotoxy(x + (22 - strlen(a)) / 2, y);
	HighLight();
	cout << a;
	gotoxy(x + (22 - strlen(b)) / 2, y + 1); cout << b;
}
char* chon_loai_MB()
{
	int n = 0, x = wherex(), y = wherey();
	ke_khung_chon_MB(x, y);
	HighLight_khung_MB(x, y, n);
	char b, a[] = "";
	char loai_MB[so_MB][40] = { "AIRBUS A321 -200","AIRBUS A330 -220","AIRBUS A350 -900 XWB", "BOEING 787 -9 DREAMLINER","ATR 72" };
	do
	{
		b = getch();
		if (b == enter) { return loai_MB[n]; }
		else if (b == esc) { return a; }
		else if (b == -32)
		{
			b = getch();
			if (b == xuong && n <= 3)
			{
				Normal_khung_MB(x, y, n);
				y += 4; n++;
				HighLight_khung_MB(x, y, n);
			}
			else if (b == len && n > 0)
			{
				Normal_khung_MB(x, y, n);
				y -= 4; n--;
				HighLight_khung_MB(x, y, n);
			}
		}
	} while (1);
}
void Normal_khung_MB(int x, int y, int n)
{
	char loai_MB[so_MB][40] = { "AIRBUS A321 -200","AIRBUS A330 -220","AIRBUS A350 -900 XWB", "BOEING 787 -9 DREAMLINER","ATR 72" };
	gotoxy(x, y);
	cout << char(201);
	for (int i = 1; i <= 30; i++) cout << char(205);
	cout << char(187);
	gotoxy(x, y + 1); cout << char(186);
	gotoxy(x + 1, y + 1);
	for (int i = 1; i <= ((30 - strlen(loai_MB[n])) / 2) - 1; i++) cout << " ";
	cout << loai_MB[n];
	for (int i = 1; i <= 31 - (30 - strlen(loai_MB[n])) / 2 - strlen(loai_MB[n]); i++) cout << " ";
	gotoxy(x + 31, y + 1); cout << char(186);
	gotoxy(x, y + 2); cout << char(200);
	for (int i = 1; i <= 30; i++) cout << char(205); cout << char(188);
}
void ke_khung_chon_MB(int x, int y)
{
	for (int i = 1; i <= so_MB; i++, y += 4) Normal_khung_MB(x, y, i - 1);
}
void HighLight_khung_MB(int x, int y, int n)
{
	char loai_MB[so_MB][40] = { "AIRBUS A321 -200","AIRBUS A330 -220","AIRBUS A350 -900 XWB", "BOEING 787 -9 DREAMLINER","ATR 72" };
	HighLight();
	gotoxy(x, y);
	cout << char(201);
	for (int i = 1; i <= 30; i++) cout << char(205);
	cout << char(187);
	gotoxy(x, y + 1); cout << char(186);
	gotoxy(x + 1, y + 1);
	for (int i = 1; i <= ((30 - strlen(loai_MB[n])) / 2) - 1; i++) cout << " ";
	cout << loai_MB[n];
	for (int i = 1; i <= 31 - (30 - strlen(loai_MB[n])) / 2 - strlen(loai_MB[n]); i++) cout << " ";
	gotoxy(x + 31, y + 1); cout << char(186);
	gotoxy(x, y + 2); cout << char(200);
	for (int i = 1; i <= 30; i++) cout << char(205); cout << char(188);
	Normal();
}
char* tao_so_hieu_MB(int* a, int& n)
{
	char b[5];
	int t = rand() % n;
	char c[4] = "";
	itoa(a[t], c, 10);
	if (a[t] < 10) strcpy(b, "A00");
	else if (a[t] < 100) strcpy(b, "A0");
	else strcpy(b, "A");
	strcat(b, c);
	swap(a[t], a[n - 1]);
	n--;
	return b;
}

void them_MB(dsMB& ds_mb, int* a, int& n)
{
	if (ds_mb.soMB == 300)
	{
		cout << "Danh sach may bay day!\n";
		system("pause");
	}
	else
	{

		char e[40] = "";
		char b[4][40] = { "CHON LOAI MAY BAY","","THEM","THOAT" }; char d[5] = "";
		int c = -100;
		int i = 0;
		ancontro();
		gotoxy(70, 7);
		cout << "LOAI MAY BAY";
		tao_khung(90, 6, 40);
		gotoxy(70, 10);
		cout << "SO CHO NGOI (>=20)";
		tao_khung(90, 9, 40);
		Normal_khung_chu(100, 13, 10, b[2]);
		Normal_khung_chu(112, 13, 13, b[3]);
		HighLight_khung(140, 6, 40, b[0]);
		char k;
		ds_mb.mb[ds_mb.soMB] = new MB;
		do
		{
			switch (i)
			{
			case 0:
			{
				HighLight_khung(140, 6, 40, b[0]);
				break;
			}
			case 1:
			{
				Normal_khung_chu(100, 13, 10, b[2]);
				Normal_khung_chu(140, 6, 40, b[0]);
				hiencontro();
				gotoxy(110 + strlen(d), 10);
				c = nhap_so_cho(d, k, i);
				if (k == esc)
				{
					hiencontro();
					delete ds_mb.mb[ds_mb.soMB];
					return;
				}
				ancontro();
				continue;
			}
			case 2:
			{
				Normal_khung_chu(112, 13, 13, b[3]);
				HighLight_khung(100, 13, 10, b[2]);
				break;
			}
			case 3:
			{
				Normal_khung_chu(100, 13, 10, b[2]);
				HighLight_khung(112, 13, 13, b[3]);
				break;
			}
			}
			k = getch();
			gotoxy(140, 13);
			cout << "                                                         ";
			if (k == -32)
			{
				k = getch();
				if (k == phai && i < 3)i++;
				else if (k == trai && i > 0)i--;
			}
			else if (k == enter)
			{
				switch (i)
				{
				case 0:
				{
					Normal_khung_chu(140, 6, 40, b[i]);
					gotoxy(140, 10);
					char a[40];
					strcpy(a, chon_loai_MB());
					gotoxy(140, 10);
					for (int j = 10; j <= 30; j++)
					{
						gotoxy(140, j);
						for (int i = 1; i <= 50; i++)
							cout << " ";
					}
					if (strlen(a) != 0)
					{
						strcpy(e, a);
						gotoxy(91, 7); for (int i = 1; i <= 37; i++) cout << " ";
						gotoxy(90 + (40 - strlen(e)) / 2, 7);
						cout << e;
						i++;
						continue;
					}
					HighLight_khung(140, 6, 40, b[i]);
					break;
				}
				case 2:
				{
					if (strlen(e) != 0 && c >= 20 && c <= 200)
					{
						strcpy(ds_mb.mb[ds_mb.soMB]->lMB, e);
						ds_mb.mb[ds_mb.soMB]->seat = c;
						strcpy(ds_mb.mb[ds_mb.soMB]->shMB, tao_so_hieu_MB(a, n));
						ds_mb.soMB++;
						ds_mb.mb[ds_mb.soMB] = new MB;
						Normal_khung_chu(100, 13, 10, b[i]);
						i = 0;
						HighLight_khung(140, 6, 40, b[i]);
						gotoxy(91, 7); for (int i = 1; i <= 37; i++) cout << " ";
						d[0] = '\0';
						e[0] = '\0';
						gotoxy(110, 10); cout << "    ";

						gotoxy(140, 13);
						cout << "THEM THANH CONG";

					}
					else if (strlen(e) == 0 && strlen(d) == 0)
					{
						gotoxy(140, 13);
						cout << "CHUA CHON LOAI MAY BAY VA SO CHO NGOI ";
					}
					else if (strlen(e) == 0)
					{
						gotoxy(140, 13);
						cout << "BAN CHUA CHON LOAI MAY BAY";
					}
					else if (c < 20 || c>200)
					{
						if (strlen(d) == 0)
						{
							gotoxy(140, 13);
							cout << "BAN CHUA CHON SO CHO NGOI";
						}
						else
						{
							gotoxy(140, 13);
							cout << "SO CHO NGOI PHAI >= 20 VA <=200";
						}
					}
					break;
				}
				case 3:
				{
					delete ds_mb.mb[ds_mb.soMB];
					hiencontro();
					return;
				}
				}
			}
			else if (k == esc)
			{
				hiencontro();
				delete ds_mb.mb[ds_mb.soMB];
				return;
			}
		} while (1);
	}
}

int tim_kiem_MB(dsMB ds_mb, char*a)
{
	for (int i = 0; i < ds_mb.soMB; i++)
		if (strcmp(ds_mb.mb[i]->shMB, a)==0) return i;
	return -1;
}

void ke_khung_MB(int x, int y)
{
	gotoxy(x, y);
	cout << (char)201;
	for (int i = 1; i <= 83; i++) cout << (char)205; cout << (char)187;
	gotoxy(x + 84, y + 1); cout << (char)186;
	gotoxy(x + 84, y + 2); cout << (char)188;
	gotoxy(x, y + 2); for (int i = 0; i <= 83; i++) cout << (char)205;
	gotoxy(x, y + 2); cout << (char)200;
	gotoxy(x, y + 1); cout << (char)186;

	gotoxy(x + 19, y); cout << (char)203;//vien 
	gotoxy(x + 19, y + 1); cout << (char)186;
	gotoxy(x + 19, y + 2); cout << (char)202;

	gotoxy(x + 54, y); cout << (char)203;
	gotoxy(x + 54, y + 1); cout << (char)186;
	gotoxy(x + 54, y + 2); cout << (char)202;

	gotoxy(x + 74, y); cout << (char)203;
	gotoxy(x + 74, y + 1); cout << (char)186;
	gotoxy(x + 74, y + 2); cout << (char)202;
}

char* tao_ma_CB(int* a, int& n, char* macb)
{
	int tg = rand() % n;
	int i = strlen(macb) - 1;
	char maCB[15];
	strcpy(maCB, macb);
	while (a[tg])
	{
		maCB[i] = (a[tg] % 10) + 48;
		i--;
		a[tg] = a[tg] / 10;
	}
	swap(a[tg], a[n - 1]);
	n--;
	return maCB;
}

int lay_so_ve(dsMB ds_mb, char* a)
{
	for (int i = 0; i < ds_mb.soMB; i++)
		if (strcmp(a, ds_mb.mb[i]->shMB) == 0) return ds_mb.mb[i]->seat;
}

void Insert_Order(PTR_CB& CB, PTR_CB& p)
{
	PTR_CB t, s;
	for (s = CB; s != NULL && so_sanh_tgian(s->infocb.date_time, p->infocb.date_time); t = s, s = s->next);
	if (s == CB)
	{
		p->next = CB;
		CB = p;
	}
	else
	{
		p->next = s;
		t->next = p;
	}
}

long time_to_number(DATE_TIME date_time)
{
	return date_time.nam * (100000000) + date_time.thang* (1000000) + date_time.ngay * (10000) + date_time.gio * (100) + date_time.phut;
}

bool so_sanh_tgian(DATE_TIME date_time1, DATE_TIME date_time2)
{
	return time_to_number(date_time1) > time_to_number(date_time2);
}

bool la_nam_nhuan(int x)
{
	return (x % 400 == 0 || (x % 4 == 0 && x % 100 != 0));
}

int nhap_so_cho(char* a, char& g, int& i)
{

	int d = strlen(a);
	//int b;
	int x = wherex(), y = wherey();
	int x1, y1;
	while (1)
	{
		a[d] = getch();
		if (d == 0 && a[d] == 48)
		{
			a[d] = '\0';
		}
		else if (a[d] >= 48 && a[d] <= 57 && d <= 2)
		{
			gotoxy(x + 30, y); for (int i = 1; i <= 21; i++) cout << " ";
			gotoxy(x, y);
			cout << a[d];
			d++; x++;
		}
		else if (a[d] == backspace && d != 0)
		{
			x1 = wherex();
			y1 = wherey();
			gotoxy(x1 + 30, y1); for (int i = 1; i <= 21; i++) cout << " ";
			gotoxy(x1 - 1, y1);
			cout << " ";
			gotoxy(x1 - 1, y1);
			d -= 1; x--;
		}
		else if (a[d] == -32)
		{
			a[d] = getch();
			if (a[d] == trai)
			{
				g = a[d]; i--;
				a[d] = '\0';
				ancontro();
				return atoi(a);
			}

			else if (a[d] == phai)
			{
				g = enter; i++;
				a[d] = '\0';
				return atoi(a);
			}

		}
		else if (a[d] == esc)
		{
			g = esc;
			return atoi(a);
		}
	}
}
void tao_khung(int x, int y, int length)
{
	gotoxy(x, y);
	cout << char(201);
	for (int i = 1; i <= length - 3; i++)
		cout << char(205);
	cout << char(187);
	gotoxy(x, y + 1);
	cout << char(186);
	gotoxy(x + length - 2, y + 1);
	cout << char(186);
	gotoxy(x, y + 2);
	cout << char(200);
	for (int i = 1; i <= length - 3; i++) cout << char(205);
	cout << char(188);
}
void Normal_khung_chu(int x, int y, int length, char* a)
{
	gotoxy(x, y);
	cout << char(201);
	for (int i = 1; i <= length - 2; i++) cout << char(205);
	cout << char(187);
	gotoxy(x, y + 1); cout << char(186);
	gotoxy(x + 1, y + 1);
	for (int i = 1; i <= ((length - strlen(a)) / 2) - 1; i++) cout << " ";
	cout << a;
	for (int i = 1; i <= length - (((length - strlen(a)) / 2) + strlen(a)); i++) cout << " ";
	gotoxy(x + length - 1, y + 1); cout << char(186);
	gotoxy(x, y + 2); cout << char(200);
	for (int i = 1; i <= length - 2; i++) cout << char(205); cout << char(188);
}
void HighLight_khung(int x, int y, int length, char* a)
{
	HighLight();
	gotoxy(x, y);
	cout << char(201);
	for (int i = 1; i <= length - 2; i++) cout << char(205);
	cout << char(187);
	gotoxy(x, y + 1); cout << char(186);
	gotoxy(x + 1, y + 1);
	for (int i = 1; i <= ((length - strlen(a)) / 2) - 1; i++) cout << " ";
	cout << a;
	for (int i = 1; i <= length - (((length - strlen(a)) / 2) + strlen(a)); i++) cout << " ";
	gotoxy(x + length - 1, y + 1); cout << char(186);
	gotoxy(x, y + 2); cout << char(200);
	for (int i = 1; i <= length - 2; i++) cout << char(205); cout << char(188);
	Normal();
}



bool co_sb(PTR_CB& CB, char* a)
{
	for (PTR_CB p = CB; p != NULL; p = p->next)
		if (strcmp(p->infocb.san_bay_den, a) == 0 && p->infocb.status != 3 && p->infocb.status != 0) return 1;
	return 0;
}


bool ktra_tgian_hc(PTR_CB& CB, DATE_TIME& date_time, char* a)
{
	for (PTR_CB q = CB; q != NULL; q = q->next)
	{
		if (date_time.thang == q->infocb.date_time.thang && date_time.nam == q->infocb.date_time.nam &&
			strcmp(a, q->infocb.san_bay_den) == 0)
			if (date_time.ngay == q->infocb.date_time.ngay)
				return abs(q->infocb.date_time.gio * 60 + q->infocb.date_time.phut
					- date_time.gio * 60 - date_time.phut) >= 30;
			else if (abs(date_time.ngay - q->infocb.date_time.ngay) == 1)
				if (abs(date_time.gio - q->infocb.date_time.gio) == 23)
				{
					int x = date_time.gio * 60 + date_time.phut
						+ q->infocb.date_time.gio * 60 + q->infocb.date_time.phut;
					return 24 * 60 <= x && x < 24 * 60 + 30;
				}
	}
	return 1;
}

void huy_chuyen(PTR_CB& CB)
{
	if (CB == NULL)
	{
		char nd[40] = "KHONG CO CHUYEN BAY NAO!";
		BOX(70, 13, 70, 4, 7, 0, nd);
		TB_ESC();
		return;
	}
	else
	{
		
		PTR_CB p;
		while (1) {
			p = nhap_macb(CB);
			if (p == NULL) return;
		//	p = tim_CB(CB, macb);
			if (p->infocb.status == 0 ) {
				gotoxy(150, 34);
				cout << "CHUYEN BAY DA DUOC HUY ROI!";
				Sleep(2000);
				gotoxy(150, 34);
				cout << "                           ";
			}
			else if (p->infocb.status == 3) {
				gotoxy(150, 34);
				cout << "CHUYEN BAY DA HOAN TAT KHONG THE HUY!";
				Sleep(2000);
				gotoxy(150, 34);
				cout << "                                     ";
			}
			else if (p->infocb.status == 1 || p->infocb.status == 2 ) {
				bool yn = true;
				if (p->infocb.dsve.ve_da_dat != 0) {
					gotoxy(150, 34); cout << "CHUYEN BAY DA CO KHACH DAT VE BAN CO CHAC MUON HUY?";
					yn = chon_YN(170, 35);
					gotoxy(150, 34); cout << "                                                   ";
				}
				if (yn) {
					p->infocb.status = 0;
					gotoxy(150, 34);
					cout << "CHUYEN BAY " << p->infocb.maCB << " DA DUOC HUY THANH CONG!";
					Sleep(2000);
					gotoxy(150, 34);
					cout << "                                                      ";
				}
				else {
					gotoxy(150, 34); cout << "CHUYEN BAY " << p->infocb.maCB << " CHUA DUOC HUY.";
					Sleep(1500);
					gotoxy(150, 34); cout << "                                          ";
				}
			}
		}
		//draft
	}
}

void ke_khung(int x, int y)
{
	gotoxy(x, y);
	cout << (char)201;
	gotoxy(x + 1, y);
	for (int i = 0; i < 8; i++)
	{
		cout << (char)205;
	}
	gotoxy(x + 9, y); cout << (char)187;
	gotoxy(x + 9, y + 1);
	for (int i = 1; i <= 5; i++)
	{
		cout << (char)186;
		gotoxy(x + 9, y + i);
	}
	gotoxy(x, y + 1);
	for (int i = 1; i <= 5; i++)
	{

		cout << (char)186;
		gotoxy(x, y + i);
	}
	gotoxy(x, y + 5); cout << (char)200;
	gotoxy(x + 1, y + 5);
	for (int i = 0; i < 8; i++) cout << (char)205;
	gotoxy(x + 9, y + 5);
	cout << (char)188;

}

void ke_khung_chu(int x, int y, char a[])
{
	gotoxy(x, y);
	cout << (char)201;
	gotoxy(x + 1, y);
	for (int i = 0; i < 50; i++)
	{
		cout << (char)205;
	}
	gotoxy(x + 50, y); cout << (char)187;
	gotoxy(x + 50, y + 1);
	for (int i = 1; i <= 2; i++)
	{
		cout << (char)186;
		gotoxy(x + 50, y + i);
	}
	gotoxy(x, y + 1);
	for (int i = 1; i <= 2; i++)
	{

		cout << (char)186;
		gotoxy(x, y + i);
	}
	gotoxy(x, y + 2); cout << (char)200;
	gotoxy(x + 1, y + 2);
	for (int i = 0; i < 50; i++) cout << (char)205;
	gotoxy(x + 50, y + 2);
	cout << (char)188;
	int x1 = (50 - strlen(a) / 2);
	gotoxy(x1 + x, y + 1);
	cout << a;
	cout << endl << endl;
}

void nhap_ho_ten(char* a)
{
	int d = 0;
	int x, y;
	while (1)
	{
		a[d] = getch();
		if (a[d] >= 65 && a[d] <= 90 || a[d] >= 97 && a[d] <= 122 || a[d] == space)
		{
			if ((a[d] == space && d == 0) || (a[d] == space && a[d - 1] == space))
			{
				continue;
			}
			else if (a[d] >= 97 && a[d] <= 122)
			{
				a[d] = a[d] - 32;
				cout << a[d];
				d++;
			}
			else{cout << a[d];d++;}
		}
		else if ((d != 0 && a[d] == enter))
			break;
		else if (a[d] == backspace && d != 0)
		{
			x = wherex();
			y = wherey();
			gotoxy(x - 1, y);
			cout << " ";
			gotoxy(x - 1, y);
			d--;
		}
	}
	if (a[d - 1] == space) d--;
	a[d] = '\0';
}

void HighLight() {
	SetColor(1);
	SetBGColor(11);
}

void Normal() {
	SetColor(7);
	SetBGColor(0);
}

char* chon_SB(int x, int y)
{
	char a[so_SB][20] = { "CAN THO","CAT BI","NOI BAI","DA NANG","TAN SON NHAT","CAM RANH","PHU QUOC","VINH","PHU BAI","CON DAO",
		"NA SAN","PHU CAT","CA MAU","BUON MA THUOT","DIEN BIEN PHU","PLEIKU","RACH GIA","LIEN KHUONG","TUY HOA","DONG HOI","CHU LAI","THO XUAN"
	};
	char b[so_SB][20] = { "(CAN THO)","(HAI PHONG)","(HA NOI)","(DA NANG)","(HO CHI MINH)","(KHANH HOA)","(KIEN GIANG)","(NGHE AN)","(THUA THIEN HUE)"
,"(BA RIA - VUNG TAU)","(SON LA)","(BINH DINH)","(CA MAU)","(DAK LAK)","(DIEN BIEN)","(GIA LAI)","(KIEN GIANG)","(LAM DONG)","(PHU YEN)"
,"(QUANG BINH)","(QUANG NAM)","(THANH HOA)"
	};
	gotoxy(x + 30, y - 1); HighLight();
	cout << "CHON SAN BAY DEN"; Normal();
	int y1 = y, x1 = x;
	int  i = 0, k = 0;
	for (; i < so_SB / 3; i++, y1 += 4)
	{
		for (int j = 1; j <= 3; j++, x += 27, k++)
		{
			gotoxy(x, y1);
			ke_khung_SB(x, y1);
			gotoxy(x + (22 - strlen(a[k])) / 2, y1 + 1); cout << a[k];
			gotoxy(x + (22 - strlen(b[k])) / 2, y1 + 2); cout << b[k];
		}
		x = x1;
	}
	i *= 3;
	if (i < so_SB)
	{
		for (int j = 1; j <= so_SB - i; j++, x += 27, k++)
		{
			gotoxy(x, y1);
			ke_khung_SB(x, y1);
			gotoxy(x + (22 - strlen(a[k])) / 2, y1 + 1); cout << a[k];
			gotoxy(x + (22 - strlen(b[k])) / 2, y1 + 2); cout << b[k];
		}
		x = x1;
	}
	k = 0;
	gotoxy(x + (22 - strlen(a[k])) / 2, y + 1);
	HighLight(); cout << a[k];
	gotoxy(x + (22 - strlen(b[k])) / 2, y + 2); cout << b[k];
	int can_duoi = (so_SB % 3 == 0 ? so_SB / 3 : so_SB / 3 + 1), dem = 0;
	char t, kytu; y++;
	do
	{
		t = getch();
		if (t == -32)
		{
			t = getch();
			if (t == len)
			{
				if (k > 2)
				{
					Normal_Word(x, y, a[k], b[k]);
					y -= 4; k -= 3;
					HighLight_Word(x, y, a[k], b[k]);
				}
				else
				{
					Normal_Word(x, y, a[k], b[k]);
					k = k + 3 * (can_duoi - 1);
					if (k > so_SB - 1)  k -= 3;
					y = y + 4 * (k / 3);
					HighLight_Word(x, y, a[k], b[k]);
				}
			}
			else if (t == xuong)
			{
				if (k + 3 < so_SB)
				{
					Normal_Word(x, y, a[k], b[k]);
					y += 4; k += 3;
					HighLight_Word(x, y, a[k], b[k]);
				}
				else
				{
					Normal_Word(x, y, a[k], b[k]);
					y = y - 4 * (k / 3); k = k % 3;
					HighLight_Word(x, y, a[k], b[k]);
				}
			}

			else if (t == trai)
			{
				if (k > 0)
				{
					if (k % 3 == 0)
					{
						Normal_Word(x, y, a[k], b[k]);
						x += 54; y -= 4; k--;
						HighLight_Word(x, y, a[k], b[k]);
					}
					else
					{
						Normal_Word(x, y, a[k], b[k]);
						x -= 27; k--;
						HighLight_Word(x, y, a[k], b[k]);
					}
				}
				else
				{
					Normal_Word(x, y, a[k], b[k]);
					y = y + 4 * (can_duoi - 1); k = so_SB - 1; x = x + 27 * (k % 3);
					HighLight_Word(x, y, a[k], b[k]);
				}
			}
			else if (t == phai)
			{
				if (k < so_SB - 1)
				{
					if (k % 3 == 2)
					{
						Normal_Word(x, y, a[k], b[k]);
						x -= 54; y += 4; k++;
						HighLight_Word(x, y, a[k], b[k]);

					}
					else
					{
						Normal_Word(x, y, a[k], b[k]);
						x += 27; k++;
						HighLight_Word(x, y, a[k], b[k]);
					}
				}
				else
				{
					Normal_Word(x, y, a[k], b[k]);
					y = y - 4 * (k / 3); k = 0; x = x1;
					HighLight_Word(x, y, a[k], b[k]);
				}
			}
		}
		else if (t == esc)
		{
			Normal(); char z[] = "\0"; return z;
		}
		else if (t == enter)
		{
			Normal(); return a[k];
		}
	} while (1);
}

void ancontro()
{
	HANDLE hOut;
	CONSOLE_CURSOR_INFO ConCurInf;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	ConCurInf.dwSize = 10;
	ConCurInf.bVisible = FALSE;
	SetConsoleCursorInfo(hOut, &ConCurInf);
}

void hiencontro()
{
	HANDLE hOut;
	CONSOLE_CURSOR_INFO ConCurInf;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	ConCurInf.dwSize = 10;
	ConCurInf.bVisible = TRUE;
	SetConsoleCursorInfo(hOut, &ConCurInf);
}
//////////
void ho_tro_xoa_MB(dsMB& dsmb, int& n, char& k, int& i, int& r, int& so, int x, int y)
{
	//int x = 70, y = 6;
	ke_khung_in_MB(x, y);
	gotoxy(x + 3, y + 1);
	cout << "SO HIEU MAY BAY";
	gotoxy(x + 31, y + 1);;
	cout << "LOAI MAY BAY";
	gotoxy(x + 56, y + 1);
	cout << "SO LUOT THUC HIEN";
	gotoxy(x + 76, y + 1);
	cout << "SO CHO";
	y += 2;
	int y1 = y;
	y += 22;
	gotoxy(x + 37, y);
	cout << "<- ->";
	HighLight();
	gotoxy(x + 40, y);
	cout << "->";
	Normal();
	gotoxy(x + 38, y + 1);
	cout << so << "/" << ceil(dsmb.soMB / 10.0);
	y = y1;
	y1 += 22;
	int  kt = i + 10, x3 = x + 8, y3 = y + 1;
	ancontro();
	do
	{
		for (; i < dsmb.soMB && i < kt; i++, y += 2)
		{
			ke_khung_in_MB(x, y);
			gotoxy(x, y); cout << (char)204;
			gotoxy(x + 19, y); cout << (char)206;
			gotoxy(x + 54, y); cout << (char)206;
			gotoxy(x + 74, y); cout << (char)206;
			gotoxy(x + 84, y); cout << (char)185;
			gotoxy(x + 8, y + 1);
			cout << dsmb.mb[i]->shMB;
			gotoxy(x + 21, y + 1);
			cout << "                              ";
			gotoxy(x + 20 + (35 - strlen(dsmb.mb[i]->lMB)) / 2, y + 1);
			cout << dsmb.mb[i]->lMB;
			gotoxy(x + 64, y + 1);
			cout << dsmb.mb[i]->slth;
			gotoxy(x + 78, y + 1);
			cout << dsmb.mb[i]->seat;
		}
		HighLight();
		gotoxy(x3, y3 + (r % 10) * 2);
		cout << dsmb.mb[r]->shMB;
		Normal();
		k = getch();
		gotoxy(40, 33);
		cout << "                    ";
		if (k == -32)
		{
			k = getch();
			if (k == phai && i < dsmb.soMB)
			{
				gotoxy(x + 40, y1);
				HighLight();
				cout << "->";
				Normal();
				gotoxy(x + 37, y1);
				cout << "<-";
				y = y3 - 1; kt = i + 10; so++; gotoxy(x + 38, y1 + 1); cout << so;
				if (r + 10 <= dsmb.soMB - 1) r = r + 10;
				else r = (dsmb.soMB - 1) - (dsmb.soMB - 1) % 10;
				for (int j = y3; j < y3 + 20; j++)
				{
					gotoxy(x, j);
					cout << "                                                                                                                                ";
				}

			}
			else if (k == trai && i > 10)
			{
				gotoxy(x + 37, y1);
				HighLight();
				cout << "<-";
				Normal();
				gotoxy(x + 40, y1);
				cout << "->";
				if (i != 10)
				{
					i = i - 10 - ((i % 10 == 0) ? 10 : (i % 10)); y = y3 - 1; kt = i + 10;  so--; gotoxy(x + 38, y1 + 1); cout << so;
					if (r - 10 >= 0)r = r - 10;
					for (int j = y3; j < y3 + 20; j++)
					{
						gotoxy(x, j);
						cout << "                                                                                                                                ";
					}

				}
			}
			else if (k == len && r > 0)
			{
				if (r % 10 == 0)
				{
					gotoxy(x3, y3 + (r % 10) * 2);
					cout << dsmb.mb[r]->shMB;
					r--; i = r - 9; y = y3 - 1; kt = i + 10; so--; gotoxy(x + 38, y1 + 1); cout << so;
					for (int j = y3; j < y3 + 20; j++)
					{
						gotoxy(x, j);
						cout << "                                                                                                                                ";
					}
				}
				else
				{
					gotoxy(x3, y3 + (r % 10) * 2);
					cout << dsmb.mb[r]->shMB;
					r--;
					HighLight();
					gotoxy(x3, y3 + (r % 10) * 2);
					cout << dsmb.mb[r]->shMB;
					Normal();
				}
			}
			else if (k == xuong && r < dsmb.soMB - 1)
			{
				if (r % 10 == 9)
				{
					gotoxy(x3, y3 + (r % 10) * 2);
					cout << dsmb.mb[r]->shMB;
					r++; i = r; y = y - 20; kt = i + 10; so++; gotoxy(x + 38, y1 + 1); cout << so;
					for (int j = y3; j < y3 + 20; j++)
					{
						gotoxy(x, j);
						cout << "                                                                                                                                ";
					}
				}
				else
				{
					gotoxy(x3, y3 + (r % 10) * 2);
					cout << dsmb.mb[r]->shMB;
					r++;
					HighLight();
					gotoxy(x3, y3 + (r % 10) * 2);
					cout << dsmb.mb[r]->shMB;
					Normal();
				}
			}
		}
	} while (!(k == enter || k == esc));
	if (k == enter) n = r;
	hiencontro();
}

void xoa_MB(dsMB& ds_mb, PTR_CB& First)
{
	int n = -1, j = 0, r = 0, so = 1;
	char k = 0;
	int x = 70, y = 6;
	do
	{
		if (ds_mb.soMB == 0)
		{

			for (int j = 0; j < 5; j++)
			{
				gotoxy(x, 6 + j);
				cout << "                                                                                                                      ";
			}

			gotoxy(105, 30);
			cout << "                ";
			gotoxy(105, 31);
			cout << "                ";
			gotoxy(90, 33);
			cout << "                                 ";
			k = esc;
			gotoxy(100, 20);
			cout << "Danh sach rong!";
		}
		else
		{
			ho_tro_xoa_MB(ds_mb, n, k, j, r, so, x, y);
		//	if (k == esc) return;
			if (n != -1)
			{
				if (kt_MB_duoc_chon(First, ds_mb.mb[n]->shMB))
				{
					for (int i = n; i < ds_mb.soMB - 1; i++)
					{
						*ds_mb.mb[i] = *ds_mb.mb[i + 1];
					}
					delete ds_mb.mb[ds_mb.soMB - 1];
					if (r == ds_mb.soMB - 1) r--;
					else if (r % 10 == 0 && r == ds_mb.soMB - 1) r = r - 10;
					if (j % 10 == 0)
					{
						for (int i = 1; i <= 4; i++)
						{
							gotoxy(x, y + ((j - 1) % 10) * 2 + i);
							cout << "                                                                                                          ";
						}
						j = j - 10;
					}
					else if (j % 10 == 1 && j == ds_mb.soMB)
					{
						so--;
						j = j - 11;
					}
					else
					{
						for (int i = 1; i <= 4; i++)
						{
							gotoxy(x, y + ((j - 1) % 10) * 2 + i);
							cout << "                                                                                                          ";
						}
						j = j - j % 10;
					}
					ds_mb.soMB--;
					gotoxy(90, 33);
					cout << "XOA THANH CONG!";
					Sleep(1500);
					gotoxy(90, 33);
					cout << "                ";
				}
				else
				{
					if (j % 10 == 0)
					{

						j = j - 10;
					}
					else if (j % 10 == 1 && j == ds_mb.soMB)
					{
						so--;
						j = j - 11;
					}
					else
					{

						j = j - j % 10;
					}
					gotoxy(90, 33);
					cout << "MAY BAY DA DUOC CHON!";
					Sleep(1500);
					gotoxy(90, 33);
					cout << "                     ";
				}
			}
			n = -1;
		}
	} while (k != esc);
}

void hieu_chinh_MB(dsMB& ds_mb, PTR_CB& First)
{
	int n = -1, j = 0, r = 0, so = 1, i = 1;
	char k = 0, e[5] = "";
	int x = 70, y = 8;
	char a[40] = "", b[4][30] = { "CHON LOAI MAY BAY","SO CHO","LUU","THOAT" };
	if (ds_mb.soMB == 0)
	{
		gotoxy(90, 20);
		cout << "Danh sach rong!";
		system("pause");
	}
	else
	{
		hiencontro();
		gotoxy(x + 35, y - 1); cout << "CHON MAY BAY";
		Normal_khung_chu(x, y + 27, 32, b[0]);
		tao_khung(x + 40, y + 27, 45);
		gotoxy(x + 40, y + 32); cout << b[1];
		tao_khung(x + 41 + strlen(b[1]), y + 31, 20);
		Normal_khung_chu(x + 41 + strlen(b[1]), y + 35, strlen(b[2]) + 4, b[2]);
		Normal_khung_chu(x + 41 + strlen(b[1]) + strlen(b[2]) + 6, y + 35, strlen(b[3]) + 4, b[3]);
		ho_tro_xoa_MB(ds_mb, n, k, j, r, so, x, y);
		if (n != -1)
		{
			gotoxy(x + 41, y + 28);
			cout << "                                          ";
			gotoxy(x + 40 + (45 - strlen(ds_mb.mb[n]->lMB)) / 2, y + 28);
			cout << ds_mb.mb[n]->lMB;
			gotoxy(x + 55, y + 32);
			cout << ds_mb.mb[n]->seat;
			itoa(ds_mb.mb[n]->seat, e, 10);
			strcpy(a, ds_mb.mb[n]->lMB);
		}
		do
		{
			if (k == esc)
			{
				XOA_MH(); return;
			}
			switch (i)
			{
			case 0:
			{
				Normal_khung_chu(x, y + 27, 32, b[0]);
				if (j % 10 == 0 && n != ds_mb.soMB - 1)
					j -= 10;
				else j = j - j % 10;
				strcpy(e, "");
				strcpy(a, "");
				ho_tro_xoa_MB(ds_mb, n, k, j, r, so, x, y);
				gotoxy(x + 41, y + 28);
				cout << "                                          ";
				gotoxy(x + 40 + (45 - strlen(ds_mb.mb[n]->lMB)) / 2, y + 28);
				cout << ds_mb.mb[n]->lMB;
				gotoxy(x + 55, y + 32);
				cout << ds_mb.mb[n]->seat;
				itoa(ds_mb.mb[n]->seat, e, 10);
				strcpy(a, ds_mb.mb[n]->lMB);
				i++; continue;
				break;
			}
			case 1:
			{
				ancontro();
				HighLight_khung(x, y + 27, 32, b[0]);
				break;
			}

			case 2:
			{
				Normal_khung_chu(x, y + 27, 32, b[0]);
				Normal_khung_chu(x + 41 + strlen(b[1]), y + 35, strlen(b[2]) + 4, b[2]);
				hiencontro();
				int d = strlen(e);
				gotoxy(x + 55 + d, y + 32);
				int x2 = wherex(), y2 = wherey();
				int x1, y1;
				while (1)
				{
					e[d] = getch();
					if (d == 0 && a[d] == 48)
					{
						e[d] = '\0';
					}
					else if (e[d] >= 48 && e[d] <= 57 && d <= 2)
					{
						gotoxy(x2, y2);
						cout << e[d];
						d++; x2++;
					}
					else if (e[d] == backspace && d != 0)
					{
						x1 = wherex();
						y1 = wherey();
						gotoxy(x1 - 1, y1);
						cout << " ";
						gotoxy(x1 - 1, y1);
						d -= 1; x2--;
					}
					else if (e[d] == -32)
					{
						e[d] = getch();
						if (e[d] == trai)
						{
							i--;
							e[d] = '\0';
							break;
						}

						else if (e[d] == phai)
						{
							i++;
							e[d] = '\0';
							break;
						}

					}
				}
				ancontro();
				continue;
			}

			case 3:
			{
				Normal_khung_chu(x + 41 + strlen(b[1]) + strlen(b[2]) + 6, y + 35, strlen(b[3]) + 4, b[3]);
				HighLight_khung(x + 41 + strlen(b[1]), y + 35, strlen(b[2]) + 4, b[2]);
				break;
			}

			case 4:
			{
				Normal_khung_chu(x + 41 + strlen(b[1]), y + 35, strlen(b[2]) + 4, b[2]);
				HighLight_khung(x + 41 + strlen(b[1]) + strlen(b[2]) + 6, y + 35, strlen(b[3]) + 4, b[3]);
				break;
			}

			}
			k = getch();
			gotoxy(x + 61 + strlen(b[1]), y + 32);
			cout << "                                                        ";
			gotoxy(x + 70, y + 36);
			cout << "                     ";
			if (k == enter)
			{
				switch (i)
				{

				case 1:
				{
					Normal_khung_chu(x, y + 27, 32, b[0]);
					gotoxy(x, y + 31);
					strcpy(a, chon_loai_MB());
					HighLight_khung(x, y + 27, 32, b[0]);
					for (int t = y + 31; t < y + 31 + 23; t++)
					{
						gotoxy(x, t);
						cout << "                                  ";
					}
					if (strlen(a) != 0)
					{
						tao_khung(x + 40, y + 27, 45);
						gotoxy(x + 41, y + 28);
						cout << "                                          ";
						gotoxy(x + 40 + (45 - strlen(a)) / 2, y + 28);
						cout << a;
					}
					break;
				}

				case 3:
				{
					int seat = atoi(e);
					if (seat >= 20 && seat <= 200)
					{
						if (kt_cho_ngoi_CB(First, ds_mb.mb[n]->shMB, seat))
						{
							if (strlen(a) != 0)
							{
								strcpy(ds_mb.mb[n]->lMB, a);
								ds_mb.mb[n]->seat = seat;
							}
							else ds_mb.mb[n]->seat = seat;
							hieu_chinh_dsveCB(First, ds_mb.mb[n]->shMB, seat);
						}
						else
						{
							gotoxy(x + 61 + strlen(b[1]), y + 32);
							cout << "KHONG THE HIEU CHINH VI MAY BAY DA CO HANH KHACH DAT CHO";
							continue;
						}

					}
					else if (seat == 0)
					{
						gotoxy(x + 61 + strlen(b[1]), y + 32);
						cout << "KHONG DUOC DE TRONG";
						continue;
					}
					else if ((seat < 20 && seat != 0) || (seat > 200))
					{
						gotoxy(x + 61 + strlen(b[1]), y + 32);
						cout << "SO CHO NGOI PHAI >= 20 va <=200";
						continue;
					}
					gotoxy(x + 20, y + 3 + (r % 10) * 2);
					cout << "                              ";
					gotoxy(x + 20 + ((35 - strlen(ds_mb.mb[n]->lMB)) / 2), y + 3 + (r % 10) * 2);
					cout << ds_mb.mb[n]->lMB;
					gotoxy(x + 78, y + 3 + (r % 10) * 2); cout << "   ";
					gotoxy(x + 78, y + 3 + (r % 10) * 2);
					cout << ds_mb.mb[n]->seat;
					Normal_khung_chu(x + 41 + strlen(b[1]), y + 35, strlen(b[2]) + 4, b[2]);
					gotoxy(x + 41, y + 28);
					cout << "                                          ";
					gotoxy(x + 55, y + 32);
					cout << "   ";
					gotoxy(x + 70, y + 36); cout << "HIEU CHINH THANH CONG";
					i = 0;
					continue;
				}

				case 4:
				{
					XOA_MH();
					return;
				}
				}
			}
			else if (k == -32)
			{
				k = getch();
				if (k == phai && i < 4)
					i++;
				else if (k == trai)
				{
					if (i > 0)
						i--;
					/*else if (i == 1)
					{
						Normal_khung_chu(x, y + 27, 32, b[0]);
						if (j % 10 == 0 && n != ds_mb.soMB - 1)
							j -= 10;
						else j = j - j % 10;
						strcpy(e, "");
						strcpy(a, "");
						ho_tro_xoa_MB(ds_mb, n, k, j, r, so, x, y);
						gotoxy(x + 41, y + 28);
						cout << "                                          ";
						gotoxy(x + 40 + (45 - strlen(ds_mb.mb[n]->lMB)) / 2, y + 28);
						cout << ds_mb.mb[n]->lMB;
						gotoxy(x + 55, y + 32);
						cout << ds_mb.mb[n]->seat;
						itoa(ds_mb.mb[n]->seat, e, 10);
						strcpy(a, ds_mb.mb[n]->lMB);
					}*/
				}
			}
		} while (1);
	}
}

void ho_tro_CB(dsMB& dsmb, char& k, int& n, int i, int r, int so, int x, int y)
{
	//int x = 70, y = 6;
	ke_khung_in_MB(x, y);
	gotoxy(x + 3, y + 1);
	cout << "SO HIEU MAY BAY";
	gotoxy(x + 31, y + 1);;
	cout << "LOAI MAY BAY";
	gotoxy(x + 56, y + 1);
	cout << "SO LUOT THUC HIEN";
	gotoxy(x + 76, y + 1);
	cout << "SO CHO";
	y += 2;
	int y1 = y;
	y += 22;
	gotoxy(x + 37, y);
	cout << "<- ->";
	HighLight();
	gotoxy(x + 40, y);
	cout << "->";
	Normal();
	gotoxy(x + 38, y + 1);
	cout << so << "/" << ceil(dsmb.soMB / 10.0);
	y = y1;
	y1 += 22;
	int  kt = i + 10, x3 = x + 8, y3 = y + 1;
	ancontro();
	do
	{
		for (; i < dsmb.soMB && i < kt; i++, y += 2)
		{
			ke_khung_in_MB(x, y);
			gotoxy(x, y); cout << (char)204;
			gotoxy(x + 19, y); cout << (char)206;
			gotoxy(x + 54, y); cout << (char)206;
			gotoxy(x + 74, y); cout << (char)206;
			gotoxy(x + 84, y); cout << (char)185;
			gotoxy(x + 8, y + 1);
			cout << dsmb.mb[i]->shMB;
			gotoxy(x + 21, y + 1);
			cout << "                              ";
			gotoxy(x + 20 + (35 - strlen(dsmb.mb[i]->lMB)) / 2, y + 1);
			cout << dsmb.mb[i]->lMB;
			gotoxy(x + 64, y + 1);
			cout << dsmb.mb[i]->slth;
			gotoxy(x + 78, y + 1);
			cout << dsmb.mb[i]->seat;
		}
		HighLight();
		gotoxy(x3, y3 + (r % 10) * 2);
		cout << dsmb.mb[r]->shMB;
		Normal();
		k = getch();
		gotoxy(40, 33);
		cout << "                    ";
		if (k == -32)
		{
			k = getch();
			if (k == phai && i < dsmb.soMB)
			{
				gotoxy(x + 40, y1);
				HighLight();
				cout << "->";
				Normal();
				gotoxy(x + 37, y1);
				cout << "<-";
				y = y3 - 1; kt = i + 10; so++; gotoxy(x + 38, y1 + 1); cout << so;
				if (r + 10 <= dsmb.soMB - 1) r = r + 10;
				else r = (dsmb.soMB - 1) - (dsmb.soMB - 1) % 10;
				for (int j = y3; j < y3 + 20; j++)
				{
					gotoxy(x, j);
					cout << "                                                                                                                                ";
				}

			}
			else if (k == trai && i > 10)
			{
				gotoxy(x + 37, y1);
				HighLight();
				cout << "<-";
				Normal();
				gotoxy(x + 40, y1);
				cout << "->";
				if (i != 10)
				{
					i = i - 10 - ((i % 10 == 0) ? 10 : (i % 10)); y = y3 - 1; kt = i + 10;  so--; gotoxy(x + 38, y1 + 1); cout << so;
					if (r - 10 >= 0)r = r - 10;
					for (int j = y3; j < y3 + 20; j++)
					{
						gotoxy(x, j);
						cout << "                                                                                                                                ";
					}

				}
			}
			else if (k == len && r > 0)
			{
				if (r % 10 == 0)
				{
					gotoxy(x3, y3 + (r % 10) * 2);
					cout << dsmb.mb[r]->shMB;
					r--; i = r - 9; y = y3 - 1; kt = i + 10; so--; gotoxy(x + 38, y1 + 1); cout << so;
					for (int j = y3; j < y3 + 20; j++)
					{
						gotoxy(x, j);
						cout << "                                                                                                                                ";
					}
				}
				else
				{
					gotoxy(x3, y3 + (r % 10) * 2);
					cout << dsmb.mb[r]->shMB;
					r--;
					HighLight();
					gotoxy(x3, y3 + (r % 10) * 2);
					cout << dsmb.mb[r]->shMB;
					Normal();
				}
			}
			else if (k == xuong && r < dsmb.soMB - 1)
			{
				if (r % 10 == 9)
				{
					gotoxy(x3, y3 + (r % 10) * 2);
					cout << dsmb.mb[r]->shMB;
					r++; i = r; y = y - 20; kt = i + 10; so++; gotoxy(x + 38, y1 + 1); cout << so;
					for (int j = y3; j < y3 + 20; j++)
					{
						gotoxy(x, j);
						cout << "                                                                                                                                ";
					}
				}
				else
				{
					gotoxy(x3, y3 + (r % 10) * 2);
					cout << dsmb.mb[r]->shMB;
					r++;
					HighLight();
					gotoxy(x3, y3 + (r % 10) * 2);
					cout << dsmb.mb[r]->shMB;
					Normal();
				}
			}
		}
	} while (!(k == enter || k == esc));
	if (k == enter) n = r;
	hiencontro();
}

void chon_phut(int& phut, char& k, int x, int y)
{
	//int x = 101, y = 8;
	int mang_phut[12]{ 0,5,10,15,20,25,30,35,40,45,50,55 };
	ancontro();
	gotoxy(x + 2, y - 1);
	cout << "PHUT";
	gotoxy(x + 2, y + 1);
	cout << "    ";
	for (int i = y + 2; i <= y + 4; i++)
	{
		gotoxy(x + 2, i);
		cout << "     ";
	}
	for (int i = 1; i <= 8; i++)
	{
		gotoxy(x + 3, i + y + 1); if (mang_phut[i] < 10) cout << "0";
		cout << mang_phut[i];
	}
	//char k;
	int i = 0, can = 0;
	y++;
	x = x + 3;
	gotoxy(x, y); HighLight();
	cout << "0" << mang_phut[0]; Normal();
	do
	{
		k = getch();
		if (k == -32)
		{
			k = getch();
			if (k == len)
			{
				if (i > 0 && can != 0)
				{
					gotoxy(x, y); if (mang_phut[i] < 10) cout << "0";
					cout << mang_phut[i];
					i--; y--; can--;
					gotoxy(x, y);
					HighLight(); if (mang_phut[i] < 10) cout << "0";
					cout << mang_phut[i];
					Normal();
				}
				else if (i >= 1 && i <= 15 && can == 0)
				{
					i--;
					int t = y + 1, q = i + 8;
					for (int j = i + 1; j <= q; j++, t++)
					{
						gotoxy(x, t); if (mang_phut[j] < 10) cout << "0";
						cout << mang_phut[j] << " ";
					}
					gotoxy(x, y); HighLight(); if (mang_phut[i] < 10) cout << "0";
					cout << mang_phut[i]; Normal(); //cout << " ";
				}
			}
			else if (k == xuong)
			{
				if (i < 8)
					{
						gotoxy(x, y); if (mang_phut[i] < 10) cout << "0";
						cout << mang_phut[i];
						i++; y++; can++;
						gotoxy(x, y);
						HighLight(); if (mang_phut[i] < 10) cout << "0";
						cout << mang_phut[i];
						Normal();
					}
				else if (i >= 8 && i < 11)
				{
					int t = y - 8; i++;
					for (int j = i - 8; j <= i; j++, t++)
					{
						gotoxy(x, t); if (mang_phut[j] < 10) cout << "0";
						cout << mang_phut[j];
					}
					gotoxy(x, y); HighLight(); if (mang_phut[i] < 10) cout << "0";
					cout << mang_phut[i]; Normal();
				}
			}
			else if (k == trai || k == phai) return;
		}
		else if (k == enter)
		{
			phut = mang_phut[i]; return;
		}
		else if (k == esc) return;
	} while (1);
}

void chon_gio(int& gio, char& k, int x, int y)
{
	//int x = 101, y = 8;
	int mang_gio[24]{ 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23 };
	ancontro();
	gotoxy(x + 2, y - 1);
	cout << "GIO ";
	for (int i = y + 1; i <= y + 9; i++)
	{
		gotoxy(x + 2, i);
		cout << "     ";
	}
	for (int i = 1; i <= 8; i++)
	{
		gotoxy(x + 3, i + y + 1); if (mang_gio[i] < 10) cout << "0";
		cout << mang_gio[i];
	}
	//char k;
	int i = 0, can = 0;
	y++;
	x = x + 3;
	gotoxy(x, y); HighLight();
	cout << "0" << mang_gio[0]; Normal();
	do
	{
		k = getch();
		if (k == -32)
		{
			k = getch();
			if (k == len)
			{
				if (i > 0 && can != 0)
				{
					gotoxy(x, y); if (mang_gio[i] < 10) cout << "0";
					cout << mang_gio[i];
					i--; y--; can--;
					gotoxy(x, y);
					HighLight(); if (mang_gio[i] < 10) cout << "0";
					cout << mang_gio[i];
					Normal();
				}
				else if (i >= 1 && i <= 15 && can == 0)
				{
					i--;
					int t = y + 1, q = i + 8;
					for (int j = i + 1; j <= q; j++, t++)
					{
						gotoxy(x, t); if (mang_gio[j] < 10) cout << "0";
						cout << mang_gio[j] << " ";
					}
					gotoxy(x, y); HighLight(); if (mang_gio[i] < 10) cout << "0";
					cout << mang_gio[i]; Normal(); cout << " ";
				}
			}
			else if (k == xuong)
			{
				if (i < 8)
					{
						gotoxy(x, y); if (mang_gio[i] < 10) cout << "0";
						cout << mang_gio[i];
						i++; y++; can++;
						gotoxy(x, y);
						HighLight(); if (mang_gio[i] < 10) cout << "0";
						cout << mang_gio[i];
						Normal();
					}
				else if (i >= 8 && i < 23)
				{
					int t = y - 8; i++;
					for (int j = i - 8; j <= i; j++, t++)
					{
						gotoxy(x, t); if (mang_gio[j] < 10) cout << "0";
						cout << mang_gio[j];
					}
					gotoxy(x, y); HighLight(); if (mang_gio[i] < 10) cout << "0";
					cout << mang_gio[i]; Normal();
				}
			}
			else if (k == trai || k == phai) return;
		}
		else if (k == enter)
		{
			gio = mang_gio[i]; hiencontro(); return;
		}
		else if (k == esc) return;
	} while (1);
}

void chon_ngay(int& ngay, int thang, int nam, char& k, int x, int y)
{
	int mang_ngay[31]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31 };
	gotoxy(x + 1, y - 1);
	cout << "     ";
	gotoxy(x + 2, y - 1); cout << "NGAY ";
	for (int i = y + 1; i <= y + 9; i++)
	{
		gotoxy(x + 2, i);
		cout << "   ";
	}
	for (int i = 1; i <= 8; i++)
	{
		gotoxy(x + 3, i + y + 1);
		cout << "0" << mang_ngay[i];
	}
	//char k;
	int i = 0, can = 0;
	y++;
	x = x + 3;
	gotoxy(x, y); HighLight();
	cout << "0" << mang_ngay[0]; Normal();
	switch (thang)
	{
	case 0:
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		do
		{
			gotoxy(x + 17 + 11, y + 4);
			k = getch();
			if (k == -32)
			{
				k = getch();
				if (k == len)
				{
					if (i > 0 && can != 0)
					{
						gotoxy(x, y); if (mang_ngay[i] < 10) cout << "0";
						cout << mang_ngay[i];
						i--; y--; can--;
						gotoxy(x, y);
						HighLight(); if (mang_ngay[i] < 10) cout << "0";
						cout << mang_ngay[i];
						Normal();
					}
					else if (i >= 1 && i <= 22 && can == 0)
					{
						i--;
						int t = y + 1, q = i + 8;
						for (int j = i + 1; j <= q; j++, t++)
						{
							gotoxy(x, t); if (mang_ngay[j] < 10) cout << "0";
							cout << mang_ngay[j] << " ";
						}
						gotoxy(x, y); HighLight(); if (mang_ngay[i] < 10) cout << "0";
						cout << mang_ngay[i]; Normal(); //cout << " ";
					}
				}
				else if (k == xuong)
				{
					if (i < 8)
						{
							gotoxy(x, y); if (mang_ngay[i] < 10) cout << "0";
							cout << mang_ngay[i];
							i++; y++; can++;
							gotoxy(x, y);
							HighLight(); if (mang_ngay[i] < 10) cout << "0";
							cout << mang_ngay[i];
							Normal();
						}
					else if (i >= 8 && i < 30)
					{
						int t = y - 8; i++;
						for (int j = i - 8; j <= i; j++, t++)
						{
							gotoxy(x, t); if (mang_ngay[j] < 10) cout << "0";
							cout << mang_ngay[j];
						}
						gotoxy(x, y); HighLight(); if (mang_ngay[i] < 10) cout << "0";
						cout << mang_ngay[i]; Normal();
					}
				}
				else if (k == phai || k == trai) return;
			}
			else if (k == enter)
			{
				ngay = mang_ngay[i]; hiencontro(); return;
			}
			else if (k == esc) return;
		} while (1);
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		do
		{
			k = getch();
			if (k == -32)
			{
				k = getch();
				if (k == len)
				{
					if (i > 0 && can != 0)
					{
						gotoxy(x, y); if (mang_ngay[i] < 10) cout << "0";
						cout << mang_ngay[i];
						i--; y--; can--;
						gotoxy(x, y);
						HighLight(); if (mang_ngay[i] < 10) cout << "0";
						cout << mang_ngay[i];
						Normal();
					}
					else if (i >= 1 && i <= 21 && can == 0)
					{
						i--;
						int t = y + 1, q = i + 8;
						for (int j = i + 1; j <= q; j++, t++)
						{
							gotoxy(x, t); if (mang_ngay[j] < 10) cout << "0";
							cout << mang_ngay[j] << " ";
						}
						gotoxy(x, y); HighLight(); if (mang_ngay[i] < 10) cout << "0";
						cout << mang_ngay[i]; Normal(); cout << " ";
					}
				}
				else if (k == xuong)
				{
					if (i < 8)
						{
							gotoxy(x, y); if (mang_ngay[i] < 10) cout << "0";
							cout << mang_ngay[i];
							i++; y++; can++;
							gotoxy(x, y);
							HighLight(); if (mang_ngay[i] < 10) cout << "0";
							cout << mang_ngay[i];
							Normal();
						}
					else if (i >= 8 && i < 29)
					{
						int t = y - 8; i++;
						for (int j = i - 8; j <= i; j++, t++)
						{
							gotoxy(x, t); if (mang_ngay[j] < 10) cout << "0";
							cout << mang_ngay[j];
						}
						gotoxy(x, y); HighLight(); if (mang_ngay[i] < 10) cout << "0";
						cout << mang_ngay[i]; Normal();
					}
				}
				else if (k == phai || k == trai) return;
			}
			else if (k == enter)
			{
				ngay = mang_ngay[i]; hiencontro(); return;
			}
			else if (k == esc) return;
		} while (1);
	}
	case 2:
		if (la_nam_nhuan(nam) && nam > 0)
		{
			do
			{
				k = getch();
				if (k == -32)
				{
					k = getch();
					if (k == len)
					{
						if (i > 0 && can != 0)
						{
							gotoxy(x, y); if (mang_ngay[i] < 10) cout << "0";
							cout << mang_ngay[i];
							i--; y--; can--;
							gotoxy(x, y);
							HighLight(); if (mang_ngay[i] < 10) cout << "0";
							cout << mang_ngay[i];
							Normal();
						}
						else if (i >= 1 && i <= 20 && can == 0)
						{
							i--;
							int t = y + 1, q = i + 8;
							for (int j = i + 1; j <= q; j++, t++)
							{
								gotoxy(x, t); if (mang_ngay[j] < 10) cout << "0";
								cout << mang_ngay[j];
							}
							gotoxy(x, y); HighLight(); if (mang_ngay[i] < 10) cout << "0";
							cout << mang_ngay[i]; Normal();
						}
					}
					else if (k == xuong)
					{
						if (i < 8)
							{
								gotoxy(x, y); if (mang_ngay[i] < 10) cout << "0";
								cout << mang_ngay[i];
								i++; y++; can++;
								gotoxy(x, y);
								HighLight(); if (mang_ngay[i] < 10) cout << "0";
								cout << mang_ngay[i];
								Normal();
							}
						else if (i >= 8 && i < 28)
						{
							int t = y - 8; i++;
							for (int j = i - 8; j <= i; j++, t++)
							{
								gotoxy(x, t); if (mang_ngay[j] < 10) cout << "0";
								cout << mang_ngay[j];
							}
							gotoxy(x, y); HighLight(); if (mang_ngay[i] < 10) cout << "0";
							cout << mang_ngay[i]; Normal();
						}
					}
					else if (k == phai || k == trai) return;
				}
				else if (k == enter)
				{
					ngay = mang_ngay[i]; return;
				}
				else if (k == esc) return;
			} while (1);
		}
		else
		{
			do
			{
				k = getch();
				if (k == -32)
				{
					k = getch();
					if (k == len)
					{
						if (i > 0 && can != 0)
						{
							gotoxy(x, y); if (mang_ngay[i] < 10) cout << "0";
							cout << mang_ngay[i];
							i--; y--; can--;
							gotoxy(x, y);
							HighLight(); if (mang_ngay[i] < 10) cout << "0";
							cout << mang_ngay[i];
							Normal();
						}
						else if (i >= 1 && i <= 19 && can == 0)
						{
							i--;
							int t = y + 1, q = i + 8;
							for (int j = i + 1; j <= q; j++, t++)
							{
								gotoxy(x, t); if (mang_ngay[j] < 10) cout << "0";
								cout << mang_ngay[j] << " ";
							}
							gotoxy(x, y); HighLight(); if (mang_ngay[i] < 10) cout << "0";
							cout << mang_ngay[i]; Normal(); //cout << " ";

						}
					}
					else if (k == xuong)
					{
						if (i < 8)
							{
								gotoxy(x, y); if (mang_ngay[i] < 10) cout << "0";
								cout << mang_ngay[i];
								i++; y++; can++;
								gotoxy(x, y);
								HighLight(); if (mang_ngay[i] < 10) cout << "0";
								cout << mang_ngay[i];
								Normal();
							}
						else if (i >= 8 && i < 27)
						{
							int t = y - 8; i++;
							for (int j = i - 8; j <= i; j++, t++)
							{
								gotoxy(x, t); if (mang_ngay[j] < 10) cout << "0";
								cout << mang_ngay[j];
							}
							gotoxy(x, y); HighLight(); if (mang_ngay[i] < 10) cout << "0";
							cout << mang_ngay[i]; Normal();
						}
					}
					else if (k == phai || k == trai) return;
				}
				else if (k == enter)
				{
					ngay = mang_ngay[i]; hiencontro(); return;
				}
				else if (k == esc) return;
			} while (1);
		}
	}

}

void chon_thang(int& thang, char& k, int x, int y)
{
	int mang_thang[12]{ 1,2,3,4,5,6,7,8,9,10,11,12 };
	ancontro();
	gotoxy(x + 1, y - 1); cout << "THANG";
	for (int i = y + 1; i <= y + 9; i++)
	{
		gotoxy(x + 2, i);
		cout << "    ";
	}
	for (int i = y + 2; i <= y + 9; i++)
	{
		gotoxy(x + 3, i); if (mang_thang[i - y - 1] < 10) cout << "0";
		cout << mang_thang[i - y - 1];
	}
	int i = 0, can = 0;
	y++;
	x = x + 3;
	gotoxy(x, y); HighLight();
	cout << "0" << mang_thang[0]; Normal();
	do
	{
		k = getch();
		if (k == -32)
		{
			k = getch();
			if (k == len)
			{
				if (i > 0 && can != 0)
				{
					gotoxy(x, y); if (mang_thang[i] < 10) cout << "0";
					cout << mang_thang[i];
					i--; y--; can--;
					gotoxy(x, y);
					HighLight(); if (mang_thang[i] < 10) cout << "0";
					cout << mang_thang[i];
					Normal();
				}
				else if (i >= 1 && i <= 3 && can == 0)
				{
					i--;
					int t = y + 1, q = i + 8;;
					for (int j = i + 1; j <= q; j++, t++)
					{
						gotoxy(x, t); if (mang_thang[j] < 10) cout << "0";
						cout << mang_thang[j] << " ";
					}
					gotoxy(x, y); HighLight(); if (mang_thang[i] < 10) cout << "0";
					cout << mang_thang[i]; Normal();
				}
			}
			else if (k == xuong)
			{
				if (i < 8)
					{
						gotoxy(x, y); if (mang_thang[i] < 10) cout << "0";
						cout << mang_thang[i];
						i++; y++; can++;
						gotoxy(x, y);
						HighLight(); if (mang_thang[i] < 10) cout << "0";
						cout << mang_thang[i];
						Normal();
					}
				else if (i >= 8 && i < 11)
				{
					int t = y - 8; i++;
					for (int j = i - 8; j <= i; j++, t++)
					{
						gotoxy(x, t); if (mang_thang[j] < 10) cout << "0";
						cout << mang_thang[j];
					}
					gotoxy(x, y); HighLight(); if (mang_thang[i] < 10) cout << "0";
					cout << mang_thang[i]; Normal();
				}
			}
			else if (k == trai || k == phai)
			{
				return;
			}
		}
		else if (k == enter)
		{
			thang = mang_thang[i]; hiencontro(); return;
		}
		else if (k == esc) return;
	} while (1);
}

void chon_nam(int& nam, char& k, int x, int y)
{
	time_t now = time(0);
	tm* ltm = localtime(&now);
	int mang_nam[4]{ ltm->tm_year + 1900,ltm->tm_year + 1901,ltm->tm_year + 1902,ltm->tm_year + 1903 };
	//int x = 101, y = 8;
	ancontro();
	/*gotoxy(x + 1, y);
	cout << "     ";*/
	gotoxy(x + 1, y - 1); cout << " NAM ";
	for (int i = y + 1; i <= y + 9; i++)
	{
		gotoxy(x + 2, i);
		cout << "   ";
	}
	/*gotoxy(x + 1, y);
	cout << char(201);
	for (int i = 1; i <= 5; i++)
		cout << char(205);
	cout << char(187);
	for (int i = 1; i <= 9; i++)
	{
		gotoxy(x + 1, y + i);
		cout << char(186);
		gotoxy(x + 7, y + i);
		cout << char(186);
	}
	gotoxy(x + 1, y + 10);
	cout << char(200);
	for (int i = 1; i <= 5; i++)
		cout << char(205);
	cout << char(188);
	for (int i = y + 1; i <= y + 9; i++)
	{
		gotoxy(x + 2, i);
		cout << "   ";
	}*/

	for (int i = 1; i <= 3; i++)
	{
		gotoxy(x + 2, i + y + 1);
		cout << mang_nam[i];
	}
	//char k;
	int i = 0;
	y++;
	x = x + 2;
	gotoxy(x, y); HighLight();
	cout << mang_nam[0]; Normal();
	do
	{
		k = getch();
		if (k == -32)
		{
			k = getch();
			if (k == len && i != 0)
			{
				gotoxy(x, y);
				cout << mang_nam[i];
				i--; y--;
				gotoxy(x, y);
				HighLight();
				cout << mang_nam[i];
				Normal();

			}
			else if (k == xuong && i != 3)
			{
				gotoxy(x, y);
				cout << mang_nam[i];
				i++; y++;
				gotoxy(x, y);
				HighLight();
				cout << mang_nam[i];
				Normal();
			}
			else if (k == phai || k == trai) return;
		}
		else if (k == enter)
		{
			nam = mang_nam[i]; hiencontro(); return;
		}
		else if (k == esc) return;
	} while (1);
}

bool ktra_SHMB(PTR_CB CB, PTR_CB q, dsMB dsmb)
{
	for (PTR_CB p = CB; p != NULL; p = p->next)
	{
		if (p->infocb.date_time.ngay == q->infocb.date_time.ngay && p->infocb.date_time.thang == q->infocb.date_time.thang &&
			p->infocb.date_time.nam == q->infocb.date_time.nam && (strcmp(p->infocb.shMB, q->infocb.shMB) == 0)) return 0;
	}
	return 1;
}

bool ktra_SBden(PTR_CB CB, PTR_CB p, dsMB dsmb)
{
	for (PTR_CB p1 = CB; p1 != NULL; p1 = p1->next)
	{
		if (p->infocb.date_time.ngay == p1->infocb.date_time.ngay && p->infocb.date_time.thang == p1->infocb.date_time.thang
			&& p->infocb.date_time.nam == p1->infocb.date_time.nam && strcmp(p->infocb.san_bay_den, p1->infocb.san_bay_den) == 0)
			if (abs(p->infocb.date_time.phut + p->infocb.date_time.gio * 60 - p1->infocb.date_time.phut - p1->infocb.date_time.gio * 60) < 30)
				return 0;
	}
	return 1;
}

void ke_khung_CB(int x, int y)
{
	gotoxy(x, y);
	cout << char(201);
	for (int i = 1; i <= 20; i++) cout << char(205); cout << char(203);
	for (int i = 1; i <= 15; i++) cout << char(205); cout << char(203);
	for (int i = 1; i <= 10; i++) cout << char(205); cout << char(203);
	for (int i = 1; i <= 15; i++) cout << char(205); cout << char(203);
	for (int i = 1; i <= 20; i++) cout << char(205); cout << char(203);
	for (int i = 1; i <= 15; i++)cout << char(205); cout << char(187); cout << endl;

	gotoxy(x, y + 1); cout << char(186);
	gotoxy(x + 21, y + 1); cout << char(186);
	gotoxy(x + 37, y + 1); cout << char(186);
	gotoxy(x + 48, y + 1); cout << char(186);
	gotoxy(x + 64, y + 1); cout << char(186);
	gotoxy(x + 85, y + 1); cout << char(186);
	gotoxy(x + 101, y + 1); cout << char(186); cout << endl;

	gotoxy(x, y + 2);
	cout << char(200);
	for (int i = 1; i <= 20; i++) cout << char(205); cout << char(202);
	for (int i = 1; i <= 15; i++) cout << char(205); cout << char(202);
	for (int i = 1; i <= 10; i++) cout << char(205); cout << char(202);
	for (int i = 1; i <= 15; i++) cout << char(205); cout << char(202);
	for (int i = 1; i <= 20; i++) cout << char(205); cout << char(202);
	for (int i = 1; i <= 15; i++)cout << char(205); cout << char(188);
}

void in_infoCB(PTR_CB p, char* a, DATE_TIME date_time, int x, int y)
{
	PTR_CB ptr = p;
	for (; ptr != NULL; ptr = ptr->next)
	{
		if ((strcmp(ptr->infocb.san_bay_den, a) == 0) && ptr->infocb.date_time.ngay == date_time.ngay &&
			ptr->infocb.date_time.thang == date_time.thang
			&& ptr->infocb.date_time.nam == date_time.nam) break;

	}
	if (ptr == NULL) return;
	ke_khung_CB(x, y); y++;
	gotoxy(x + 5, y); cout << "MA CHUYEN BAY";
	gotoxy((x + 24), y); cout << "SAN BAY DEN";
	gotoxy(x + 40, y); cout << "SO HIEU";
	gotoxy(x + 52, y); cout << "TRANG THAI";
	gotoxy(x + 68, y); cout << "NGAY KHOI HANH";
	gotoxy(x + 88, y); cout << "THOI GIAN";
	y++;
	for (PTR_CB q = ptr; q != NULL; q = q->next)
	{
		if (strcmp(q->infocb.san_bay_den, a) == 0 && q->infocb.date_time.ngay == date_time.ngay && q->infocb.date_time.thang == date_time.thang
			&& q->infocb.date_time.nam == date_time.nam)
		{
			gotoxy(x, y);
			ke_khung_CB(x, y);
			gotoxy(x, y); cout << char(204);
			gotoxy(x + 21, y); cout << char(206);
			gotoxy(x + 37, y); cout << char(206);
			gotoxy(x + 48, y); cout << char(206);
			gotoxy(x + 64, y); cout << char(206);
			gotoxy(x + 85, y); cout << char(206);
			gotoxy(x + 101, y); cout << char(185);
			y++;
			gotoxy(x + (21 - strlen(q->infocb.maCB)) / 2, y); cout << q->infocb.maCB;
			gotoxy(x + 22 + (15 - strlen(q->infocb.san_bay_den)) / 2, y); cout << q->infocb.san_bay_den;
			gotoxy(x + 38 + (10 - strlen(q->infocb.shMB)) / 2, y); cout << q->infocb.shMB;
			gotoxy(x + 56, y); cout << q->infocb.status;
			gotoxy(x + 71, y);
			if (q->infocb.date_time.ngay >= 1 && q->infocb.date_time.ngay <= 9)
				cout << "0";
			cout << q->infocb.date_time.ngay; cout << "/";
			if (q->infocb.date_time.thang >= 1 && q->infocb.date_time.thang <= 9)
				cout << "0";
			cout << q->infocb.date_time.thang; cout << "/";
			cout << q->infocb.date_time.nam;
			gotoxy(x + 91, y);
			if (q->infocb.date_time.gio >= 0 && q->infocb.date_time.gio <= 9)
				cout << "0";
			cout << q->infocb.date_time.gio; cout << ":";
			if (q->infocb.date_time.phut >= 0 && q->infocb.date_time.phut <= 9)
				cout << "0";
			cout << q->infocb.date_time.phut;
			y++;
		}

	}
}

PTR_CB Tao_CB(PTR_CB& CB, dsMB& ds_mb, int* a, int& n, int& so_0, char* macb, int x, int y)
{

	if (ds_mb.soMB == 0)
	{
		gotoxy(70, 20);
		cout << "KHONG CO SO HIEU MAY BAY NAO! BAN CAN CAP NHAT!";
		char k = getch();
		return NULL;
	}
	else
	{
		PTR_CB p = new nodeCB;
		char h[6][30] = { "CHON SAN BAY DEN","NGAY BAY","THOI GIAN","SO HIEU MAY BAY","THEM","THOAT" };
		tao_khung(x + strlen(h[0]) + 9, y, 30);
		gotoxy(x + ((strlen(h[0]) + 4 - strlen(h[1])) / 2), y + 4);
		cout << h[1];
		gotoxy(x + strlen(h[0]) + 10, y + 1);
		cout << "                           ";
		gotoxy(x + ((strlen(h[0]) + 4 - strlen(h[1])) / 2), y + 5);
		cout << "(dd/mm/yyyy)";
		tao_khung(x + strlen(h[0]) + 9, y + 3, 6);
		gotoxy(x + strlen(h[0]) + 10, y + 4);
		cout << "   ";
		gotoxy(x + strlen(h[0]) + 14, y + 4); cout << "/";
		tao_khung(x + strlen(h[0]) + 15, y + 3, 6);
		gotoxy(x + strlen(h[0]) + 16, y + 4);
		cout << "   ";
		gotoxy(x + strlen(h[0]) + 20, y + 4); cout << "/";
		gotoxy(x + strlen(h[0]) + 22, y + 4);
		cout << "    ";
		tao_khung(x + strlen(h[0]) + 21, y + 3, 9);
		gotoxy(x + (strlen(h[0]) + 4 - strlen(h[2])) / 2, y + 7);
		cout << h[2];
		gotoxy(x + (strlen(h[0]) + 4 - strlen(h[2])) / 2, y + 8);
		cout << "(hour/minute)";
		tao_khung(x + strlen(h[0]) + 9, y + 6, 6);
		gotoxy(x + strlen(h[0]) + 10, y + 7);
		cout << "   ";
		gotoxy(x + strlen(h[0]) + 14, y + 7); cout << ":";
		tao_khung(x + strlen(h[0]) + 15, y + 6, 6);
		gotoxy(x + strlen(h[0]) + 16, y + 7);
		cout << "   ";
		Normal_khung_chu(x + (strlen(h[0]) - strlen(h[3])) / 2, y + 9, strlen(h[3]) + 4, h[3]);
		tao_khung(x + strlen(h[0]) + 9, y + 9, 30);
		gotoxy(x + strlen(h[0]) + 10, y + 10);
		cout << "                ";
		Normal_khung_chu(x + strlen(h[0]) + 9, y + 12, strlen(h[4]) + 4, h[4]);
		Normal_khung_chu(x + strlen(h[0]) + 9 + strlen(h[4]) + 6, y + 12, strlen(h[5]) + 4, h[5]);
		gotoxy(x + strlen(h[0]) + 40, y + 13);
		cout << "               ";
		int i = 0;
		char k = -1;
		ancontro();
		IN_TBESC();
		do
		{
			switch (i)
			{
			case 0:
			{
				for (int i = 0; i <= 11; i++)
				{
					gotoxy(x + strlen(h[0]) + 9 + 31 + 1, y + 3 + i);
					cout << "       ";
				}
				HighLight_khung(x, y, strlen(h[0]) + 4, h[0]);
				break;
			}
			case 1:
			{
				Normal_khung_chu(x, y, strlen(h[0]) + 4, h[0]);
				gotoxy(x + strlen(h[0]) + 9 + 31 + 1, y + 4);
				cout << char(201);
				for (int i = 1; i <= 5; i++)
					cout << char(205);
				cout << char(187);
				for (int i = 1; i <= 9; i++)
				{
					gotoxy(x + strlen(h[0]) + 9 + 31 + 1, y + 4 + i);
					cout << char(186);
					gotoxy(x + strlen(h[0]) + 9 + 31 + 7, y + 4 + i);
					cout << char(186);
				}
				gotoxy(x + strlen(h[0]) + 9 + 31 + 1, y + 4 + 10);
				cout << char(200);
				for (int i = 1; i <= 5; i++)
					cout << char(205);
				cout << char(188);
				for (int i = y + 1 + 4; i <= y + 4 + 8; i++)
				{
					gotoxy(x + strlen(h[0]) + 9 + 31 + 2, i);
					cout << "   ";
				}
				chon_ngay(p->infocb.date_time.ngay, p->infocb.date_time.thang, p->infocb.date_time.nam, k, x + strlen(h[0]) + 9 + 31, y + 4);
				if (p->infocb.date_time.ngay != 0)
				{
					gotoxy(x + strlen(h[0]) + 10, y + 4);
					if (p->infocb.date_time.ngay < 10) cout << "0";
					cout << p->infocb.date_time.ngay;
				}
				if (k == trai) i--;
				else if (k == phai || k == enter) i++;
				else if (k == esc) return NULL;
				continue;
			}

			case 2:
			{

				chon_thang(p->infocb.date_time.thang, k, x + strlen(h[0]) + 9 + 31, y + 4);
				if (p->infocb.date_time.thang != 0)
				{
					gotoxy(x + strlen(h[0]) + 16, y + 4);
					if (p->infocb.date_time.thang < 10) cout << "0";
					cout << p->infocb.date_time.thang;
				}
				time_t now = time(0);
				tm* ltm = localtime(&now);
				if (p->infocb.date_time.nam == ltm->tm_year + 1900 && p->infocb.date_time.thang == ltm->tm_mon + 1 && p->infocb.date_time.ngay < ltm->tm_mday + 1) {
					p->infocb.date_time.ngay = ltm->tm_mday + 1;
					gotoxy(x + strlen(h[0]) + 10, y + 4);
					if (p->infocb.date_time.ngay < 10) cout << "0";
					cout << p->infocb.date_time.ngay;
				}
				else if (p->infocb.date_time.nam == ltm->tm_year + 1900 && p->infocb.date_time.thang < ltm->tm_mon + 1)
				{
					p->infocb.date_time.thang = ltm->tm_mon + 1;
					gotoxy(x + strlen(h[0]) + 16, y + 4);
					if (p->infocb.date_time.thang < 10) cout << "0";
					cout << p->infocb.date_time.thang;
					switch (p->infocb.date_time.thang)
					{
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
					case 12:
					{
						if (p->infocb.date_time.ngay <= ltm->tm_mday)
						{
							if (ltm->tm_mday < 31)
							{
								p->infocb.date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								if (p->infocb.date_time.ngay < 10) cout << "0";
								cout << p->infocb.date_time.ngay;
							}
							else
							{
								p->infocb.date_time.ngay = 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								cout << "0";
								cout << p->infocb.date_time.ngay;
								p->infocb.date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + strlen(h[0]) + 16, y + 4);
								if (p->infocb.date_time.thang < 10) cout << "0";
								cout << p->infocb.date_time.thang;
							}
						}
						break;
					}

					case 4:
					case 6:
					case 9:
					case 11:
					{
						if (p->infocb.date_time.ngay <= ltm->tm_mday)
						{
							if (ltm->tm_mday < 30)
							{
								p->infocb.date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								if (p->infocb.date_time.ngay < 10) cout << "0";
								cout << p->infocb.date_time.ngay;
							}
							else
							{
								p->infocb.date_time.ngay = 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								cout << "0";
								cout << p->infocb.date_time.ngay;
								p->infocb.date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + strlen(h[0]) + 16, y + 4);
								if (p->infocb.date_time.thang < 10) cout << "0";
								cout << p->infocb.date_time.thang;
							}
						}
						break;
					}
					case 2:
						if (la_nam_nhuan(p->infocb.date_time.nam) && p->infocb.date_time.nam > 0)
						{
							if (ltm->tm_mday < 29)
							{
								p->infocb.date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								if (p->infocb.date_time.ngay < 10) cout << "0";
								cout << p->infocb.date_time.ngay;
							}
							else
							{
								p->infocb.date_time.ngay = 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								cout << "0";
								cout << p->infocb.date_time.ngay;
								p->infocb.date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + strlen(h[0]) + 16, y + 4);
								if (p->infocb.date_time.thang < 10) cout << "0";
								cout << p->infocb.date_time.thang;
							}
						}
						else
						{
							if (ltm->tm_mday < 28)
							{
								p->infocb.date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								if (p->infocb.date_time.ngay < 10) cout << "0";
								cout << p->infocb.date_time.ngay;
							}
							else
							{
								p->infocb.date_time.ngay = 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								cout << "0";
								cout << p->infocb.date_time.ngay;
								p->infocb.date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + strlen(h[0]) + 16, y + 4);
								if (p->infocb.date_time.thang < 10) cout << "0";
								cout << p->infocb.date_time.thang;
							}
						}
						break;
					}
				}
				else
				{
					switch (p->infocb.date_time.thang)
					{
					case 4:
					case 6:
					case 9:
					case 11:
					{
						if (p->infocb.date_time.ngay == 31)
						{
							p->infocb.date_time.ngay = 30;
							gotoxy(x + strlen(h[0]) + 10, y + 4);
							cout << p->infocb.date_time.ngay;
						}
						break;

					}
					case 2:
					{
						if (la_nam_nhuan(p->infocb.date_time.nam) && p->infocb.date_time.nam > 0)
						{
							if (p->infocb.date_time.ngay > 29)
							{
								p->infocb.date_time.ngay = 29;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								cout << p->infocb.date_time.ngay;
							}
						}
						else
						{
							if (p->infocb.date_time.ngay > 28)
							{
								p->infocb.date_time.ngay = 28;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								cout << p->infocb.date_time.ngay;
							}
						}
						break;
					}

					}
				}
				if (k == trai) i--;
				else if (k == phai || k == enter) i++;
				else if (k == esc) NULL;
				continue;
			}
			case 3:
			{
				chon_nam(p->infocb.date_time.nam, k, x + strlen(h[0]) + 9 + 31, y + 4);
				if (p->infocb.date_time.nam != 0)
				{
					gotoxy(x + strlen(h[0]) + 22, y + 4);
					cout << p->infocb.date_time.nam;
				}
				time_t now = time(0);
				tm* ltm = localtime(&now);
				if (p->infocb.date_time.nam == ltm->tm_year + 1900 && p->infocb.date_time.thang == ltm->tm_mon + 1 && p->infocb.date_time.ngay < ltm->tm_mday + 1) {
					p->infocb.date_time.ngay = ltm->tm_mday + 1;
					gotoxy(x + strlen(h[0]) + 10, y + 4);
					if (p->infocb.date_time.ngay < 10) cout << "0";
					cout << p->infocb.date_time.ngay;
				}
				else if (p->infocb.date_time.nam == ltm->tm_year + 1900 && p->infocb.date_time.thang < ltm->tm_mon + 1)
				{
					p->infocb.date_time.thang = ltm->tm_mon + 1;
					gotoxy(x + strlen(h[0]) + 16, y + 4);
					if (p->infocb.date_time.thang < 10) cout << "0";
					cout << p->infocb.date_time.thang;
					switch (p->infocb.date_time.thang)
					{
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
					case 12:
					{
						if (p->infocb.date_time.ngay <= ltm->tm_mday)
						{
							if (ltm->tm_mday < 31)
							{
								p->infocb.date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								if (p->infocb.date_time.ngay < 10) cout << "0";
								cout << p->infocb.date_time.ngay;
							}
							else
							{
								p->infocb.date_time.ngay = 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								cout << "0";
								cout << p->infocb.date_time.ngay;
								p->infocb.date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + strlen(h[0]) + 16, y + 4);
								if (p->infocb.date_time.thang < 10) cout << "0";
								cout << p->infocb.date_time.thang;
							}
						}
						break;
					}
					case 4:
					case 6:
					case 9:
					case 11:
					{
						if (p->infocb.date_time.ngay <= ltm->tm_mday)
						{
							if (ltm->tm_mday < 30)
							{
								p->infocb.date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								if (p->infocb.date_time.ngay < 10) cout << "0";
								cout << p->infocb.date_time.ngay;
							}
							else
							{
								p->infocb.date_time.ngay = 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								cout << "0";
								cout << p->infocb.date_time.ngay;
								p->infocb.date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + strlen(h[0]) + 16, y + 4);
								if (p->infocb.date_time.thang < 10) cout << "0";
								cout << p->infocb.date_time.thang;
							}
						}
						break;
					}
					case 2:
						if (la_nam_nhuan(p->infocb.date_time.nam) && p->infocb.date_time.nam > 0)
						{
							if (ltm->tm_mday < 29)
							{
								p->infocb.date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								if (p->infocb.date_time.ngay < 10) cout << "0";
								cout << p->infocb.date_time.ngay;
							}
							else
							{
								p->infocb.date_time.ngay = 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								cout << "0";
								cout << p->infocb.date_time.ngay;
								p->infocb.date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + strlen(h[0]) + 16, y + 4);
								if (p->infocb.date_time.thang < 10) cout << "0";
								cout << p->infocb.date_time.thang;
							}
						}
						else
						{
							if (ltm->tm_mday < 28)
							{
								p->infocb.date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								if (p->infocb.date_time.ngay < 10) cout << "0";
								cout << p->infocb.date_time.ngay;
							}
							else
							{
								p->infocb.date_time.ngay = 1;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								cout << "0";
								cout << p->infocb.date_time.ngay;
								p->infocb.date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + strlen(h[0]) + 16, y + 4);
								if (p->infocb.date_time.thang < 10) cout << "0";
								cout << p->infocb.date_time.thang;
							}
						}
						break;
					}
				}
				else
				{
					switch (p->infocb.date_time.thang)
					{
					case 4:
					case 6:
					case 9:
					case 11:
					{
						if (p->infocb.date_time.ngay == 31)
						{
							p->infocb.date_time.ngay = 30;
							gotoxy(x + strlen(h[0]) + 10, y + 4);
							cout << p->infocb.date_time.ngay;
						}
						break;

					}
					case 2:
					{
						if (la_nam_nhuan(p->infocb.date_time.nam) && p->infocb.date_time.nam > 0)
						{
							if (p->infocb.date_time.ngay > 29)
							{
								p->infocb.date_time.ngay = 29;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								cout << p->infocb.date_time.ngay;
							}
						}
						else
						{
							if (p->infocb.date_time.ngay > 28)
							{
								p->infocb.date_time.ngay = 28;
								gotoxy(x + strlen(h[0]) + 10, y + 4);
								cout << p->infocb.date_time.ngay;
							}
						}
						break;
					}

					}
				}
				if (k == trai) i--;
				else if (k == phai || k == enter) i++;
				else if (k == esc) return NULL;
				continue;
			}
			case 4:
			{
				if (p->infocb.date_time.ngay != 0 && p->infocb.date_time.thang != 0 && p->infocb.date_time.nam != 0 && strlen(p->infocb.san_bay_den) != 0)
					in_infoCB(CB, p->infocb.san_bay_den, p->infocb.date_time, x, y + 20);
				chon_gio(p->infocb.date_time.gio, k, x + strlen(h[0]) + 9 + 31, y + 4);
				if (p->infocb.date_time.gio != -1)
				{
					gotoxy(x + strlen(h[0]) + 10, y + 7);
					if (p->infocb.date_time.gio < 10) cout << "0";
					cout << p->infocb.date_time.gio << " ";
				}
				if (k == trai) i--;
				else if (k == phai || k == enter) i++;
				else if (k == esc) return NULL;
				continue;
			}
			case 5:
			{
				Normal_khung_chu(x + ((strlen(h[0]) - strlen(h[3])) / 2), y + 9, strlen(h[3]) + 4, h[3]);
				gotoxy(x + strlen(h[0]) + 9 + 31 + 1, y + 4);
				cout << char(201);
				for (int i = 1; i <= 5; i++)
					cout << char(205);
				cout << char(187);
				for (int i = 1; i <= 9; i++)
				{
					gotoxy(x + strlen(h[0]) + 9 + 31 + 1, y + 4 + i);
					cout << char(186);
					gotoxy(x + strlen(h[0]) + 9 + 31 + 7, y + 4 + i);
					cout << char(186);
				}
				gotoxy(x + strlen(h[0]) + 9 + 31 + 1, y + 4 + 10);
				cout << char(200);
				for (int i = 1; i <= 5; i++)
					cout << char(205);
				cout << char(188);
				chon_phut(p->infocb.date_time.phut, k, x + strlen(h[0]) + 9 + 31, y + 4);
				if (p->infocb.date_time.phut != -1)
				{
					gotoxy(x + strlen(h[0]) + 16, y + 7);
					if (p->infocb.date_time.phut < 10) cout << "0";
					cout << p->infocb.date_time.phut;
				}
				if (k == trai) i--;
				else if (k == phai || k == enter) i++;
				else if (k == esc) return NULL;
				continue;
			}
			case 6:
			{

				for (int i = 0; i <= 11; i++)
				{
					gotoxy(x + strlen(h[0]) + 9 + 31 + 1, y + 3 + i);
					cout << "       ";
				}
				Normal_khung_chu(x + strlen(h[0]) + 9, y + 12, strlen(h[4]) + 4, h[4]);
				HighLight_khung(x + ((strlen(h[0]) - strlen(h[3])) / 2), y + 9, strlen(h[3]) + 4, h[3]);
				break;
			}
			case 7:
			{
				Normal_khung_chu(x + ((strlen(h[0]) - strlen(h[3])) / 2), y + 9, strlen(h[3]) + 4, h[3]);
				HighLight_khung(x + strlen(h[0]) + 9, y + 12, strlen(h[4]) + 4, h[4]);
				Normal_khung_chu(x + strlen(h[0]) + 9 + strlen(h[4]) + 6, y + 12, strlen(h[5]) + 4, h[5]);
				break;
			}
			case 8:
			{
				Normal_khung_chu(x + strlen(h[0]) + 9, y + 12, strlen(h[4]) + 4, h[4]);
				HighLight_khung(x + strlen(h[0]) + 9 + strlen(h[4]) + 6, y + 12, strlen(h[5]) + 4, h[5]);
				break;
			}
			}
			k = getch();
			if (k == esc) {
				delete p;
				XOA_TBESC();
				return NULL;
			}
			gotoxy(x + strlen(h[0]) + 40, y + 7);
			cout << "                                                           ";
			gotoxy(x + strlen(h[0]) + 40, y + 10);
			cout << "                     ";
			if (k == -32)
			{
				for (int t = 1; t < 13; t += 3)
				{
					gotoxy(x + strlen(h[0]) + 40, y + t);
					cout << "                                                    ";
				}
				k = getch();
				if (k == phai && i < 8) i++;
				else if (k == trai && i > 0) i--;
			}
			else if (k == enter)
			{
				switch (i)
				{
				case 0:
				{
					XOA_MH();
					char a[50] = "";
					strcpy(a, chon_SB(x, y));
					if (strlen(a) != 0) strcpy(p->infocb.san_bay_den, a);
					XOA_MH();
					tao_khung(x + strlen(h[0]) + 9, y, 30);
					gotoxy(x + strlen(h[0]) + 9 + ((30 - strlen(p->infocb.san_bay_den)) / 2), y + 1);
					cout << p->infocb.san_bay_den;
					gotoxy(x + (strlen(h[0]) + 4 - strlen(h[1])) / 2, y + 4);
					cout << h[1];
					gotoxy(x + ((strlen(h[0]) + 4 - strlen(h[1])) / 2), y + 5);
					cout << "(dd/mm/yyyy)";
					tao_khung(x + strlen(h[0]) + 9, y + 3, 6); gotoxy(x + strlen(h[0]) + 14, y + 4); cout << "/";
					tao_khung(x + strlen(h[0]) + 15, y + 3, 6);	 gotoxy(x + strlen(h[0]) + 20, y + 4); cout << "/";
					tao_khung(x + strlen(h[0]) + 21, y + 3, 9);
					gotoxy(x + (strlen(h[0]) + 4 - strlen(h[2])) / 2, y + 7);
					cout << h[2];
					gotoxy(x + (strlen(h[0]) + 4 - strlen(h[2])) / 2, y + 8);
					cout << "(hour/minute)";
					tao_khung(x + strlen(h[0]) + 9, y + 6, 6);
					gotoxy(x + strlen(h[0]) + 14, y + 7); cout << ":";
					tao_khung(x + strlen(h[0]) + 15, y + 6, 6);
					Normal_khung_chu(x + (strlen(h[0]) - strlen(h[3])) / 2, y + 9, strlen(h[3]) + 4, h[3]);
					tao_khung(x + strlen(h[0]) + 9, y + 9, 30);
					gotoxy(x + strlen(h[0]) + 9 + ((30 - strlen(p->infocb.shMB)) / 2), y + 10);
					cout << p->infocb.shMB;
					Normal_khung_chu(x + strlen(h[0]) + 9, y + 12, strlen(h[4]) + 4, h[4]);
					Normal_khung_chu(x + strlen(h[0]) + 9 + strlen(h[4]) + 6, y + 12, strlen(h[5]) + 4, h[5]);
					if (p->infocb.date_time.ngay != 0)
					{
						gotoxy(x + strlen(h[0]) + 10, y + 4);
						if (p->infocb.date_time.ngay < 10) cout << "0";
						cout << p->infocb.date_time.ngay;
					}
					if (p->infocb.date_time.thang != 0)
					{
						gotoxy(x + strlen(h[0]) + 16, y + 4);
						if (p->infocb.date_time.thang < 10) cout << "0";
						cout << p->infocb.date_time.thang;
					}
					if (p->infocb.date_time.nam != 0)
					{
						gotoxy(x + strlen(h[0]) + 22, y + 4);
						cout << p->infocb.date_time.nam;
					}
					if (p->infocb.date_time.gio != -1)
					{
						gotoxy(x + strlen(h[0]) + 10, y + 7);
						if (p->infocb.date_time.gio < 10) cout << "0";
						cout << p->infocb.date_time.gio;
					}
					if (p->infocb.date_time.phut != -1)
					{
						gotoxy(x + strlen(h[0]) + 16, y + 7);
						if (p->infocb.date_time.gio < 10) cout << "0";
						cout << p->infocb.date_time.gio;
					}
					if (p->infocb.date_time.ngay != 0 && p->infocb.date_time.thang != 0 && p->infocb.date_time.nam != 0 && strlen(p->infocb.san_bay_den) != 0)
						in_infoCB(CB, p->infocb.san_bay_den, p->infocb.date_time, x, y + 20);
					break;
				}
				case 6:
				{
					XOA_MH();
					int j = 0, r = 0, so = 1, n = -1;
					ho_tro_CB(ds_mb, k, n, j, r, so, x, y);
					if (n != -1)
						strcpy(p->infocb.shMB, ds_mb.mb[n]->shMB);
					XOA_MH();
					Normal_khung_chu(x, y, strlen(h[0]) + 4, h[0]);
					tao_khung(x + strlen(h[0]) + 9, y, 30);
					gotoxy(x + strlen(h[0]) + 9 + ((30 - strlen(p->infocb.san_bay_den)) / 2), y + 1);
					cout << p->infocb.san_bay_den;
					gotoxy(x + (strlen(h[0]) + 4 - strlen(h[1])) / 2, y + 4);
					cout << h[1];
					gotoxy(x + ((strlen(h[0]) + 4 - strlen(h[1])) / 2), y + 5);
					cout << "(dd/mm/yyyy)";
					tao_khung(x + strlen(h[0]) + 9, y + 3, 6); gotoxy(x + strlen(h[0]) + 14, y + 4); cout << "/";
					tao_khung(x + strlen(h[0]) + 15, y + 3, 6);	 gotoxy(x + strlen(h[0]) + 20, y + 4); cout << "/";
					tao_khung(x + strlen(h[0]) + 21, y + 3, 9);
					gotoxy(x + (strlen(h[0]) + 4 - strlen(h[2])) / 2, y + 7);
					cout << h[2];
					gotoxy(x + (strlen(h[0]) + 4 - strlen(h[2])) / 2, y + 8);
					cout << "(hour/minute)";
					tao_khung(x + strlen(h[0]) + 9, y + 6, 6);
					gotoxy(x + strlen(h[0]) + 14, y + 7); cout << ":";
					tao_khung(x + strlen(h[0]) + 15, y + 6, 6);
					tao_khung(x + strlen(h[0]) + 9, y + 9, 30);
					Normal_khung_chu(x + strlen(h[0]) + 9, y + 12, strlen(h[4]) + 4, h[4]);
					Normal_khung_chu(x + strlen(h[0]) + 9 + strlen(h[4]) + 6, y + 12, strlen(h[5]) + 4, h[5]);
					if (p->infocb.date_time.ngay != 0)
					{
						gotoxy(x + strlen(h[0]) + 10, y + 4);
						if (p->infocb.date_time.ngay < 10) cout << "0";
						cout << p->infocb.date_time.ngay;
					}
					if (p->infocb.date_time.thang != 0)
					{
						gotoxy(x + strlen(h[0]) + 16, y + 4);
						if (p->infocb.date_time.thang < 10) cout << "0";
						cout << p->infocb.date_time.thang;
					}
					if (p->infocb.date_time.nam != 0)
					{
						gotoxy(x + strlen(h[0]) + 22, y + 4);
						cout << p->infocb.date_time.nam;
					}
					if (p->infocb.date_time.gio != -1)
					{
						gotoxy(x + strlen(h[0]) + 10, y + 7);
						if (p->infocb.date_time.gio < 10) cout << "0";
						cout << p->infocb.date_time.gio;
					}
					if (p->infocb.date_time.phut != -1)
					{
						gotoxy(x + strlen(h[0]) + 16, y + 7);
						if (p->infocb.date_time.phut < 10) cout << "0";
						cout << p->infocb.date_time.phut;
					}
					gotoxy(x + strlen(h[0]) + 9 + ((30 - strlen(p->infocb.shMB)) / 2), y + 10);
					cout << p->infocb.shMB;
					if (p->infocb.date_time.ngay != 0 && p->infocb.date_time.thang != 0 && p->infocb.date_time.nam != 0 && strlen(p->infocb.san_bay_den) != 0)
						in_infoCB(CB, p->infocb.san_bay_den, p->infocb.date_time, x, y + 20);
					ancontro();
					break;
				}
				case 7:
				{
					if ((strlen(p->infocb.san_bay_den) != 0) && (p->infocb.date_time.ngay != 0) && (p->infocb.date_time.thang != 0)
						&& (p->infocb.date_time.nam != 0) && (p->infocb.date_time.gio != -1) && (p->infocb.date_time.phut != -1)
						&& (strlen(p->infocb.shMB) != 0))
					{
						bool kt_SBD = ktra_SBden(CB, p, ds_mb), kt_shMB = ktra_SHMB(CB, p, ds_mb);
						if (kt_SBD && kt_shMB)
						{
							tao_ds_ve(p->infocb.dsve, lay_so_ve(ds_mb, p->infocb.shMB));
							if (n == 0)
							{
								so_0++;
								n = 1;
								for (int i = 1; i <= so_0; i++) n = n * 10;
								delete[] a;
								a = new int[n];
								for (int i = 0; i < n; a[i] = i, i++);
								strcat(macb, "0");

							}
							strcpy(p->infocb.maCB, tao_ma_CB(a, n, macb));
							gotoxy(x + strlen(h[0]) + 40, y + 13);
							cout << "THEM THANH CONG"; k = getch();
							return p;
						}
						else
						{
							if (kt_SBD == 0)
							{
								gotoxy(x + strlen(h[0]) + 40, y + 7);
								cout << "GIO BAY CHUYEN BAY CUNG NGAY PHAI CACH NHAU 30 PHUT TRO LEN";
							}
							else
							{
								gotoxy(x + strlen(h[0]) + 40, y + 10);
								cout << "TRUNG SO HIEU MAY BAY";
							}
						}
					}
					else
					{
						if (strlen(p->infocb.san_bay_den) == 0)
						{
							gotoxy(x + strlen(h[0]) + 40, y + 1);
							cout << "BAN CHUA CHON SAN BAY DEN";
						}
						else if (p->infocb.date_time.ngay == 0 || p->infocb.date_time.thang == 0 || p->infocb.date_time.nam == 0)
						{
							gotoxy(x + strlen(h[0]) + 40, y + 4);
							cout << "KHONG DUOC DE TRONG NGAY BAY";
						}
						else if (p->infocb.date_time.gio == 0 || p->infocb.date_time.phut == 0)
						{
							gotoxy(x + strlen(h[0]) + 40, y + 7);
							cout << "KHONG DUOC DE TRONG GIO BAY";
						}
						else if (strlen(p->infocb.shMB) == 0)
						{
							gotoxy(x + strlen(h[0]) + 40, y + 10);
							cout << "BAN CHUA CHON SO HIEU MAY BAY";
						}

					}
					break;
				}
				case 8:
				{
					delete p;
					XOA_TBESC();
					return NULL;
				}
				}
			}
		} while (1);
	}
}

void Lap_CB_moi(PTR_CB& CB, dsMB ds_mb, int* a, int& n, int& so_0, char* macb, int& so_CB)
{
	int x = 55, y = 6;
	do
	{
		if (CB == NULL)
		{
			PTR_CB p = Tao_CB(CB, ds_mb, a, n, so_0, macb, x, y);
			if (p != NULL)
			{
				CB = p;
				XOA_MH();
				so_CB++;
				CB->next = NULL;
			}
			else return;
		}
		else
		{
			PTR_CB p = Tao_CB(CB, ds_mb, a, n, so_0, macb, x, y);
			if (p != NULL)
			{
				Insert_Order(CB, p);
				XOA_MH();
				so_CB++;
			}
			else return;
		}
	} while (1);

}
//////////////////HAM THOI GIAN/////////////////
void cout_so(int i) {
	if (i >= 0 && i <= 9) {
		cout <<"0"<< i;
	}
	else
		cout << i;
}

void dieu_chinh_vtri(PTR_CB& First, PTR_CB& p)
{
	if (First == p)
	{
		First = p->next;
	}
	else
	{
		PTR_CB q;
		for (q = First; q->next != NULL && q->next != p; q = q->next);
		q->next = p->next;
	}
	Insert_Order(First, p);
}

int yes_no(int x, int y)
{
	char q[2][10] = { "CO","KHONG" };
	int i = 0;
	char k;
	while (1)
	{
		switch (i)
		{
		case 0:
		{
			HighLight_khung(x, y, 7, q[0]);
			Normal_khung_chu(x + 9, y, 7, q[1]);
			break;
		}
		case 1:
			Normal_khung_chu(x, y, 7, q[0]);
			HighLight_khung(x + 9, y, 7, q[1]);
			break;
		}
		k = getch();
		if (k == -32)
		{
			k = getch();
			if (k == trai && i > 0) i--;
			else if (k == phai && i < 1) i++;
		}
		else if (k == enter)
		{
			xoa_khung(x, y, 16, 3);
			if (i == 0) return 1;
			else return 0;
		}
		else if (k == esc)
		{
			xoa_khung(x, y, 16, 3);
			return -1;
		}
	}
}

void xoa_khung(int x, int y, int length, int width)
{
	for (int i = 0; i < width; i++)
	{
		gotoxy(x, y + i);
		for (int j = 1; j <= length; j++) cout << " ";
	}
}

void ke_khung_date_time(int x, int y)
{
	gotoxy(x, y);
	cout << char(201);
	for (int i = 1; i <= 6; i++)
		cout << char(205);
	cout << char(187);
	for (int i = 1; i <= 11; i++)
	{
		gotoxy(x, y + i);
		cout << char(186);
		gotoxy(x + 7, y + i);
		cout << char(186);
	}
	gotoxy(x, y + 12);
	cout << char(200);
	for (int i = 1; i <= 6; i++)
		cout << char(205);
	cout << char(188);
}


void in_infoCB_chuabay(PTR_CB& p, char* a, int x, int y)

{
	ke_khung_CB(x, y); y++;
	gotoxy(x + 5, y); cout << "MA CHUYEN BAY";
	gotoxy((x + 24), y); cout << "SAN BAY DEN";
	gotoxy(x + 40, y); cout << "SO HIEU";
	gotoxy(x + 52, y); cout << "TRANG THAI";
	gotoxy(x + 68, y); cout << "NGAY KHOI HANH";
	gotoxy(x + 88, y); cout << "THOI GIAN";
	y++;

	for (PTR_CB q = p; q != NULL; q = q->next)
	{
		if (strcmp(q->infocb.san_bay_den, a) == 0 && q->infocb.status != 3 && q->infocb.status != 0)
		{
			gotoxy(x, y);
			ke_khung_CB(x, y);
			gotoxy(x, y); cout << char(204);
			gotoxy(x + 21, y); cout << char(206);
			gotoxy(x + 37, y); cout << char(206);
			gotoxy(x + 48, y); cout << char(206);
			gotoxy(x + 64, y); cout << char(206);
			gotoxy(x + 85, y); cout << char(206);
			gotoxy(x + 101, y); cout << char(185);
			y++;
			gotoxy(x + (21 - strlen(q->infocb.maCB)) / 2, y); cout << q->infocb.maCB;
			gotoxy(x + 22 + (15 - strlen(q->infocb.san_bay_den)) / 2, y); cout << q->infocb.san_bay_den;
			gotoxy(x + 38 + (10 - strlen(q->infocb.shMB)) / 2, y); cout << q->infocb.shMB;
			gotoxy(x + 56, y); cout << q->infocb.status;
			gotoxy(x + 71, y);
			if (q->infocb.date_time.ngay >= 1 && q->infocb.date_time.ngay <= 9)
				cout << "0";
			cout << q->infocb.date_time.ngay; cout << "/";
			if (q->infocb.date_time.thang >= 1 && q->infocb.date_time.thang <= 9)
				cout << "0";
			cout << q->infocb.date_time.thang; cout << "/";
			cout << q->infocb.date_time.nam;
			gotoxy(x + 91, y);
			if (q->infocb.date_time.gio >= 0 && q->infocb.date_time.gio <= 9)
				cout << "0";
			cout << q->infocb.date_time.gio; cout << ":";
			if (q->infocb.date_time.phut >= 0 && q->infocb.date_time.phut <= 9)
				cout << "0";
			cout << q->infocb.date_time.phut;
			y++;
		}
	}
}
void xoa_infoCB_chuabay(PTR_CB& p, char* a, int x, int y)
{

	for (PTR_CB q = p; q != NULL; q = q->next)
	{
		if (strcmp(q->infocb.san_bay_den, a) == 0 && q->infocb.status != 3 && q->infocb.status != 0)
		{
			for (int i = 1; i <= 3; i++, y++)
			{
				xoa_khung(x, y, 102, 3);
			}
			/*gotoxy(x, y);
			ke_khung_CB(x, y);
			gotoxy(x, y); cout << char(204);
			gotoxy(x + 21, y); cout << char(206);
			gotoxy(x + 37, y); cout << char(206);
			gotoxy(x + 48, y); cout << char(206);
			gotoxy(x + 64, y); cout << char(206);
			gotoxy(x + 85, y); cout << char(206);
			gotoxy(x + 101, y); cout << char(185);
			y++;
			gotoxy(x + (21 - strlen(q->infocb.maCB)) / 2, y); cout << q->infocb.maCB;
			gotoxy(x + 22 + (15 - strlen(q->infocb.san_bay_den)) / 2, y); cout << q->infocb.san_bay_den;
			gotoxy(x + 38 + (10 - strlen(q->infocb.shMB)) / 2, y); cout << q->infocb.shMB;
			gotoxy(x + 56, y); cout << q->infocb.status;
			gotoxy(x + 71, y);
			if (q->infocb.date_time.ngay >= 1 && q->infocb.date_time.ngay <= 9)
				cout << "0";
			cout << q->infocb.date_time.ngay; cout << "/";
			if (q->infocb.date_time.thang >= 1 && q->infocb.date_time.thang <= 9)
				cout << "0";
			cout << q->infocb.date_time.thang; cout << "/";
			cout << q->infocb.date_time.nam;
			gotoxy(x + 91, y);
			if (q->infocb.date_time.gio >= 0 && q->infocb.date_time.gio <= 9)
				cout << "0";
			cout << q->infocb.date_time.gio; cout << ":";
			if (q->infocb.date_time.phut >= 0 && q->infocb.date_time.phut <= 9)
				cout << "0";
			cout << q->infocb.date_time.phut;
			y++;*/
		}
	}
}
bool kt_cho_ngoi_CB(PTR_CB& First, char* a, int n)
{
	for (PTR_CB p = First; p != NULL; p = p->next)
		if (strcmp(p->infocb.shMB, a) == 0 && p->infocb.dsve.gioi_han >= n && (p->infocb.status == 1 || p->infocb.status == 2)) 	return 0;
	return 1;
}
bool kt_MB_duoc_chon(PTR_CB& First, char* a)
{
	for (PTR_CB p = First; p != NULL; p = p->next)
		if (strcmp(p->infocb.shMB, a) == 0) return 0;
	return 1;
}

void hieu_chinh_dsveCB(PTR_CB& First, char* a, int n)
{
	dsVE dsve;
	for (PTR_CB p = First; p != NULL; p = p->next)
		if (strcmp(p->infocb.shMB, a) == 0)
		{
			if (p->infocb.status == 1 || p->infocb.status == 2)
			{
				tao_ds_ve(dsve, p->infocb.dsve.gioi_han);
				for (int i = 1; i <= dsve.gioi_han; i++)
					if (strlen(p->infocb.dsve.ve[i]) != 0)
						strcpy(dsve.ve[i], p->infocb.dsve.ve[i]);
				delete[] p->infocb.dsve.ve;
				tao_ds_ve(p->infocb.dsve, n);
				for (int i = 1; i <= dsve.gioi_han; i++)
					if (strlen(dsve.ve[i]) != 0)
						strcpy(p->infocb.dsve.ve[i], dsve.ve[i]);
				delete[] dsve.ve;
			}
			else if (p->infocb.status == 0) p->infocb.dsve.gioi_han = n;

		}
}


void hieu_chinh_CB(PTR_CB& CB)
{
	if (CB == NULL)
	{
		gotoxy(80, 20);
		cout << "KHONG CO CHUYEN BAY NAO!";
		system("pause");

	}
	else
	{
		int x = 6, y = 36;
		char a[50];
		ancontro();
		/*gotoxy(x + 30, y);
		cout << "CHON SAY BAY DEN";*/
		//strcpy(a, chon_SB(x, y + 1));
		hiencontro();
		XOA_MH();
		/*bool p = co_sb(CB, a);
		if (p == 0)
		{
			gotoxy(x, y);
			cout << "SAN BAY KHONG CO CHUYEN BAY NAO";
		}*/
		//else
		//{
			//in_infoCB_chuabay(CB, a, x, y);
		char ma_CB[15] = "VN", b[15] = "";
		PTR_CB p;
		DATE_TIME date_time;
		/*gotoxy(x + 104, y + 1);
		cout << "MA CHUYEN BAY MUON HIEU CHINH: ";
		tao_khung(x + 135, y, 12);

		gotoxy(x + 138, y + 1);
		cout << "VN";*/
		char c[2][10] = { "LUU","HUY" };
		gotoxy(x + 104, y + 4);
		cout << "NGAY BAY:";
		tao_khung(x + 113, y + 3, 7);
		gotoxy(x + 119, y + 4);
		cout << "/";
		tao_khung(x + 120, y + 3, 7);
		gotoxy(x + 126, y + 4);
		cout << "/";
		tao_khung(x + 127, y + 3, 9);
		gotoxy(x + 104, y + 7);
		cout << "THOI GIAN:";
		tao_khung(x + 114, y + 6, 7);
		gotoxy(x + 120, y + 7);
		cout << ":";
		tao_khung(x + 121, y + 6, 7);
		Normal_khung_chu(x + 113, y + 9, 7, c[0]);
		Normal_khung_chu(x + 123, y + 9, 7, c[1]);
		int i = 0;
		char k;
		while (1)
		{
			switch (i)
			{
				/*case -1:
				{
					xoa_khung(x, y, 102, 3);
					xoa_infoCB_chuabay(CB, a, x, y + 3);
					XOA_MH();
					strcpy(a, chon_SB(x, y + 1));
					XOA_MH();
					gotoxy(x + 30, y);
					cout << "CHON SAY BAY DEN";
					in_infoCB_chuabay(CB, a, x, y);
					gotoxy(x + 104, y + 1);
					cout << "MA CHUYEN BAY MUON HIEU CHINH: ";
					tao_khung(x + 135, y, 12);
					gotoxy(x + 104, y + 4);
					cout << "NGAY BAY:";
					tao_khung(x + 113, y + 3, 7);
					gotoxy(x + 119, y + 4);
					cout << "/";
					tao_khung(x + 120, y + 3, 7);
					gotoxy(x + 126, y + 4);
					cout << "/";
					tao_khung(x + 127, y + 3, 9);
					gotoxy(x + 104, y + 7);
					cout << "THOI GIAN:";
					tao_khung(x + 114, y + 6, 7);
					gotoxy(x + 120, y + 7);
					cout << ":";
					tao_khung(x + 121, y + 6, 7);
					char c[2][10] = { "LUU","HUY" };
					Normal_khung_chu(x + 113, y + 9, 7, c[0]);
					Normal_khung_chu(x + 123, y + 9, 7, c[1]);
					gotoxy(x + 138, y + 1);
					cout << "VN";
					i++; continue;
				}*/
			case 0:
			{
				gotoxy(x + 118, y - 2);
				cout << "      ";
				xoa_khung(x + 136, y + 3, 8, 13);
				p = nhap_macb(CB);
				if (p == NULL)
				{
				//	XOA_MH();
					return;
				}
				else {
					if (p->infocb.status == 0 || p->infocb.status == 3) {
						char tb[30] = "CB KHONG THE HIEU CHINH";
						THONG_BAO(tb);
						continue;
					}
				}
				//p = tim_CB(CB, ma_CB);
				i++; continue;
				/*nhap_maCB(b, k, x, y);
				if (k == esc)
				{
					xoa_khung(x, y, 102, 3);
					xoa_infoCB_chuabay(CB, a, x, y + 3);
					XOA_MH();
					return;
				}
				else if (k == tab)
				{
					i--;
					continue;
				}
				strcat(ma_CB, b);
				p = tim_CB(CB, ma_CB);
				if (p == NULL)
				{
					gotoxy(x + 147, y + 1);
					cout << "MA CHUYEN BAY KHONG HOP LE";
					strcpy(ma_CB, "VN");
					continue;
				}
				else
				{
					gotoxy(x + 115, y + 4);
					cout << "  ";
					gotoxy(x + 121, y + 4);
					cout << "  ";
					gotoxy(x + 128, y + 4);
					cout << "    ";
					gotoxy(x + 116, y + 7);
					cout << "  ";
					gotoxy(x + 122, y + 7);
					cout << "  ";
					i++; continue;
				}*/
			}
			case 1:
			{
				ke_khung_date_time(x + 136, y + 3);
				chon_ngay(date_time.ngay, date_time.thang, date_time.nam, k, x + 136, y + 5);
				if (k == esc)
				{
				//	xoa_khung(x, y, 102, 3);
				//	xoa_infoCB_chuabay(CB, a, x, y + 3);
				//	XOA_MH();
					return;
				}

				if (date_time.ngay != 0)
				{
					gotoxy(x + 115, y + 4);
					if (date_time.ngay < 10) cout << "0";
					cout << date_time.ngay;
				}
				if (k == trai) i--;
				else if (k == phai || k == enter) i++;
				continue;
			}
			case 2:
			{
				chon_thang(date_time.thang, k, x + 136, y + 5);
				if (k == esc)
				{
					/*xoa_khung(x, y, 102, 3);
					xoa_infoCB_chuabay(CB, a, x, y + 3);*/
					//XOA_MH();
					return;
				}

				if (date_time.thang != 0)
				{
					gotoxy(x + 122, y + 4);
					if (date_time.thang < 10) cout << "0";
					cout << date_time.thang;
				}
				time_t now = time(0);
				tm* ltm = localtime(&now);
				if (date_time.nam == ltm->tm_year + 1900 && date_time.thang < ltm->tm_mon + 1 && date_time.thang != 0)
				{
					date_time.thang = ltm->tm_mon + 1;
					gotoxy(x + 122, y + 4);
					if (date_time.thang < 10) cout << "0";
					cout << date_time.thang;
					switch (date_time.thang)
					{
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
					case 12:
					{
						if (date_time.ngay <= ltm->tm_mday)
						{
							if (ltm->tm_mday < 31)
							{
								date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + 115, y + 4);
								if (date_time.ngay < 10) cout << "0";
								cout << date_time.ngay;
							}
							else
							{
								date_time.ngay = 1;
								gotoxy(x + 115, y + 4);
								cout << "0";
								cout << date_time.ngay;
								date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + 122, y + 4);
								if (date_time.thang < 10) cout << "0";
								cout << date_time.thang;
							}
						}
						break;
					}

					case 4:
					case 6:
					case 9:
					case 11:
					{
						if (date_time.ngay <= ltm->tm_mday)
						{
							if (ltm->tm_mday < 30)
							{
								date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + 115, y + 4);
								if (date_time.ngay < 10) cout << "0";
								cout << date_time.ngay;
							}
							else
							{
								date_time.ngay = 1;
								gotoxy(x + 115, y + 4);
								cout << "0";
								cout << date_time.ngay;
								date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + 120, y + 4);
								if (date_time.thang < 10) cout << "0";
								cout << date_time.thang;
							}
						}
						break;
					}
					case 2:
						if (la_nam_nhuan(date_time.nam) && date_time.nam > 0)
						{
							if (ltm->tm_mday < 29)
							{
								date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + 115, y + 4);
								if (date_time.ngay < 10) cout << "0";
								cout << date_time.ngay;
							}
							else
							{
								date_time.ngay = 1;
								gotoxy(x + 115, y + 4);
								cout << "0";
								cout << date_time.ngay;
								date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + 122, y + 4);
								if (date_time.thang < 10) cout << "0";
								cout << date_time.thang;
							}
						}
						else
						{
							if (ltm->tm_mday < 28)
							{
								date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + 115, y + 4);
								if (date_time.ngay < 10) cout << "0";
								cout << date_time.ngay;
							}
							else
							{
								date_time.ngay = 1;
								gotoxy(x + 115, y + 4);
								cout << "0";
								cout << date_time.ngay;
								date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + 122, y + 4);
								if (date_time.thang < 10) cout << "0";
								cout << date_time.thang;
							}
						}
						break;
					}
				}
				else
				{
					switch (date_time.thang)
					{
					case 4:
					case 6:
					case 9:
					case 11:
					{
						if (date_time.ngay == 31)
						{
							date_time.ngay = 30;
							gotoxy(x + 115, y + 4);
							cout << date_time.ngay;
						}
						break;

					}
					case 2:
					{
						if (la_nam_nhuan(date_time.nam) && date_time.nam > 0)
						{
							if (date_time.ngay > 29)
							{
								date_time.ngay = 29;
								gotoxy(x + 115, y + 4);
								cout << date_time.ngay;
							}
						}
						else
						{
							if (date_time.ngay > 28)
							{
								date_time.ngay = 28;
								gotoxy(x + 115, y + 4);
								cout << date_time.ngay;
							}
						}
						break;
					}

					}
				}
				if (k == trai) i--;
				else if (k == phai || k == enter) i++;
				continue;
			}
			case 3:
			{
				chon_nam(date_time.nam, k, x + 136, y + 5);
				if (k == esc)
				{
				//	XOA_MH();
					return;
				}
				if (date_time.nam != 0)
				{
					gotoxy(x + 129, y + 4);
					cout << date_time.nam;
				}
				time_t now = time(0);
				tm* ltm = localtime(&now);
				if (date_time.nam == ltm->tm_year + 1900 && date_time.thang < ltm->tm_mon + 1 && date_time.thang != 0)
				{
					date_time.thang = ltm->tm_mon + 1;
					gotoxy(x + 122, y + 4);
					if (date_time.thang < 10) cout << "0";
					cout << date_time.thang;
					switch (date_time.thang)
					{
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
					case 12:
					{
						if (date_time.ngay <= ltm->tm_mday)
						{
							if (ltm->tm_mday < 31)
							{
								date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + 115, y + 4);
								if (date_time.ngay < 10) cout << "0";
								cout << date_time.ngay;
							}
							else
							{
								date_time.ngay = 1;
								gotoxy(x + 115, y + 4);
								cout << "0";
								cout << date_time.ngay;
								date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + 122, y + 4);
								if (date_time.thang < 10) cout << "0";
								cout << date_time.thang;
							}
						}
						break;
					}
					case 4:
					case 6:
					case 9:
					case 11:
					{
						if (date_time.ngay <= ltm->tm_mday)
						{
							if (ltm->tm_mday < 30)
							{
								date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + 115, y + 4);
								if (date_time.ngay < 10) cout << "0";
								cout << date_time.ngay;
							}
							else
							{
								date_time.ngay = 1;
								gotoxy(x + 115, y + 4);
								cout << "0";
								cout << date_time.ngay;
								date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + 122, y + 4);
								if (date_time.thang < 10) cout << "0";
								cout << date_time.thang;
							}
						}
						break;
					}
					case 2:
						if (la_nam_nhuan(date_time.nam) && date_time.nam > 0)
						{
							if (ltm->tm_mday < 29)
							{
								date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + 115, y + 4);
								if (date_time.ngay < 10) cout << "0";
								cout << date_time.ngay;
							}
							else
							{
								date_time.ngay = 1;
								gotoxy(x + 115, y + 4);
								cout << "0";
								cout << date_time.ngay;
								date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + 122, y + 4);
								if (date_time.thang < 10) cout << "0";
								cout << date_time.thang;
							}
						}
						else
						{
							if (ltm->tm_mday < 28)
							{
								date_time.ngay = ltm->tm_mday + 1;
								gotoxy(x + 115, y + 4);
								if (date_time.ngay < 10) cout << "0";
								cout << date_time.ngay;
							}
							else
							{
								date_time.ngay = 1;
								gotoxy(x + 115, y + 4);
								cout << "0";
								cout << date_time.ngay;
								date_time.thang = ltm->tm_mon + 2;
								gotoxy(x + 122, y + 4);
								if (date_time.thang < 10) cout << "0";
								cout << date_time.thang;
							}
						}
						break;
					}
				}
				else
				{
					switch (date_time.thang)
					{
					case 4:
					case 6:
					case 9:
					case 11:
					{
						if (date_time.ngay == 31)
						{
							date_time.ngay = 30;
							gotoxy(x + 115, y + 4);
							cout << date_time.ngay;
						}
						break;

					}
					case 2:
					{
						if (la_nam_nhuan(date_time.nam) && date_time.nam > 0)
						{
							if (date_time.ngay > 29)
							{
								date_time.ngay = 29;
								gotoxy(x + 115, y + 4);
								cout << date_time.ngay;
							}
						}
						else
						{
							if (date_time.ngay > 28)
							{
								date_time.ngay = 28;
								gotoxy(x + 115, y + 4);
								cout << date_time.ngay;
							}
						}
						break;
					}

					}
				}
				if (k == trai) i--;
				else if (k == phai || k == enter) i++;
				continue;
			}
			case 4:
			{
				chon_gio(date_time.gio, k, x + 136, y + 5);
				if (k == esc)
				{
				//	xoa_khung(x, y, 102, 3);
				//	xoa_infoCB_chuabay(CB, a, x, y + 3);
				//	XOA_MH();
					return;
				}

				if (date_time.gio != -1)
				{
					gotoxy(x + 116, y + 7);
					if (date_time.gio < 10) cout << "0";
					cout << date_time.gio << " ";
				}
				if (k == trai) i--;
				else if (k == phai || k == enter) i++;
				continue;
			}
			case 5:
			{
				ke_khung_date_time(x + 136, y + 3);
				Normal_khung_chu(x + 113, y + 9, 7, c[0]);
				chon_phut(date_time.phut, k, x + 136, y + 5);
				if (k == esc)
				{
				//	xoa_khung(x, y, 102, 3);
				//	xoa_infoCB_chuabay(CB, a, x, y + 3);
				//	XOA_MH();
					return;
				}

				if (date_time.phut != -1)
				{
					gotoxy(x + 123, y + 7);
					if (date_time.phut < 10) cout << "0";
					cout << date_time.phut;
				}
				if (k == trai) i--;
				else if (k == phai || k == enter) i++;
				continue;
			}
			case 6:
			{
				xoa_khung(x + 136, y + 3, 8, 13);
				HighLight_khung(x + 113, y + 9, 7, c[0]);
				Normal_khung_chu(x + 123, y + 9, 7, c[1]);
				break;
			}
			case 7:
			{
				Normal_khung_chu(x + 113, y + 9, 7, c[0]);
				HighLight_khung(x + 123, y + 9, 7, c[1]);
				break;
			}
			}
			k = getch();
			gotoxy(x + 114, y + 13);
			cout << "                       ";
			if (k == -32)
			{
				k = getch();
				if (k == phai && i < 7)
					i++;
				else if (k == trai && i > 1)
					i--;
			}
			else if (k == esc)
			{
			//	xoa_khung(x, y, 102, 3);
			//	xoa_infoCB_chuabay(CB, a, x, y + 3);
			//	XOA_MH();
				return;
			}

			else if (k == enter)
			{
				if (i == 6)
				{
					gotoxy(x + 140, y + 6);
					cout << "BAN CHAC CHAN MUON LUU?";
					int kt = yes_no(x + 144, y + 8);
					gotoxy(x + 140, y + 6);
					cout << "                       ";
					if (kt == -1 || kt == 0)
					{
						gotoxy(x + 140, y + 6);
						cout << "                       ";
						continue;
					}
					else
					{
						if (ktra_tgian_hc(CB, date_time, p->infocb.san_bay_den))
						{
							p->infocb.date_time.phut = date_time.phut;
							p->infocb.date_time.gio = date_time.gio;
							p->infocb.date_time.ngay = date_time.ngay;
							p->infocb.date_time.thang = date_time.thang;
							p->infocb.date_time.nam = date_time.nam;
							gotoxy(x + 115, y + 4);
							cout << "  ";
							gotoxy(x + 122, y + 4);
							cout << "  ";
							gotoxy(x + 129, y + 4);
							cout << "    ";
							gotoxy(x + 116, y + 7);
							cout << "  ";
							gotoxy(x + 123, y + 7);
							cout << "  ";
							gotoxy(x + 140, y + 1);
							cout << "    ";
							Normal_khung_chu(x + 113, y + 9, 7, c[0]);
							strcpy(ma_CB, "VN");
							strcpy(b, "");
							dieu_chinh_vtri(CB, p);
							gotoxy(x + 114, y + 13);
							cout << "LUU THANH CONG          ";
							Sleep(1500);
							gotoxy(x + 114, y + 13);
							cout << "                       ";
							
							//in_infoCB_chuabay(CB, a, x, y);
							i = 0;
							continue;
						}
						else
						{
							gotoxy(x + 114, y + 13);
							cout << "TRUNG THOI GIAN CB KHAC";
							Sleep(1500);
							gotoxy(x + 114, y + 13);
							cout << "                       ";
						}
					}
				}
				else if (i == 7)
				{
					p->infocb.date_time.phut = -1;
					p->infocb.date_time.gio = -1;
					p->infocb.date_time.ngay = 0;
					p->infocb.date_time.thang = 0;
					p->infocb.date_time.nam = 0;
					gotoxy(x + 115, y + 4);
					cout << "  ";
					gotoxy(x + 122, y + 4);
					cout << "  ";
					gotoxy(x + 129, y + 4);
					cout << "    ";
					gotoxy(x + 116, y + 7);
					cout << "  ";
					gotoxy(x + 123, y + 7);
					cout << "  ";
					gotoxy(x + 140, y + 1);
					cout << "    ";
					strcpy(ma_CB, "VN");
					strcpy(b, "");
					Normal_khung_chu(x + 123, y + 9, 7, c[1]);
					i = 0;
					continue;
				}
			}
		}
		//}
	}
}

void xoa_CB(PTR_CB& CB, int& so_CB)
{
	if (CB == NULL)
	{
		char tb[30] = "KHONG CO CHUYEN BAY NAO!";
		THONG_BAO(tb);
		return;
	}
	else
	{
		while (1) {
			PTR_CB p = nhap_macb(CB);
			if (p == NULL) {
				return;
			}
			else {
				PTR_CB tp = CB;
				if (p == tp) {
					if (tp->infocb.status != 3 && tp->infocb.dsve.ve_da_dat == 0) {
						gotoxy(80, 40); cout << "BAN CO CHAC MUON XOA CHUYEN BAY "; SetColor(4); cout << p->infocb.maCB; SetColor(7);
						if (chon_YN(90, 41)) {
							gotoxy(80, 40); cout << "                                                                            ";
							CB = CB->next;
							delete tp;
							char tb[30] = " XOA THANH CONG ";
							so_CB--;
							THONG_BAO(tb);
						}
						else {
							gotoxy(80, 40); cout << "                                                                            ";
							char tb[30] = " XOA KHONG THANH CONG ";
							THONG_BAO(tb);
						}
					}
					else {
						char tb[30] = "KHONG THE XOA CB NAY!";
						THONG_BAO(tb);
					}
				}
				else {
					for (tp; tp->next != p; tp = tp->next);
					if (p->infocb.status != 3 && p->infocb.dsve.ve_da_dat == 0) {
						gotoxy(80, 40); cout << "BAN CO CHAC MUON XOA CHUYEN BAY "; SetColor(4); cout << p->infocb.maCB; SetColor(7);
						if (chon_YN(90, 41)) {
							gotoxy(80, 40); cout << "                                                                            ";
							tp->next = p->next;
							delete p;
							char tb[30] = " XOA THANH CONG ";
							so_CB--;
							THONG_BAO(tb);

						}
						else {
							gotoxy(80, 40); cout << "                                                                            ";
							char tb[30] = " XOA KHONG THANH CONG ";
							THONG_BAO(tb);
						}
					}
					else {
						char tb[30] = "KHONG THE XOA CB NAY!";
						THONG_BAO(tb);
					}
				}

			}
		}

	}
}
//				NUM: GTRI TRA VE; MAX: GTRI ROLL TOI DA; MIN: GTRI ROLL NHO NHAT;
//				X,Y: TOA DO KHUNG CHON; XSHOW,YSHOW: TOA DO HIEN GIA TRI DANG CHON

/////////////////////////////////////////////////////////////////////
DATE_TIME gettime() {          ///////////////////////HAM LAY THOI GIAN HIEN TAI////////////////////////////
	time_t now = time(0);
	tm* get = localtime(&now);
	DATE_TIME dt;
	dt.nam = get->tm_year + 1900;
	dt.thang = get->tm_mon + 1;
	dt.ngay = get->tm_mday;
	dt.gio = get->tm_hour;
	dt.phut = get->tm_min;
	return dt;
}
void IN_STATUS(int n) {
	char nd[4][20] = { "HUY CHUYEN" , "CON VE" , "HET VE" , "HOAN TAT" };
	int x = wherex(); int y = wherey();
	if (n >= 0 && n <= 3) {
		CAN_GIUA(x, y, 10, nd[n]);
	}
}
int leng_int(int x) {
	int length = 0;
	while (x != 0) {
		length++;
		x = x / 10;
	}
	return length;
}
void free_char(char**& a, int num) {
	for (int i = 0; i < num; i++) {
		delete[] a[i];
	}
	delete[] a;
}
bool chon_YN( int x, int y) {
	char nd[2][4] = { "NO","YES" };
	int xy = x; int xn = x + 4;
	int xs = xy; 
	thanh_sang(xn, y, strlen(nd[0]), 1, 7, 0, nd[0]);
	thanh_sang(xy, y, strlen(nd[1]), 1, 1, 11, nd[1]);
	while (true) {
		char a = getch();
		if (a == -32) {
			a = getch();
			if (a == trai && xs != xy) {
				thanh_sang(xs, y, strlen(nd[0]), 1, 7, 0, nd[0]);
				xs = xy;
				thanh_sang(xs, y, strlen(nd[1]), 1, 1, 11, nd[1]);
			}
			if (a == phai && xs != xn) {
				thanh_sang(xs, y, strlen(nd[1]), 1, 7, 0, nd[1]);
				xs = xn;
				thanh_sang(xs, y, strlen(nd[0]), 1, 1, 11, nd[0]);
			}
		}
		else 
		if (a == enter ) {
			gotoxy(x, y); cout << "          ";
			if (xs == xy) return true;
			if (xs == xn) return false;
		}
	/*	else if (a == esc) {
			if (TB_THOAT()) {
				gotoxy(x, y); cout << "          ";
				return;
			}
		}*/
	}
}
int chon_cb(char** dsmacb,  int x, int y, int dem, int h, int &dau) {
	int dem1; int w = 17;//w do dai cua o			//so hang cua trang
	if ((dem - dau) >= 10) {
		dem1 = 10;
	}
	else { dem1 = dem - dau; }
	for (int i = dau; i < dau + dem1 ; i++) {
		thanh_sang(x + (w - strlen(dsmacb[i])) / 2, y + (i-dau)*h, strlen(dsmacb[i]), 1, 7, 0, dsmacb[i]);
	}
	int xs = x; int ys = y;
	int xcu = xs; int ycu = ys;
	int macb = dau; int macbcu = macb;
	int kt = 1;
	while (true) {
		if (kt == 1) {
			thanh_sang(xcu + (w - strlen(dsmacb[macbcu])) / 2, ycu, strlen(dsmacb[macbcu]), 1, 7, 0, dsmacb[macbcu]);
			macbcu = macb;
			xcu = xs;
			ycu = ys;
			thanh_sang(xs + (w - strlen(dsmacb[macb])) / 2, ys, strlen(dsmacb[macb]), 1, 1, 11, dsmacb[macb]);
			kt = 0;
		}
		if (_kbhit()) {
			char a = _getch();
			if (a == len && ys != y) {
				ys-=h;
				macb--;
				kt = 1;
			}
			else
			if (a == enter) {
				return macb;
			}
			else
			if ((a == phai && (dem - dau) > 10) || (a == xuong && (dem - dau) >10 && ys == y + (dem1 - 1) * h )) {
				dau += 10;
				return 0 - phai;
			}
			else
			if (a == xuong && ys != y + (dem1 - 1) * h) {
				ys+=h;
				macb++;
				kt = 1;
			}
			else
			if ((a == trai && dau != 0) || (a == len && dau != 0 && ys == y )) {
				dau -= 10;
				return 0 - trai;
			}else
			if (a == esc) {
				if (TB_THOAT()) {
					return 0 - esc;
				}
			}
		}
	}
}
int char_to_int(char* g) {
	int num = 0;
	for (int i = 0; i < strlen(g); i++) {
		num = num * 10 + (g[i] - '0');
	}
	return num;
}
void nhap_so(char* a, int n) {
	ShowCur(1);
	int d = 0;
	int x, y;
	while (1) {
		a[d] = getch();
		if (a[d] >= 48 && a[d] <= 57 && d < n)
		{
			cout << a[d];
			d++;
		}
		else if (a[d] == enter && d!= 0)
			break;
		else if (a[d] == backspace && d != 0)
		{
			x = wherex();
			y = wherey();
			gotoxy(x - 1, y);
			cout << " ";
			gotoxy(x - 1, y);
			d -= 1;
		}
		else if (a[d] == esc) {
			a[0] = '\0';
			ShowCur(0);
			return;
		}
	}
	a[d] = '\0';
	ShowCur(0);
}
void nhap_cmnd(char* a)
{
	ShowCur(1);
	int d = 0;
	int x, y;
	while (1)
	{
		a[d] = getch();
		if (a[d] >= 48 && a[d] <= 57 && d <= 11)
		{
			cout << a[d];
			d++;
		}
		else if ((d == 12 && a[d] == enter) || (d == 9 && a[d] == enter))
			break;
		/*	else if (a[d] == esc)
			{
				for (int i = strlen(a) - 1; i >= 0; i--) a[i] = '\0';
				break;
			}*/
		else if (a[d] == backspace && d != 0)
		{
			x = wherex();
			y = wherey();
			gotoxy(x - 1, y);
			cout << " ";
			gotoxy(x - 1, y);
			d -= 1;
		}
		else if (a[d] == esc) {
			if (TB_THOAT()) {
				a[0] = '\0';
				ShowCur(0);
				return;
			}
		}
	}
	a[d] = '\0';
	ShowCur(0);
	//cout << endl << a << endl;
}
void nhap_ten(char* word, int i) {
	int d = i; int sp = 1;
	int x, y;
	ShowCur(1);
	while (true) {
		word[d] = getch();
		if (word[d] == -32) {
			word[d] = getch();
			if ((word[d] == len) || (word[d] == xuong)) {
				if (word[d - 1] == 32) d -= 1;
				break;
			}
		}
		if (word[d] >= 97 && word[d] <= 122 && d < 50) {
			word[d] -= 32;
			cout << word[d];
			d++; sp = 0;
		}
		else if (word[d] >= 65 && word[d] <= 90 && d < 50) {
			cout << word[d];
			d++; sp = 0;
		}
		else if (word[d] == space && sp != 1 && d < 49) {
			cout << word[d];
			d++;
			sp = 1;
		}
		else if (word[d] == backspace && d!=0) {
			x = wherex();
			y = wherey();
			gotoxy(x - 1, y); cout << " ";
			gotoxy(x - 1, y);
			if (word[d - 1] == 32) sp = 0;
			if (d == 1) sp = 1;
			d -= 1;
		}
		else if (word[d] == enter && d != 0 ) {
			if (word[d - 1] == 32) d -= 1;
			break;
		}
	}
	word[d] = '\0';
	ShowCur(0);
	//	cout << "\n" << word;;
}
PTR_CB nhap_macb(PTR_CB First) {
	///// KHONG BAT NHAP BAO NHIEU KI TU CHU /// //// TOI DA NHAP 15 KI TU///
	if (First == NULL) {
		char nd[40] = " KHONG CO CHUYEN BAY NAO! ";
		BOX(100, 20, 70, 4, 12, 0, nd);
		TB_ESC();
		return NULL;
	}
	char a[so_SB + 1][20] = { "TAT CA","CAN THO","CAT BI","NOI BAI","DA NANG","TAN SON NHAT","CAM RANH","PHU QUOC","VINH","PHU BAI","CON DAO",
		"NA SAN","PHU CAT","CA MAU","BUON MA THUOT","DIEN BIEN PHU","PLEIKU","RACH GIA","LIEN KHUONG","TUY HOA","DONG HOI","CHU LAI","THO XUAN"
	};
	int sbd = 0; char macb[15];
	ve_vien(110, 33, 30, 2, 7);
	gotoxy(112, 34); cout << "NHAP MA CB:                 ";
	ve_vien(110, 36,30,2,7);
	gotoxy(112, 37); cout << "SAN BAY:                   ";
	gotoxy(121, 37); cout << a[sbd];
	gotoxy(124, 34);
	int max = 15; int d = 0;
	int x, y; int dau = 0;
	x = wherex(); y = wherey();
	char** ndbang = new char* [7];
    ndbang[0] = new char[30];
	ndbang[1] = new char[30];
	ndbang[2] = new char[30];
	ndbang[3] = new char[30];
	ndbang[4] = new char[30];
	ndbang[5] = new char[30];
	ndbang[6] = new char[30];
	strcpy(ndbang[0],"MA CB");
	strcpy(ndbang[1],"SAN BAY DEN");						// c++
	strcpy(ndbang[2],"THOI GIAN");
	strcpy(ndbang[3],"SO HIEU MAY BAY");
	strcpy(ndbang[4],"TRANG THAI");
	strcpy(ndbang[5],"VE DA DAT");
	strcpy(ndbang[6],"SO CHO" );
	int wcb[7] = { 17,15,21,17,1,5,3 };
	char nex[10] = "NEXT "; nex[5] = 26;
	char pre[10] = "<- PRE";
	bool lastp = 0;
	bool firstp = 1;
	bool kt = 1; int yh; int count; int y_chon = y; int dem = 0;
	KE_BANG(65, 5, wcb, 7, 10, ndbang);
	IN_TBESC();
	while (1) {
		if (kt == 1) {
			ShowCur(0);
		//	KE_BANG(85, 5, wcb, 5, 10, ndbang, dau);
			count = 0; yh = 2; dem = 0;
			for (PTR_CB p = First; p != NULL; p = p->next) {
				if (dem >= dau && count < 10 && (strcmp(a[sbd],p->infocb.san_bay_den) == 0 || sbd == 0)) {
					INinfoCB(p, 65, 6 + yh,dau + yh/2);
					CAN_GIUA(135, 6 + yh, 17, p->infocb.shMB);
					gotoxy(155, 6 + yh); IN_STATUS(p->infocb.status);
					gotoxy(172, 6 + yh); cout << p->infocb.dsve.ve_da_dat<<"    ";
					gotoxy(182, 6 + yh); cout << p->infocb.dsve.gioi_han<<"  ";
					yh += 2;
					count++;
				}
				dem++;
				if (p->next == NULL && count <  10) {
					XOA_CUOI_BANG(65, 5 + yh + 1, wcb, 7, 10 - count, ndbang);
					lastp = 1;
				}
			}
			if (lastp == 1) {
				thanh_sang(130, 29, 7, 1, 7, 0, nex);
			}
			else {
				thanh_sang(130, 29, 7, 1, 1, 11, nex);
				//	kt = 0;
			}
			if (firstp == 1) {
				thanh_sang(115, 29, 7, 1, 7, 0, pre);
			}
			else {
				thanh_sang(115, 29, 7, 1, 1, 11, pre);
				//	kt = 0;
			}
			kt = 0;
			gotoxy(x, y); ShowCur(1);
		}
		while (_kbhit()) {
			gotoxy(x, y); ShowCur(1);
			macb[d] = getch();
			if (macb[d] == -32) {
				ShowCur(0);
				macb[d] = getch();
				if (macb[d] == phai && lastp == 0) {
					if (firstp == 1) {
						firstp = 0;
					}
					dau += 10;
					kt = 1;
				}
				else if (macb[d] == trai && dau != 0) {
					if (lastp == 1) {
						lastp = 0;
						THEM_CUOI_BANG(65, 5 + yh , wcb, 7, 10 - count, ndbang);
					}
					dau -= 10;
					if (dau == 0) {
						firstp = 1;
					}
					kt = 1;
				}
				else if (macb[d] == xuong && y_chon == y) {
					x = wherex(); y = wherey();
					y_chon = y + 3;
					ShowCur(1);
					gotoxy(121, y_chon);
					while (1) {
						char k = getch();
						if (k == -32) {
							k = getch();
							if (k == phai) {
								gotoxy(145, y_chon - 2); cout << "CHON SAN BAY";
								ve_vien(145, y_chon - 1, 30, 6, 7);
								bool kt2 = true;
								while (1) {
									if (kt2 == true) {
										gotoxy(121, 37); cout << "                   ";
										gotoxy(121, 37); cout << a[sbd];
										for (int i = 1; i <= 5; i++) {
											int j = sbd + i - 1;
											if (j > so_SB) j -= so_SB + 1;
											gotoxy(147, y_chon - 1 + i); cout << "                       ";
											CAN_GIUA(147, y_chon - 1 + i, 28, a[j]);
										}
										thanh_sang(147, y_chon, 26, 1, 1, 11, a[sbd]);
										kt2 = false;
									}
									if (_kbhit) {
										k = getch();
										if (k == -32) {
											k = getch();
											if (k == len) {
												if (sbd == 0) sbd = so_SB;
												else sbd--;
												kt2 = true;
											}
											else if (k == xuong) {
												if (sbd == so_SB) sbd = 0;
												else sbd++;
												kt2 = true;

											}
											else if (k == trai) {
												Xoa_n_BOX(145, y_chon - 2, 30, 8, 1);
												gotoxy(126, 37);
												break;
											}
										}
										else if (k == enter) {
											Xoa_n_BOX(145, y_chon - 2, 30, 8, 1);
											gotoxy(126, 37);
											break;
										}
									}
								}
							}
							else if (k == len) {
								ShowCur(0);
								y_chon = y;
								gotoxy(x, y);
								kt = true; dau = 0;
								KE_BANG(65, 5, wcb, 7, 10, ndbang);
								firstp = 1; lastp = 0;
								break;
							}
						}
					}									
				}

				ShowCur(1);
			}
			else {
				if (macb[d] >= 97 && macb[d] <= 122 && d < max) {
					macb[d] -= 32;
					cout << macb[d];
					d++; x++;
				}
				else if (macb[d] >= 65 && macb[d] <= 90 && d < max) {
					cout << macb[d];
					d++; x++;
				}
				else if (macb[d] >= 48 && macb[d] <= 57 && d < max) {
					cout << macb[d];
					d++; x++;
				}
				else if (macb[d] == backspace && d != 0) {
					x--;
					gotoxy(x, y); cout << " ";
					gotoxy(x, y);
					d -= 1; 
				}
				else if (macb[d] == esc) {
					if (TB_THOAT()) {
						XOA_TBESC();
					//	macb[0] = '\0';
						free_char(ndbang, 7);
						return NULL;
					}
					gotoxy(x, y);
				}
				else if (macb[d] == enter && d != 0) {
					macb[d] = '\0'; 
					for (PTR_CB p = First; p != NULL; p = p->next) {
						if (strcmp(macb, p->infocb.maCB) == 0) {
							free_char(ndbang, 7);
							ShowCur(0);
							XOA_TBESC();
							return p;
						}
					}
					char tb[20] = "MA CB KHONG HOP LE!";
					THONG_BAO(tb);
					gotoxy(x, y);
				}
			}
		}
	}
}

//////////////////////DAT VE - CAY NHI PHAN TIM KIEM////

bool CB_1H_APART(PTR_CB a, PTR_CB b) {
	if ((a->infocb.date_time.nam == b->infocb.date_time.nam) && (a->infocb.date_time.thang == b->infocb.date_time.thang)) {
		int x = a->infocb.date_time.gio * 60 + a->infocb.date_time.phut;
		int y = b->infocb.date_time.gio * 60 + b->infocb.date_time.phut;
		if (abs(a->infocb.date_time.ngay - b->infocb.date_time.ngay) == 0 && abs(x - y) < 60) return 0;// xu li thoi gian cach nhau 1h
		if (abs(a->infocb.date_time.ngay - b->infocb.date_time.ngay) == 1 && abs((x - y) - 24 * 60) < 60) return 0;
	}
	return 1;
}
int only_1_onCB(PTR_CB p, char* cm) {
	for (int i = 1; i <= p->infocb.dsve.gioi_han; i++) {
		if (strcmp(p->infocb.dsve.ve[i], cm) == 0) {
			return i;
		}
	}
	return -1;
}
PTR_CB only_1_sametime(PTR_CB First, char* cm, PTR_CB p, PTR_CB cb_trung_1) {
	PTR_CB q = First;
	for (q; q != NULL; q = q->next) {
		if ((q->infocb.date_time.nam < p->infocb.date_time.nam) && (q->infocb.date_time.thang < p->infocb.date_time.thang))
			break;
		if (q != p && CB_1H_APART(q, p) == 0 && only_1_onCB(q, cm) != -1 && q != cb_trung_1) {
			return q;
		}
	}
	return NULL;
}
bool CB_TUONG_LAI(PTR_CB& p) {
	if (p == NULL) return 0;

	else
		return so_sanh_tgian(p->infocb.date_time, gettime());
}
void INinfoCB(PTR_CB p, int x, int y, int stt) {
	gotoxy(x + 2, y); if (stt != 0)  cout << stt << "  ";
	CAN_GIUA(x + 8, y, 17, p->infocb.maCB);
	CAN_GIUA(x + 28, y, 15, p->infocb.san_bay_den); /* cout << "               "; gotoxy(x + 17 + (15 - strlen(p->infocb.san_bay_den)) / 2, y); cout << p->infocb.san_bay_den;*/
	gotoxy(x + 47, y);
	if (p->infocb.date_time.gio <= 9) cout << "0";
	cout << p->infocb.date_time.gio << " : ";
	if (p->infocb.date_time.phut <= 9) cout << "0";
	cout << p->infocb.date_time.phut << "  ";
	if (p->infocb.date_time.ngay <= 9) cout << "0";
	cout << p->infocb.date_time.ngay << "/";
	if (p->infocb.date_time.thang <= 9) cout << "0";
	cout << p->infocb.date_time.thang << "/" << p->infocb.date_time.nam;
	gotoxy(x + 75, y);
	cout << "    ";
	gotoxy(x + 75, y);
	cout_so(p->infocb.dsve.gioi_han - p->infocb.dsve.ve_da_dat);
}
void INCHONGOI(PTR_CB p) {
	int x = wherex();
	int y = wherey();
	int xhead = x;
	if (p->infocb.dsve.gioi_han <= 200) {
		for (int i = 1; i <= p->infocb.dsve.gioi_han; i++) {
			char ic[5];
			itoa(i, ic, 10);
			if (strcmp(p->infocb.dsve.ve[i], "") != 0) {
				//SetColor(4);
				//cout << "[" << i << "]\t";
				BOX(x, y, 4, 2, 12, 0, ic);//12 lightred // 4 red
				x += 5;
				//	gotoxy(0, 0 + i); cout << p->infocb.dsve.ve[i]<<"//";
			}
			else {
				//SetColor(10);
				//cout << "[" << i << "]\t";
				BOX(x, y, 4, 2, 10, 0, ic);//10 lightGreen // 2 Green
				x += 5;
			}
			if (i % 5 == 0) x += 10;
			if (i % 10 == 0) {
				x -= 5;
			}
			if (i % 20 == 0) {
				y += 3;
				x = xhead;
			}

		}
	}
	else {
		for (int i = 1; i <= p->infocb.dsve.gioi_han; i++) {
			if (strcmp(p->infocb.dsve.ve[i], "") == 0) {
				SetColor(10);
				gotoxy(x, y); cout << i;
				x += 4;
			}
			else {
				SetColor(12);
				gotoxy(x, y); cout << i;
				x += 4;
			}
			if (i % 30 == 0) {
				x = xhead;
				y++;
			}

		}
	}
	gotoxy(40, 47); SetColor(12); cout << char(219) << " : " << "GHE DA DUOC DAT";
	gotoxy(40, 48); SetColor(10); cout << char(219) << " : " << "GHE CON TRONG";
	SetColor(7);
}
bool CHONCHONGOI(PTR_CB p, int g) {
	if (g > p->infocb.dsve.gioi_han || g <= 0) return 0;
	else if (strcmp(p->infocb.dsve.ve[g], "") == 0) return 1;
	else return 0;
}
void LAY_TEN(char* ho, char* ten) {
	char a[30];
	int i = strlen(ho) - 1; int d = 0;
	for (i; ho[i] != space; i--) {
		a[d++] = ho[i];
	}
	a[d] = '\0'; ho[i] = '\0';
	d = 0; i = strlen(a) - 1; ten[i + 1] = '\0';
	for (i; i >= 0; i--) {
		ten[d++] = a[i];
	}

}
void Nhap_infoHK(infoHK& infohk, int x, int y) {
	char ndt[3][20] = { " "," "," " };
	//	char** phais = new char* [2]; phais[0] = new char[5]{ "NAM" };  phai_nu = new char[5]{ "NU" };// phai_nu = "NU"; phais[0] = "NAM";
	char phai_nam[5] = "NAM"; char phai_nu[5] = "NU";
	n_BOX_ke_duoi(x, y, 67, 2, 7, 0, 3, ndt);
	gotoxy(x + 1, y + 1); cout << "CMND/CCCD: " << infohk.so_CMND;
	if (strlen(infohk.ten) != 0) {
		int lengho = strlen(infohk.ho);
		int lengten = strlen(infohk.ten);
		infohk.ho[lengho] = ' ';
		for (int i = 0; i < lengten; i++) {
			infohk.ho[lengho + i + 1] = infohk.ten[i];
		}
		infohk.ho[lengho + lengten + 1] = '\0';
		infohk.ten[0] = '\0';
	}
	gotoxy(x + 1, y + 3); cout << "HO VA TEN: " << infohk.ho;
	gotoxy(x + 1, y + 5); cout << "PHAI: ";
	int kt = 1; int icm = strlen(infohk.so_CMND); int iten = strlen(infohk.ho); //int iphais = 0;
	int xs = x + 12 + iten; int ys = y + 3;
	int xcu = xs; int ycu = ys;
	char xong[10] = "HOAN TAT";
	//gotoxy(xs + 20, y + 7); cout << xong;
	BOX(x + 29, y + 7, 9, 2, 7, 0, xong);
	if (strlen(infohk.phai) == 0) {
		gotoxy(x + 7, y + 5); cout << phai_nam;
		gotoxy(x + 11, y + 5); cout << phai_nu;
	}
	else
		gotoxy(x + 7, y + 5); cout << infohk.phai;

	while (true) {
		if (kt == 1) {
			gotoxy(xs, ys);
			xcu = xs; ycu = ys;
			kt = false;
		}
		if (ys == y + 1) {//nhap_cmnd
			ShowCur(1);///////////////HIEN CON TRO//////////////////////
			int d = icm;
			int xx, yy;
			while (true) {
				infohk.so_CMND[d] = getch();
				if (infohk.so_CMND[d] == esc) {
					if (TB_THOAT()) {
						infohk.so_CMND[0] = '\0';
						return;
					}
				}
				if (infohk.so_CMND[d] == -32) {
					infohk.so_CMND[d] = getch();
					if (infohk.so_CMND[d] == xuong && (d == 9 || d == 12)) {
						if (infohk.so_CMND[d - 1] == 32) d -= 1;
						break;
					}
				}
				else {
					if (infohk.so_CMND[d] >= 48 && infohk.so_CMND[d] <= 57 && d <= 11)
					{
						cout << infohk.so_CMND[d];
						d++;
					}
					else if (infohk.so_CMND[d] == backspace && d != 0) {
						xx = wherex();
						yy = wherey();
						gotoxy(xx - 1, yy); cout << " ";
						gotoxy(xx - 1, yy);
						d -= 1;
					}
					else if (infohk.so_CMND[d] == enter && (d == 9 || d == 12)) {
						if (infohk.so_CMND[d - 1] == 32) d -= 1;
						break;
					}
				}
			}
			infohk.so_CMND[d] = '\0';
			icm = strlen(infohk.so_CMND);
			ys += 2;
			xs = x + 12 + iten;
			kt = true;
		}
		else if (ys == y + 3) {//nhap_hovaten
			ShowCur(1);///////////////HIEN CON TRO//////////////////////
			int d = iten; bool sp = 1; bool cach = 0;
			if (d != 0) {
				sp = 0;
			}
			int xx, yy;

			while (true) {
				infohk.ho[d] = getch();
				if (infohk.ho[d] == esc) {
					if (TB_THOAT()) {
						infohk.so_CMND[0] = '\0';
						return;
					}
				}
				if (infohk.ho[d] == -32) {
					infohk.ho[d] = getch();
					if (infohk.ho[d] == len) {
						ys -= 2;
						xs = x + 12 + icm;
						if (infohk.ho[d - 1] == 32) d -= 1;
						break;
					}
					if (infohk.ho[d] == xuong && d != 0) {
						xx = wherex(); yy = wherey();
						if (infohk.ho[d - 1] == 32) {
							sp = 0;
							d -= 1;
							xx -= 1;
						}
						for (int i = 0; i < d - 1; i++) {
							if (infohk.ho[i] == ' ') {
								cach = 1;
								break;
							}
						}
						if (cach == 0) {
							gotoxy(160, ys); cout << "PHAN BIET HO VA TEN BANG KHOANG TRANG"; Sleep(2000);
							gotoxy(160, ys); cout << "                                     ";
							gotoxy(xx, yy);
						}
						else {
							ys += 2;
							xs = x + 6;
							//	ShowCur(0);
							break;
						}
					}
				}
				else {
					if (infohk.ho[d] >= 97 && infohk.ho[d] <= 122 && d < 40) {
						infohk.ho[d] -= 32;
						cout << infohk.ho[d];
						d++; sp = 0;
					}
					else if (infohk.ho[d] >= 65 && infohk.ho[d] <= 90 && d < 40) {
						cout << infohk.ho[d];
						d++; sp = 0;
					}
					else if (infohk.ho[d] == space && sp != 1 && d < 39) {
						cout << infohk.ho[d];
						d++;
						sp = 1;
					}
					else if (infohk.ho[d] == backspace && d != 0) {
						xx = wherex();
						yy = wherey();
						gotoxy(xx - 1, yy); cout << " ";
						gotoxy(xx - 1, yy);
						if (infohk.ho[d - 1] == 32) sp = 0;
						if (d == 1) sp = 1;
						d -= 1;
					}
					else if ((infohk.ho[d] == enter && d != 0)) {
						xx = wherex(); yy = wherey();
						if (infohk.ho[d - 1] == 32) {
							d -= 1;
							xx -= 1;
						}
						for (int i = 0; i < d - 1; i++) {
							if (infohk.ho[i] == ' ') {
								cach = 1;
								break;
							}
						}
						if (cach == 0) {
							gotoxy(160, ys); cout << "PHAN BIET HO VA TEN BANG KHOANG TRANG"; Sleep(1000);
							gotoxy(160, ys); cout << "                                     ";
							gotoxy(xx, yy);
						}
						else {
							ys += 2;
							xs = x + 6;
							//	ShowCur(0);
							break;
						}
					}
				}
			}
			infohk.ho[d] = '\0';
			iten = strlen(infohk.ho);
			kt = 1;
		}
		else if (ys == y + 5) {
			ShowCur(0);
			thanh_sang(xs + 4, ys, 2, 1, 7, 0, phai_nu);
			thanh_sang(xs, ys, 3, 1, 1, 11, phai_nam);
			while (true) {
				char a = getch();
				if (a == esc) {
					if (TB_THOAT()) {
						infohk.so_CMND[0] = '\0';
						return;
					}
				}
				if (a == -32) {
					a = getch();
					if (a == trai && xs != x + 6) {
						thanh_sang(xs, ys, 2, 1, 7, 0, phai_nu);
						xs = x + 6;
						thanh_sang(xs, ys, 3, 1, 1, 11, phai_nam);
					}
					if (a == phai && xs != x + 10) {
						thanh_sang(xs, ys, 3, 1, 7, 0, phai_nam);
						xs = x + 10;
						thanh_sang(xs, ys, 2, 1, 1, 11, phai_nu);
					}
					if (a == len || a == xuong) {
						gotoxy(x + 6, ys); cout << "                       ";
						if (xs == x + 6) {
							strcpy(infohk.phai, phai_nam);
						}
						if (xs == x + 10) {
							strcpy(infohk.phai, phai_nu);
						}
						gotoxy(x + 7, ys); cout << infohk.phai;
						if (a == len) {
							ys -= 2;
							xs = x + 12 + iten;
							kt = true;
						}
						else {
							ys += 3;
							xs = x + 29;
						}
						//an con tro nhay//
						break;
					}
				}
				else
					if (a == enter) {
						gotoxy(x + 6, ys); cout << "                       ";
						if (xs == x + 6) {
							strcpy(infohk.phai, phai_nam);
						}
						if (xs == x + 10) {
							strcpy(infohk.phai, phai_nu);
						}
						gotoxy(x + 7, ys); cout << infohk.phai;
						//an con tro nhay//

						ys += 3;
						xs = x + 29;;
						break;
					}
			}
		}
		else if (ys == y + 8) {
			ShowCur(0);
			thanh_sang(xs, ys, strlen(xong), 1, 1, 11, xong);
			char a = _getch();
			if (a == esc) {
				if (TB_THOAT()) {
					infohk.so_CMND[0] = '\0';
					return;
				}
			}
			else
				if (a == enter) {
					LAY_TEN(infohk.ho, infohk.ten);
					return;
				}
				else
					if (a == -32) {
						a = getch();
						if (a == len) {
							thanh_sang(xs, ys, strlen(xong), 1, 7, 0, xong);
							ys -= 3;
							xs = x + 6;
							kt = 1;
						}
					}

		}

	}

}
PTR_HK search_HK(PTR_HK Root, char* cm) {
	if (Root == NULL) return Root;
	else
		if (strcmp(Root->infohk.so_CMND, cm) == 1)
			search_HK(Root->pleft, cm);
		else
			if (strcmp(Root->infohk.so_CMND, cm) == -1)
				search_HK(Root->pright, cm);
			else
				return Root;
}
bool SO_SANH_INFOHK(infoHK a, infoHK b) {
	if (strcmp(a.so_CMND, b.so_CMND) != 0) return 0;
	if (strcmp(a.ten, b.ten) != 0) return 0;
	if (strcmp(a.ho, b.ho) != 0) return 0;
	if (strcmp(a.phai, b.phai) != 0) return 0;
	return 1;
}
void delete_DSHK(PTR_HK& Root) {
	if (Root == NULL) return;
	if (Root->pleft != NULL) {
		delete_DSHK(Root->pleft);
	}
	else
		if (Root->pright != NULL) {
			delete_DSHK(Root->pright);
		}
		else {
			PTR_HK p = Root;
			Root = NULL;
			delete p;
		}
}
void THEM_HK(PTR_HK& Root, infoHK hk) {
	if (Root == NULL) {
		PTR_HK add = new TREE_HK;
		//strcpy(add->infohk.so_CMND, cm);
		add->infohk = hk;
		add->pleft = NULL;
		add->pright = NULL;
		Root = add;
		//	cout << "//- " << add->infohk.so_CMND << " - //  ";
		return;
	}
	PTR_HK p = Root;
	while (1) {
		if (strcmp(hk.so_CMND, p->infohk.so_CMND) == -1) {
			if (p->pleft != NULL)
				p = p->pleft;
			else
				break;
		}
		else if (strcmp(hk.so_CMND, p->infohk.so_CMND) == 1) {
			if (p->pright != NULL)
				p = p->pright;
			else
				break;
		}
		else {
			break;
		}
	}
	if (strcmp(hk.so_CMND, p->infohk.so_CMND) == 1 && p->pright == NULL) {
		PTR_HK R = new TREE_HK;
		R->pleft = NULL;
		R->pright = NULL;
		R->infohk = hk;
		p->pright = R;
		return;
	}
	else
		if (strcmp(hk.so_CMND, p->infohk.so_CMND) == -1 && p->pleft == NULL) {
			PTR_HK R = new TREE_HK;
			R->pleft = NULL;
			R->pright = NULL;
			R->infohk = hk;
			p->pleft = R;
			return;
		}

}
void DAT_VE(PTR_CB& First, PTR_HK& Root) {/// CHUA TEST HIEN THI CBSAMETIME & CBONLY1   &&  THEM LENH QUAY LAI CHON VE
	if (First == NULL) {
		char nd[30] = "HIEN KHONG CO CHUYEN BAY NAO!";
		BOX(70, 13, 70, 4, 7, 0, nd);
		TB_ESC();
		//	Xoa_n_BOX(70, 13, 70, 4, 1);
		return;
	}
	int dem = 0;
	struct dscb_DV {
		PTR_CB pdv;
		dscb_DV* next = NULL;
	};
	typedef dscb_DV* PTR_dscb_DV;

	PTR_dscb_DV dscb_datve = NULL;
	PTR_CB p = First;
	char sanbay[50];
	while (dem == 0) {
		strcpy(sanbay, chon_SB(82, 6));
		if (sanbay[0] == '\0') {
			return;
		}
		p = First;
		while (CB_TUONG_LAI(p) == 1) {////////truong hop het ve && khong muon chon ghe nua ......
			if (p->infocb.status == 1 && (strcmp(p->infocb.san_bay_den, sanbay) == 0)) {
				dem++;
				PTR_dscb_DV dv = new dscb_DV;
				dv->pdv = p;
				dv->next = dscb_datve;
				dscb_datve = dv;
			}
			p = p->next;

		}
		if (dem == 0) {
			char nd[50] = "KHONG CO CB NAO KHA DUNG!";
			THONG_BAO(nd);
		}
	}
	XOA_MH();
	char** ndbang = new char* [4];
	ndbang[0] = new char[30];
	ndbang[1] = new char[30];
	ndbang[2] = new char[30];
	ndbang[3] = new char[30];
//	ndbang[0] = "MA CB";
//	ndbang[1] = "SAN BAY DEN";						// c++
//	ndbang[2] = "THOI GIAN";
//	ndbang[3] = "SO VE TRONG";
	strcpy(ndbang[0],"MA CB");
	strcpy(ndbang[1],"SAN BAY DEN");
	strcpy(ndbang[2],"THOI GIAN");
	strcpy(ndbang[3],"SO VE TRONG");
	int wcb[4] = { 17,15,21,3 };
	infoHK hk;
	char** dsmacb = new char* [dem];
	PTR_dscb_DV ptrdscb_dv = dscb_datve;
	for (int i = 0; i <= dem - 1; i++) {
		dsmacb[i] = new char[15];
		//	dsmacb[i] = ptrdscb_dv->pdv->infocb.maCB;
		strcpy(dsmacb[i], ptrdscb_dv->pdv->infocb.maCB);
		ptrdscb_dv = ptrdscb_dv->next;
	}
	int chon = -1; int yh = 2; int dau = 0; int dem1 = 10; int le = 0;
	gotoxy(120, 8);
	HighLight();
	cout << " MOI BAN CHON VE ";
	Normal();
	//	PTR_dscb_DV ptrcb = dscb_datve;
	KE_BANG(30 + 55, 10, wcb, 4, dem1, ndbang);
	do {
		if ((dem - dau) >= 10) {
			dem1 = 10;
			if (le != 0) {
				THEM_CUOI_BANG(85, 13 + le * 2 - 1, wcb, 4, 10 - le, ndbang);
				le = 0;
			}
		}
		else {
			dem1 = dem - dau;
			le = dem1;
			XOA_CUOI_BANG(85, 13 + le * 2, wcb, 4, 10 - le, ndbang);
		}
		//	cout << dem1; system("pause");
		gotoxy(126, 33); cout << (dau / 10) + 1 << "/"; if (dem % 10 == 0) cout << dem / 10; else cout << (dem / 10) + 1;
		int i = 0; int j = 1;
		for (PTR_dscb_DV dv = dscb_datve; dv != NULL; dv = dv->next) {
			if (i >= dau && j <= dem1) {
				INinfoCB(dv->pdv, 30 + 55, 11 + yh, yh / 2 + dau);
				yh += 2;
				j++;
			}
			i++;
		}
		yh = 2;
		chon = chon_cb(dsmacb, 30 + 55 + 7, 11 + 2, dem, yh, dau);
		if (chon == -27) {
			free_char(ndbang, 4);
			free_char(dsmacb, dem);
			PTR_dscb_DV q;
			while (dscb_datve != NULL) {
				q = dscb_datve;
				dscb_datve = dscb_datve->next;
				delete q;
			}
			return;
		}
		//	Xoa_n_BOX(30 + 55,10,90,22,1);
	} while (chon < 0);
	for (ptrdscb_dv = dscb_datve; strcmp(ptrdscb_dv->pdv->infocb.maCB, dsmacb[chon]) != 0; ptrdscb_dv = ptrdscb_dv->next);
	p = ptrdscb_dv->pdv;
	Xoa_n_BOX(80, 10, 90, 30, 1);///////////////////////////////
	gotoxy(105, 5);
	HighLight();
	cout << " BAN DANG DAT VE TREN CHUYEN BAY ";
	Normal();
	KE_BANG(30 + 54, 8, wcb, 4, 1, ndbang);
	INinfoCB(p, 30 + 54, 9 + 2, 1);
	int ydown = 15;
	ve_vien(30 + 55, ydown, 67, 4, 7);
	gotoxy(30 + 55 + 2, ydown + 2); cout << "NHAP SO CMND/ CCCD: ";
	gotoxy(30 + 55 + 22, ydown + 2);
	nhap_cmnd(hk.so_CMND);
	if (strlen(hk.so_CMND) == 0) {
		free_char(ndbang, 4);
		free_char(dsmacb, dem);
		PTR_dscb_DV q;
		while (dscb_datve != NULL) {
			q = dscb_datve;
			dscb_datve = dscb_datve->next;
			delete q;
		}
		return;
	}
	Xoa_n_BOX(80, ydown, 75, 48 - ydown, 1);
	PTR_HK check = search_HK(Root, hk.so_CMND);
	if (check == NULL) {
		hk.ho[0] = '\0'; hk.ten[0] = '\0'; hk.phai[0] = '\0';
		Nhap_infoHK(hk, 85, ydown);
		if (strlen(hk.so_CMND) == 0) {
			free_char(ndbang, 4);
			free_char(dsmacb, dem);
			PTR_dscb_DV q;
			while (dscb_datve != NULL) {
				q = dscb_datve;
				dscb_datve = dscb_datve->next;
				delete q;
			}
			return;
		}
		check = search_HK(Root, hk.so_CMND);
		if (check == NULL) {
			THEM_HK(Root, hk);
			check = search_HK(Root, hk.so_CMND);
		}
		else {
			if (!SO_SANH_INFOHK(check->infohk, hk)) {
				ve_vien(85, ydown + 10, 67, 5, 7);
				gotoxy(87, ydown + 12); cout << "Ho: " << check->infohk.ho;
				gotoxy(87, ydown + 13); cout << "Ten: " << check->infohk.ten;
				gotoxy(87, ydown + 14); cout << "Phai: " << check->infohk.phai;
				gotoxy(87, ydown + 11); cout << "            THONG TIN CU?         ";
				gotoxy(90, 31); cout << "  SO CMND/CCCD NAY DA CO THONG TIN ROI";
				gotoxy(90, 32); cout << "BAN CO MUON DOI THANH THONG TIN MOI NHAP";
				if (chon_YN(106, 33)) {
					check->infohk = hk;
				}
			}
		}
	}
	else {
		ve_vien(85, ydown, 67, 5, 7);
		gotoxy(87, ydown + 1); cout << "Ho: " << check->infohk.ho;
		gotoxy(87, ydown + 2); cout << "Ten: " << check->infohk.ten;
		gotoxy(87, ydown + 3); cout << "Phai: " << check->infohk.phai;
		gotoxy(87, ydown + 4); cout << "THONG TIN TREN CO PHAI CUA BAN KHONG?    ";
		if (!chon_YN(128, ydown + 4)) {
			Xoa_n_BOX(80, ydown, 70, 48 - ydown, 1);
			hk = check->infohk;
			Nhap_infoHK(hk, 85, ydown);							/////////////////////// LOI KHI NHAP LAI CMND	///////////
			if (strlen(hk.so_CMND) == 0) {
				free_char(ndbang, 4);
				free_char(dsmacb, dem);
				PTR_dscb_DV q;
				while (dscb_datve != NULL) {
					q = dscb_datve;
					dscb_datve = dscb_datve->next;
					delete q;
				}
				return;
			}
			check = search_HK(Root, hk.so_CMND);
			if (check == NULL) {
				THEM_HK(Root, hk);
				check = search_HK(Root, hk.so_CMND);
			}
			else {
				if (!SO_SANH_INFOHK(check->infohk, hk)) {
					ve_vien(85, ydown + 10, 67, 5, 7);
					gotoxy(87, ydown + 12); cout << "Ho: " << check->infohk.ho;
					gotoxy(87, ydown + 13); cout << "Ten: " << check->infohk.ten;
					gotoxy(87, ydown + 14); cout << "Phai: " << check->infohk.phai;
					gotoxy(87, ydown + 11); cout << "            THONG TIN CU?         ";
					gotoxy(90, 31); cout << "  SO CMND/CCCD NAY DA CO THONG TIN ROI";
					gotoxy(90, 32); cout << "BAN CO MUON DOI THANH THONG TIN MOI NHAP";
					if (chon_YN(106, 33)) {
						check->infohk = hk;
					}
				}
			}
		}
	}//
	Xoa_n_BOX(80, ydown, 100, 48 - ydown, 1);
	ve_vien(40, 4, strlen(check->infohk.ho) + strlen(check->infohk.ten) + 20, 5, 7);
	gotoxy(40 + (strlen(check->infohk.ho) + strlen(check->infohk.ten)) / 2, 5); cout << "THONG TIN HANH KHACH";
	gotoxy(42, 6); cout << "CMND/CCCD: " << check->infohk.so_CMND;
	gotoxy(42, 7); cout << "HO TEN:    " << check->infohk.ho << " " << check->infohk.ten;
	gotoxy(42, 8); cout << "PHAI:      " << check->infohk.phai;
	if (p != NULL) {
		if (only_1_onCB(p, hk.so_CMND) != -1) {
			ve_vien(85, ydown - 1, 67, 4, 7);
			gotoxy(87, ydown + 1);
			cout << "BAN DA DAT VE TREN CHUYEN BAY NAY ROI!  < GHE " << only_1_onCB(p, hk.so_CMND) << " >";
			gotoxy(60, ydown + 4);
			INCHONGOI(p);
			TB_ESC();
			XOA_MH();
			free_char(ndbang, 4);
			free_char(dsmacb, dem);
			PTR_dscb_DV q;
			while (dscb_datve != NULL) {
				q = dscb_datve;
				dscb_datve = dscb_datve->next;
				delete q;
			}
			return;
		}
		else
			if (only_1_sametime(First, hk.so_CMND, p, NULL) != NULL) {
				gotoxy(80, ydown);
				cout << "THOI GIAN DAT VE PHAI LON HON 1 GIO.";
				gotoxy(80, ydown + 1);
				cout << "BAN DA DAT VE TREN CHUYEN BAY ";
				PTR_CB cb_trung_1 = only_1_sametime(First, hk.so_CMND, p, NULL);
				KE_BANG(30 + 54, ydown + 3, wcb, 4, 1, ndbang);
				INinfoCB(cb_trung_1, 30 + 54, ydown + 6, 1);
				PTR_CB cb_trung_2 = only_1_sametime(First, hk.so_CMND, p, cb_trung_1);
				if (cb_trung_2 != NULL) {
					THEM_CUOI_BANG(84, ydown + 7, wcb, 4, 1, ndbang);
					INinfoCB(cb_trung_2, 84, ydown + 8, 1);
				}
				//	INinfoCB(only_1_sametime(First, hk.so_CMND, dem, p), 75, ydown + 3,0);
				TB_ESC();
				XOA_MH();
				free_char(ndbang, 4);
				free_char(dsmacb, dem);
				PTR_dscb_DV q;
				while (dscb_datve != NULL) {
					q = dscb_datve;
					dscb_datve = dscb_datve->next;
					delete q;
				}
				return;
			}
			else {
				gotoxy(40, ydown + 3);
				cout << "MOI BAN LUA CHON CHO NGOI: ";
				int x = wherex();
				int y = wherey();
				gotoxy(x, y + 1);
				INCHONGOI(p);
				char g[5];
				do {
					gotoxy(x, y);
					cout << "   ";
					gotoxy(x, y);
					nhap_so(g, leng_int(p->infocb.dsve.gioi_han));
					if (strlen(g) == 0) {
						if (TB_THOAT()) {
							free_char(ndbang, 4);
							free_char(dsmacb, dem);
							PTR_dscb_DV q;
							while (dscb_datve != NULL) {
								q = dscb_datve;
								dscb_datve = dscb_datve->next;
								delete q;
							}
							return;
						}
					}
					else if (CHONCHONGOI(p, char_to_int(g)) == 0) {
						gotoxy(x, y);
						SetColor(4);
						char nd[20] = "KHONG HOP LE!"; ///////////////// DI DEN KHUNG BAO LOI!!!!!!!!!!!!!1
						THONG_BAO(nd);
						SetColor(7);
					}

				} while (CHONCHONGOI(p, char_to_int(g)) != 1);
				strcpy(p->infocb.dsve.ve[char_to_int(g)], hk.so_CMND);
				p->infocb.dsve.ve_da_dat++;
				if (p->infocb.dsve.ve_da_dat == p->infocb.dsve.gioi_han) p->infocb.status = 2;
				gotoxy(x, y + 1); //XOA MAN HINH
				INCHONGOI(p);////////////IN DE CHO NGOI CU
				gotoxy(x, y);
				SetColor(10);
				cout << "DAT VE THANH CONG!";
				SetColor(7);
				TB_ESC();
				free_char(ndbang, 4);
				free_char(dsmacb, dem);
				PTR_dscb_DV q;
				while (dscb_datve != NULL) {
					q = dscb_datve;
					dscb_datve = dscb_datve->next;
					delete q;
				}
			}
	}
}

///// IN DANH SACH HANH KHACH THEO MA CHUYEN BAY///
void Lay_info(PTR_HK Root, char* cm, PTR_HK& p) {
	if (Root == NULL) {
		return;
	}
	else {
		if (strcmp(Root->infohk.so_CMND, cm) == 0) {
			p = Root;
			return;
		}
		else if (strcmp(cm, Root->infohk.so_CMND) == 1) Lay_info(Root->pright, cm, p);
		else if (strcmp(cm, Root->infohk.so_CMND) == -1) Lay_info(Root->pleft, cm, p);
	}
}
void INdsHK(PTR_CB First, PTR_HK Root){
	if (First == NULL) {
		char nd[40] = " KHONG CO DANH SACH CHUYEN BAY! ";
		BOX(100, 20, 70, 4, 12, 0, nd);
		TB_ESC();
		return;
	}
	if (Root == NULL) {
		char nd[40] = " KHONG CO DANH SACH HANH KHACH! ";
		BOX(100, 20, 70, 4, 12, 0, nd);
		TB_ESC();
		return;
	}
	PTR_CB p;
//	char macb[15];
	while (1) {
		p = nhap_macb( First);
		if (p == NULL) return;
		else {
		//	p = tim_CB(First, macb);
			int dem = 1;
			if (p != NULL) {
				if (p->infocb.dsve.ve_da_dat == 0) {
					char tb[30] = "KHONG CO HANH KHACH NAO!";
					THONG_BAO(tb);
				}
				else{
					XOA_MH();
					gotoxy(100, 5);
					cout << " DANH SACH HANH KHACH THUOC CHUYEN BAY " << p->infocb.maCB;
					gotoxy(95, 6);
					cout << " Ngay gio khoi hanh: "; if (p->infocb.date_time.gio <= 9) cout << "0";
					cout << p->infocb.date_time.gio << " : ";
					if (p->infocb.date_time.phut <= 9) cout << "0";
					cout << p->infocb.date_time.phut << "  ";
					if (p->infocb.date_time.ngay <= 9) cout << "0";
					cout << p->infocb.date_time.ngay << "/";
					if (p->infocb.date_time.thang <= 9) cout << "0";
					cout << p->infocb.date_time.thang << "/" << p->infocb.date_time.nam;
					gotoxy(140, 6);
					cout << "Noi den: " << p->infocb.san_bay_den;
					char** ndbang = new char* [4];
					ndbang[0] = new char[30];
					ndbang[1] = new char[30];
					ndbang[2] = new char[30];
					ndbang[3] = new char[30];
					strcpy(ndbang[0] , "SO VE");
					strcpy(ndbang[1] , "SO CMND");						// c++
					strcpy(ndbang[2] , "HO TEN");
					strcpy(ndbang[3] , "PHAI");
					int wcot[4] = { 3, 14, 42, 5 };
					int dau = 0; bool kt = 1;
					bool lastp = 0; int count = 0; int yh = 2; int dem;
					char nex[10] = "NEXT "; nex[5] = 26;
					char pre[10] = "<- PRE";
					//	IN_TBESC();
					IN_TB_ENTER_ESC();
					KE_BANG(80, 8, wcot, 4, 10, ndbang);
					bool k = true;
					while (k) {
						if (kt == 1) {
							count = 0; yh = 2; dem = 0;
							for (int i = 1; i <= p->infocb.dsve.gioi_han && count < 10; i++) {
								if (strcmp(p->infocb.dsve.ve[i], "") != 0) {
									if (dem >= dau) {
										PTR_HK a = NULL;
										Lay_info(Root, p->infocb.dsve.ve[i], a);
										if (a != NULL) {
											gotoxy(82, 9 + yh); cout << "    ";
											gotoxy(82, 9 + yh);	cout << dau + yh / 2;
											gotoxy(89, 9 + yh); cout << "    ";
											gotoxy(89, 9 + yh); cout << i;
											//	gotoxy(96, 9 + yh);
											CAN_GIUA(96, 9 + yh, 14, p->infocb.dsve.ve[i]);
											gotoxy(115, 9 + yh);
											cout << "                                     ";
											gotoxy(115, 9 + yh);
											cout << a->infohk.ho << " " << a->infohk.ten;
											gotoxy(159, 9 + yh);
											cout << a->infohk.phai << "  ";
											yh += 2;
											count++;
										}
									}
									dem++;
								}
								if (i == p->infocb.dsve.gioi_han) lastp = 1;
								if (count == 10 && i != p->infocb.dsve.gioi_han) {
									int j = i + 1;
									while (strcmp(p->infocb.dsve.ve[j], "") == 0) {
										if (j == p->infocb.dsve.gioi_han) {
											lastp = 1;
											break;
										}
										else
											j++;
									}

								}
							}
							if (lastp == 1) {
								thanh_sang(130, 32, 7, 1, 7, 0, nex);
								XOA_CUOI_BANG(80, 10 + yh - 2 + 1, wcot, 4, 10 - count, ndbang);
							}
							else {
								thanh_sang(130, 32, 7, 1, 1, 11, nex);
								//	kt = 0;
							}
							if (dau == 0) {
								thanh_sang(115, 32, 7, 1, 7, 0, pre);
							}
							else {
								thanh_sang(115, 32, 7, 1, 1, 11, pre);
								//	kt = 0;
							}
							kt = 0;
						}
						while (_kbhit()) {
							char a = getch();
							if (a == -32) {
								a = getch();
								if (a == phai && lastp == 0) {
									dau += 10;
									kt = 1;
								}
								else if (a == trai && dau != 0) {
									if (lastp == 1) {
										THEM_CUOI_BANG(80, 10 + yh - 2, wcot, 4, 10 - count, ndbang);
										lastp = 0;
									}
									dau -= 10;
									kt = 1;
								}
							}
							else if (a == esc || a == enter) {
								XOA_TB_ENTER_ESC();
								//	XOA_TBESC();
								k = false;
								XOA_MH();
								free_char(ndbang, 4);
							}
						}
					}
				}
			}
		}
	}
}

/////			HUY VE				/////
void delete_ve(PTR_CB& p, char* cm) {
	if (p == NULL) return;
	if (p->infocb.status == 2) p->infocb.status = 1;
	for (int i = 1; i <= p->infocb.dsve.gioi_han; i++) {
		if (strcmp(p->infocb.dsve.ve[i], cm) == 0) {
			strcpy(p->infocb.dsve.ve[i], "");
			p->infocb.dsve.ve_da_dat--;
			return;
		}
	}
}
void HuyVE(PTR_CB& First, PTR_HK Root) ////////////////VE CON TRONG CAN PHAI SUA////////////////////////
{
	if (First == NULL) {
		char nd[30] = "HIEN KHONG CO CHUYEN BAY NAO!";
		BOX(80, 13, 70, 4, 7, 0, nd);
		TB_ESC();
	//	Xoa_n_BOX(80, 13, 70, 4, 1);
		return;
	}
	char cm[15]; 
	ve_vien(80, 20, 70, 4, 7);
	gotoxy(82, 20 + 2); cout << "NHAP SO CMND/ CCCD: ";
	gotoxy(102, 20 + 2);
	nhap_cmnd(cm);
	if (strlen(cm) == 0) {
		return;
	}
	PTR_HK check = search_HK(Root, cm);
	if (check == NULL) {
		char nd[20] = "BAN CHUA DAT VE";
		THONG_BAO(nd);
		return;
	}
	Xoa_n_BOX(80, 20, 70, 4, 1);
	ve_vien(40, 4, strlen(check->infohk.ho) + strlen(check->infohk.ten) + 20, 5, 7);
		gotoxy(40 + (strlen(check->infohk.ho) + strlen(check->infohk.ten) )/2 , 5); cout << "THONG TIN HANH KHACH";
		gotoxy(42, 6); cout << "CMND/CCCD: " << check->infohk.so_CMND;
		gotoxy(42, 7); cout << "HO TEN:    " << check->infohk.ho << " " << check->infohk.ten;
		gotoxy(42, 8); cout << "PHAI:      " << check->infohk.phai;
	struct CB_huy {
		PTR_CB p;
		CB_huy* next = NULL;
	};
	typedef CB_huy* PTR_CB_HUY;
	PTR_CB t;  int dem = 0;
	PTR_CB_HUY q = NULL;
	int x = 80; int y = 12;
	long time_ht = time_to_number(gettime());
	for (t = First; t != NULL; t = t->next) {
		if (time_to_number(t->infocb.date_time) >= time_ht)  {
			if (t->infocb.status != 0) {
				for (int i = 1; i <= t->infocb.dsve.gioi_han; i++) {
					if (strcmp(t->infocb.dsve.ve[i], cm) == 0) {
						dem++;
						PTR_CB_HUY qnew = new CB_huy;
						qnew->p = t;
						qnew->next = q;
						q = qnew;
						//	Insert_nodeCB_First_dsCB(q, t);	
						i = t->infocb.dsve.gioi_han;
					}
				}
			}		
		}
		else break;
	}
	if (dem == 0) {
		char nd[40] = "BAN KHONG CO VE NAO HOP LE DE HUY!";
		Xoa_n_BOX(x, y - 2, 100, 50 - y, 1);
		BOX(x, y + dem, 70, 4, 7, 0, nd);
		TB_ESC();
		//delete q;
		return;
	}
	PTR_CB_HUY qq;
	char** ndbang = new char* [4];
	ndbang[0] = new char[30];
	ndbang[1] = new char[30];
	ndbang[2] = new char[30];
	ndbang[3] = new char[30];
	strcpy(ndbang[0] , "MA CB");
	strcpy(ndbang[1] , "SAN BAY DEN");			//c++
	strcpy(ndbang[2] , "THOI GIAN");
	strcpy(ndbang[3] , "SO VE TRONG");
	int wcb[4] = { 17,15,21,3 }; int soluong;
	gotoxy(115, 10); SetColor(0); SetBGColor(7); cout << " CHUYEN BAY BAN DA DAT VE "; SetColor(7); SetBGColor(0);
	if (dem >= 10) {
		KE_BANG(85, 11, wcb, 4, 10, ndbang);
		int yh = 2; soluong = 10;
		for (qq = q; qq != NULL && yh / 2 - 1 < 10; qq = qq->next) {
			INinfoCB(qq->p, 30 + 55, 12 + yh, yh / 2);
			yh += 2;
		}
		gotoxy(127, 34); cout << 1 << "/"; if (dem % 10 == 0) cout << dem / 10; else cout << (dem / 10) + 1;
	}
	else {
		KE_BANG(85, 11, wcb, 4, dem, ndbang);
		int yh = 2; soluong = dem;
		for (qq = q; qq != NULL; qq = qq->next) {
			INinfoCB(qq->p, 30 + 55, 12 + yh, yh / 2);
			yh += 2;
		}

	}
	///////// BIEN nd SU DUNG DE CHON CHUC NANG ///////////////
	char** nd = new char* [3];
	nd[0] = new char[20];
	nd[1] = new char[20];
	nd[2] = new char[20];
		strcpy(nd[0] , "  HUY HET VE   ");
		strcpy(nd[1] , "  HUY TUNG VE  ");
		strcpy(nd[2] , "KET THUC/ THOAT");
	char** dsmacb = new char* [dem];
	PTR_CB_HUY	qqc = q;
	for (int i = 0; i <= dem - 1; i++) {
		dsmacb[i] = new char[15];
		//	dsmacb[i] = qqc->p->infocb.maCB;
		strcpy(dsmacb[i], qqc->p->infocb.maCB);
		qqc = qqc->next;
	}
	///////////////////////////////////////////////////////////||||
	bool k = true;
	while (k) {
		
		if (dem > 1) {
		
			int dau = 0; 
			switch (chon_cb(nd, x + 38, (y + soluong*2 + 3), 3,1,dau)) {
			case -27: {
				k = false;
				break;
			}
			case 0: {

				Xoa_n_BOX(x + 38, y + soluong * 2 + 3, 20, 3, 1);
				for (qq = q; qq != NULL; qq = qq->next) {
					delete_ve(qq->p, cm);
				}
				char tb[30] = "HUY TAT CA VE THANH CONG"; dem = 0;
				Xoa_n_BOX(x, y - 2, 100, 50 - y, 1);
				BOX(x, 20, 70, 4, 10, 0, tb);
				TB_ESC();
				k = false;
				break;
			}
			case 1: {
				Xoa_n_BOX(x + 38, y + soluong * 2 + 3, 20, 3, 1);
				
				int chon; int dem1 = 0; int le = 0; int yh = 2;
				if (dem > 10) {
					//KE_BANG(30 + 55, 10, wcb, 4, dem1, ndbang);
					do {
						if ((dem - dau) >= 10) {
							dem1 = 10;
							if (le != 0) {
								THEM_CUOI_BANG(85, 14 + le * 2 - 1, wcb, 4, 10 - le, ndbang);
								le = 0;
							}
						}
						else {
							dem1 = dem - dau;
							le = dem1;
							XOA_CUOI_BANG(85, 14 + le * 2, wcb, 4, 10 - le, ndbang);
						}
						//	cout << dem1; system("pause");
						gotoxy(127, 34); cout << (dau / 10) + 1 << "/"; if (dem % 10 == 0) cout << dem / 10; else cout << (dem / 10) + 1;
						int i = 0; int j = 1;
						for (PTR_CB_HUY huy = q; huy != NULL; huy = huy->next) {
							if (i >= dau && j <= dem1) {
								INinfoCB(huy->p, 30 + 55, 12 + yh, yh / 2 + dau);
								yh += 2;
								j++;
							}
							i++;
						}
						yh = 2;
						chon = chon_cb(dsmacb, x + 12, y + 2, dem, yh, dau);
						if (chon == -27) {
							k = false;
						}
						//	Xoa_n_BOX(30 + 55,10,90,22,1);
					} while (chon < 0);
				}
				else {
					chon = chon_cb(dsmacb, x + 12, y + 2, dem, 2, dau);//////////////////
				}
				if (chon == -27) {
					k = false;
					break;
				}
				else {
					for (qq = q; qq != NULL;) {
						if (strcmp(qq->p->infocb.maCB, dsmacb[chon]) == 0) {
							delete_ve(qq->p, cm);
							dem--;
							Xoa_n_BOX(x, y + dem + 1, 100, 48 - y - dem - 1, 1);
							PTR_CB_HUY xoa;/// CAP NHAT LAI q 
							if (q == qq) {
								xoa = q;
								//	q->p = NULL;
								q = q->next;
								delete xoa;
							}
							else {
								for (xoa = q; xoa->next != NULL && xoa->next->p != qq->p; xoa = xoa->next);
								if (xoa->next != NULL) {
									PTR_CB_HUY d;
									d = xoa->next;
									xoa->next = d->next;
									delete d;
								}
							}
							if (dem > 10) {
								KE_BANG(85, 11, wcb, 4, 10, ndbang); yh = 2;
								for (PTR_CB_HUY qqq = q; qqq != NULL && yh / 2 - 1 < 10; qqq = qqq->next) {
									INinfoCB(qqq->p, 30 + 55, 12 + yh, yh / 2);
									yh += 2;
								}
								gotoxy(127, 34); cout << 1 << "/"; if (dem % 10 == 0) cout << dem / 10; else cout << (dem / 10) + 1;
							}
							else {
								KE_BANG(85, 11, wcb, 4, dem, ndbang); yh = 2;
								for (PTR_CB_HUY qqq = q; qqq != NULL && yh / 2 - 1 < 10; qqq = qqq->next) {
									INinfoCB(qqq->p, 30 + 55, 12 + yh, yh / 2);
									yh += 2;
								}
								gotoxy(127, 34); cout << "      ";
							}
							HighLight();
							gotoxy(x + 10, y + soluong * 2 + 3);
							cout << " VE CUA BAN TREN CB " << dsmacb[chon] << " DA DUOC HUY THANH CONG";
							Normal();
							Sleep(1000);
							gotoxy(x + 10, y + soluong * 2 + 3); cout << "                                                                            ";
							delete[] dsmacb[chon];
							for (int i = chon; i < dem; i++) {//cap nhat dsmacb						
								dsmacb[i] = dsmacb[i + 1];
							}
							break;
						}
						else qq = qq->next;
					}
					gotoxy(x + 10, y + soluong * 2 + 3); cout << "BAN CO MUON TIEP TUC HUY VE?";
					bool yn = chon_YN(x + 40, y + soluong * 2 + 3);
					if (yn == 1) {
						//	xoa_n_box(x, y + (dem+1)*2 , 100, 1, 48 - y - dem*2);
						gotoxy(x + 10, y + soluong * 2 + 3); cout << "                                                                    ";
						break;
					}
					else {
						k = false;
						break;
					}
				}
			}
			case 2: {
				k = false;
				break;
			}
			default: {
				char a[20] = "KHONG HOP LE!";
				THONG_BAO(a);
				break;
			}
			}
			
		}
		else {
			char tb[50] = "HUY VE CUA BAN TREN CHUYEN BAY TREN?          "; 
			BOX(x + 10, y + dem + 3, 50, 4, 7, 0, tb);
			bool yn = chon_YN(x + 50, y + dem*2 + 4);
			if ( yn == true) {
				delete_ve(q->p, cm);
				char a[20] = "HUY VE THANH CONG"; dem = 0;
				Xoa_n_BOX(x, y - 2,100, 48 - y, 1);
				BOX(x, 20, 70, 2, 10, 0, a);
				TB_ESC();
			//	XOA_MH();
				k = false;
			}
			else  {
				Xoa_n_BOX(x, y + dem + 3, 100, 48 - y - dem - 3, 1);
				gotoxy(x + 10, y + dem + 4);
				cout << "VE CUA BAN TREN CHUYEN BAY " << q->p->infocb.maCB << " CHUA DUOC HUY.";
				TB_ESC();
				k = false;
			}
		}
	}
	//giai phong bo nho//
	free_char(nd, 3); free_char(dsmacb, dem); free_char(ndbang, 4);
	PTR_CB_HUY xoa_hv;
	while (q != NULL) {
		xoa_hv = q;
		q = q->next;
		delete xoa_hv;
	}
}
//
/////////cay nhi phan tim kiem can bang//////			
//void DUYET_CAY(PTR_HK Root) {
//	if (Root == NULL) return;
//	else {
//		cout << Root->infohk.so_CMND << " // ";
//		DUYET_CAY(Root->pleft);
//		DUYET_CAY(Root->pright);
//	}
//}
//PTR_HK Rotate_Left(PTR_HK& ya) {// ya nut goc con nhat bi mat can bang
//	PTR_HK p;
//	if (ya == NULL) {
//		//cout << "Khong thuc hien duoc xoay trai!";
//		return NULL;
//	}
//	else
//		if (ya->pright == NULL) {
//			return NULL;
//		}
//		else
//		{
//			p = ya->pright;
//			ya->pright = p->pleft;
//			p->pleft = ya;
//		}
//	return p;
//}
//PTR_HK Rotate_Right(PTR_HK& ya) {
//	PTR_HK p;
//	if (ya == NULL) {
//		return NULL;
//	}
//	else
//		if (ya->pleft == NULL) {
//			return NULL;
//		}
//		else {
//			p = ya->pleft;
//			ya->pleft = p->pright;
//			p->pright = ya;
//		}
//	return p;
//}
//void Them_HK(PTR_HK& Root, infoHK hk) {/// test cay nhi phan can bang bi sai/////////////////////////////////////
//	if (Root == NULL) {
//		PTR_HK add = new TREE_HK;
//		//strcpy(add->infohk.so_CMND, cm);
//		add->infohk = hk;
//		add->pleft = NULL;
//		add->pright = NULL;
//		Root = add;
//		//	cout << "//- " << add->infohk.so_CMND << " - //  ";
//		return;
//	}
//	PTR_HK fp, p, q;	//cha -> p,ya -> con//
//	PTR_HK fya, ya, s;
//	int imbal; // xet huong lech
//	fp = NULL; p = Root;
//	fya = NULL; ya = p;
//	while (p != NULL) { //xac dinh ya va fp(them add vao sau fp)
//		if (strcmp(hk.so_CMND, p->infohk.so_CMND) == 0) {
//
//			return;
//		}
//		if (strcmp(hk.so_CMND, p->infohk.so_CMND) == 1)
//			q = p->pright;
//		else
//			q = p->pleft;
//		if (q != NULL) {
//			if (q->bf != 0) {
//				fya = p;
//				ya = q;
//			}
//		}
//		fp = p;
//		p = q;
//	}
//	q = new TREE_HK;
//	//strcpy(q->infohk.so_CMND, hk.so_CMND);
//	q->infohk = hk;
//	//cout << "//- " << q->infohk.so_CMND << " - //  ";
//	q->pleft = NULL;
//	q->pright = NULL;
//	if (strcmp(hk.so_CMND, fp->infohk.so_CMND) == 1)
//		fp->pright = q;
//	else
//		fp->pleft = q;
//
//	if (strcmp(hk.so_CMND, ya->infohk.so_CMND) == 1)
//		p = ya->pright;
//	else
//		p = ya->pleft;
//	s = p;
//	while (p != q) {
//		if (strcmp(hk.so_CMND, p->infohk.so_CMND) == 1) {
//			p->bf = -1;
//			p = p->pright;
//		}
//		else {
//			p->bf = 1;
//			p = p->pleft;
//		}
//	}
//	if (strcmp(hk.so_CMND, fp->infohk.so_CMND) == 1)
//		imbal = -1;
//	else
//		imbal = 1;
//	if (ya->bf == 0) {
//		ya->bf = imbal;
//		return;
//	}
//	if (ya->bf != imbal) {
//		ya->bf = 0;
//		return;
//	}
//	if (s->bf == imbal) {
//		if (imbal == 1)
//			p = Rotate_Right(ya);
//		else p = Rotate_Left(ya);
//		ya->bf = 0;
//		s->bf = 0;
//	}
//	else {
//		if (imbal == 1) { // xoay trai - phai
//			ya->pleft = Rotate_Left(s);
//			p = Rotate_Right(ya);
//		}
//		else { //phai - trai
//			ya->pright = Rotate_Right(s);
//			p = Rotate_Left(ya);
//		}
//
//		if (p->bf == 0) {//////////////////////////////////////////////////////
//			s->bf = 0;
//			ya->bf = 0;
//		}
//		else {
//			if (p->bf == imbal) {
//				ya->bf = -imbal;
//				s->bf = 0;
//			}
//			else {
//				ya->bf = 0;
//				s->bf = imbal;
//			}
//		}
//		p->bf = 0;
//	}
//	if (fya == NULL) Root = p;
//	else {
//		if (ya == fya->pright)
//			fya->pright = p;
//		else
//			fya->pleft = p;
//	}
//}

/// ///----DANH SACH CHUYEN BAY THEO THOI GIAN & SAN BAY DEN////////////

char ROLL_NUM(int& num, int max, int min, int x, int y, int xshow, int yshow)
{
	int w = 7; int h = 8;
	ve_vien(x, y - 4, w, h, 7);
	int chon = num;
	//	int mang_phut[60] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59 };

	char c[10]; itoa(max, c, 10);
	int leng = strlen(c);
	bool kt = 1;
	while (1) {
		if (kt == 1) {
			ShowCur(0);
			for (int i = 1; i <= 7; i++) {
				gotoxy(x + (6 - leng) / 2 + 1, y - 4 + i);
				if (chon - 4 + i < min) cout_so(max - abs(chon - 3 + i - min));
				else
					if (chon - 4 + i <= max) {
						cout_so(chon - 4 + i);
					}
					else
						if (chon - 4 + i > max) cout_so((chon - 4 + i) - max + min - 1);

			}
			gotoxy(xshow, yshow); cout_so(chon);
			HighLight();
			gotoxy(x + (6 - leng) / 2 + 1, y); cout_so(chon);
			Normal();
			gotoxy(xshow, yshow);
			ShowCur(1);
			kt = 0;
		}
		while (_kbhit()) {
			char a = getch();
			if (a == -32) a = getch();
			if (a == len) {
				kt = 1;
				if (chon == min) {
					chon = max;
				}
				else chon--;
			}
			if (a == xuong) {
				kt = 1;
				if (chon == max) {
					chon = min;
				}
				else
					chon++;
			}
			if (a == enter || a == phai || a == trai || a == esc) {
				num = chon;//mang_phut[chon];
				Xoa_n_BOX(x, y - 5, w + 3, h + 1, 1);
				return a;
			}
		}
	}

}
//									x,y TOA DO HIEN KHUNG CHON // cn BAT DAU CHON CAI GI (1: NGAY; 2:THANG ;3:NAM)
void CHON_DATE(int& ngay, int& thang, int& nam, int x, int y, int cn) {
	int xngay = x + 2; int xthang = x + 9; int xnam = x + 16;
	ve_vien(xngay - 2, y, 5, 2, 7);
	ve_vien(xthang - 2, y, 5, 2, 7);
	ve_vien(xnam - 2, y, 7, 2, 7);
	y += 1;
	gotoxy(xthang - 3, y); cout << "/";
	gotoxy(xnam - 3, y); cout << "/";
	SetColor(8);
	gotoxy(xngay, y);
	if (ngay == 0) {
		cout << "dd";

	}
	else cout_so(ngay);
	gotoxy(xthang, y);
	if (thang == 0) {
		cout << "mm";
	}
	else cout_so(thang);
	gotoxy(xnam, y);
	time_t now = time(0);
	tm* time = localtime(&now);
	int namhientai = time->tm_year + 1900;
	if (nam == 0) {
		cout << "yyyy";
	}
	else cout_so(nam);
	SetColor(7);
	int chon = cn;
	while (1) {

		switch (chon) {
		case 1: {
			gotoxy(x + 30, y - 5); cout << "CHON NGAY"; int max;
			if (thang == 4 || thang == 6 || thang == 9 || thang == 11)  max = 30;
			else
				if (thang == 2 && la_nam_nhuan(nam) == 1) max = 29;
				else
					if (thang == 2 && la_nam_nhuan(nam) == 0) max = 28;
					else max = 31;
			if (ngay == 0) ngay = 1;
			char a = ROLL_NUM(ngay, max, 1, x + 30, y, xngay, y);
			if (a == phai || a == enter) {
				if (a == enter && thang != 0 && nam != 0)
					return;
				else
					chon = 2;
				gotoxy(xngay, y); cout_so(ngay);
			}
			if (a == esc) {
				if (TB_THOAT()) {
					ngay = 0;
					return;
				}
				//IN_TBESC(); IN_TBTIEPTUC();
				//a = getch();
				//if (a == esc) {
				//	XOA_TBESC(); XOA_TBTIEPTUC();
				//	ngay = 0;
				//	return;
				//}
				//else if (a == 84 || a == 116) { ////84 T; 116 t
				//	XOA_TBESC(); XOA_TBTIEPTUC();
				//	chon = 1;
				//}
			}
			break;
		}
		case 2: {
			gotoxy(x + 30, y - 5); cout << "CHON THANG";
			if (thang == 0) thang = 1;
			char a = ROLL_NUM(thang, 12, 1, x + 30, y, xthang, y);
			if (a == trai || a == enter || a == phai) {
				if (a == enter && ngay != 0 && nam != 0)
					return;
				else if (a == trai)
					chon = 1;
				else
					chon = 3;
				gotoxy(xthang, y); cout_so(thang);
				if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
					if (ngay == 31) {
						gotoxy(xngay, y); ngay = 30; cout_so(ngay);
					}
				}
				if (thang == 2) {
					if (ngay > 29 && la_nam_nhuan(nam) == 1) {
						gotoxy(xngay, y); ngay = 29; cout_so(ngay);
					}
					if (ngay > 28 && la_nam_nhuan(nam) == 0) {
						gotoxy(xngay, y); ngay = 28; cout_so(ngay);
					}
				}
			}
			if (a == esc) {
				if (TB_THOAT()) {
					thang = 0;
					return;
				}
				//IN_TBESC(); IN_TBTIEPTUC();
				//while (1) {
				//	a = getch();
				//	if (a == esc) {
				//		XOA_TBESC(); XOA_TBTIEPTUC();
				//		thang = 0;
				//		return;
				//	}
				//	else if (a == 84 || a == 116) { ////84 T; 116 t
				//		XOA_TBESC(); XOA_TBTIEPTUC();
				//		chon = 2;
				//		break;
				//	}
				//}
			}
			break;
		}
		case 3: {
			gotoxy(x + 30, y - 5); cout << "CHON NAM";
			if (nam == 0) nam = namhientai;
			char a = ROLL_NUM(nam, namhientai + 7, namhientai, x + 30, y, xnam, y);
			if (a == trai) {
				chon = 2;
			}
			if (la_nam_nhuan(nam) == 0) {
				if (thang == 2 && ngay > 28) {
					gotoxy(xngay, y); ngay = 28; cout_so(ngay);
				}

			}
			if (a == enter || a == phai) {
				return;
			}
			if (a == esc) {
				if (TB_THOAT()) {
					nam = 0;
					return;
				}
				//IN_TBESC(); IN_TBTIEPTUC();
				//a = getch();
				//if (a == esc) {
				//	XOA_TBESC(); XOA_TBTIEPTUC();
				//	nam = 0;
				//	return;
				//}
				//else if (a == 84 || a == 116) { ////84 T; 116 t
				//	XOA_TBESC(); XOA_TBTIEPTUC();
				//	chon = 3;
				//}
			}
			break;
		}
		}
	}
}
void DSCB_TG_SBD(int d, int m, int y, char* sbd, PTR_CB& First, int xx, int yy) {
	PTR_CB p = First; int dem = 0; //int in = 0;

	while (p->infocb.date_time.nam > y || (p->infocb.date_time.nam == y && p->infocb.date_time.thang > m) || (p->infocb.date_time.nam == y && p->infocb.date_time.thang == m && p->infocb.date_time.ngay != d)) {
		if (p->next == NULL) {
			char tb[40] = "KHONG CO CHUYEN BAY NAO HOP LE!";
			BOX(xx, 20, 50, 4, 7, 0, tb);
			TB_ESC();
			Xoa_n_BOX(xx, 20, 50, 4, 1);
			return;
		}
		else p = p->next;
	}
	while (strcmp(sbd, p->infocb.san_bay_den) != 0) {
		if (p->infocb.date_time.nam < y || p->infocb.date_time.thang < m || p->infocb.date_time.ngay < d) {
			char tb[40] = "KHONG CO CHUYEN BAY NAO HOP LE!";
			BOX(xx, 20, 50, 4, 7, 0, tb);
			TB_ESC();
			Xoa_n_BOX(xx, 20, 50, 4, 1);
			return;
		}
		else
			p = p->next;
	}
	if (p->infocb.date_time.nam != y || p->infocb.date_time.thang != m || p->infocb.date_time.ngay != d) {
		char tb[40] = "KHONG CO CHUYEN BAY NAO HOP LE!";
		BOX(xx, 20, 50, 4, 7, 0, tb);
		TB_ESC();
		Xoa_n_BOX(xx, 20, 50, 4, 1);
		return;
	}
	char** ndbang = new char* [5];
	ndbang[0] = new char[30];
	ndbang[1] = new char[30];
	ndbang[2] = new char[30];
	ndbang[3] = new char[30];
	ndbang[4] = new char[30];
	strcpy(ndbang[0],"SO HIEU MAY BAY");
	strcpy(ndbang[1] , "MA CHUYEN BAY");
	strcpy(ndbang[2] , "GIO KHOI HANH");						// c++
	strcpy(ndbang[3] , "SO VE TRONG");
	strcpy)ndbang[4] , "TRANG THAI");
	int wcb[5] = { 17,17,8,3,3 };
	gotoxy(90, 6);
	cout << "DANH SACH CAC CHUYEN BAY KHOI HANH TRONG NGAY "; SetColor(1); cout_so(d); cout << "/"; cout_so(m); cout << "/"; cout_so(y); SetColor(7); cout << " DI TOI "; SetColor(1); cout << p->infocb.san_bay_den; SetColor(7);
	KE_BANG(xx, yy, wcb, 5, 10, ndbang);
	//	IN_TBESC();
	gotoxy(2, 30);
	SetColor(9);
	cout << "BAM           DE TRO LAI!";
	SetColor(4); gotoxy(6, 30); cout << "ESC/ENTER";
	SetColor(7);
	char nex[10] = "NEXT "; nex[5] = 26;
	char pre[10] = "<- PRE";
	bool lastp = 0;
	bool kt = 1; int yh; int count; int dau = 0;
	//	int xx = 90; int yy = 8;
	char charnum[10];
	while (1) {
		if (kt == 1) {
			count = 0; yh = 2;
			for (PTR_CB pp = p; pp->infocb.date_time.ngay == d && pp->infocb.date_time.thang == m && pp->infocb.date_time.nam == y; pp = pp->next) {
				if ((pp->infocb.dsve.ve_da_dat < pp->infocb.dsve.gioi_han) && (strcmp(pp->infocb.san_bay_den, sbd) == 0)) {
					if (count >= dau && count - dau < 10) {
						gotoxy(xx + 1, yy + 1 + yh); cout << "     ";
						CAN_GIUA(xx + 1, yy + 1 + yh, 5, itoa(dau + yh / 2, charnum, 10));
						gotoxy(xx + 9, yy + 1 + yh); cout << "               ";
						CAN_GIUA(xx + 9, yy + 1 + yh, 17, pp->infocb.shMB);;
						gotoxy(xx + 29, yy + 1 + yh); cout << "               ";
						CAN_GIUA(xx + 29, yy + 1 + yh, 17, pp->infocb.maCB);
						gotoxy(xx + 47 + 4, yy + 1 + yh); cout_so(pp->infocb.date_time.gio); cout << " : "; cout_so(pp->infocb.date_time.phut);
						gotoxy(xx + 63, yy + 1 + yh); cout << "         ";
						gotoxy(xx + 68, yy + 1 + yh); cout_so(pp->infocb.dsve.gioi_han - pp->infocb.dsve.ve_da_dat);
						gotoxy(xx + 78, yy + 1 + yh); IN_STATUS(pp->infocb.status);
						//	CAN_GIUA(135, 9 + yh, 13, itoa(p->infocb.dsve.gioi_han - p->infocb.dsve.ve_da_dat, charnum, 10));
						yh += 2;
						lastp = 1;
					}
					count++;
				}
				if (count - dau == 11) {
					if (p->next->infocb.date_time.ngay != d || p->next->infocb.date_time.thang != m || p->next->infocb.date_time.nam != y) {
						lastp = 1;
					}
					lastp = 0;
					break;
				}
				/*if (p->next == NULL) {
					lastp = 1;
				}
				if (count - dau < 10) {
					lastp = 1;
				}*/
			}
			if (lastp == 1) {
				thanh_sang(xx + 40, yy + 24, 6, 1, 7, 0, nex);
				XOA_CUOI_BANG(xx, yy + 2 + yh - 2 + 1, wcb, 5, 10 - yh / 2 + 1, ndbang);
			}
			else {
				thanh_sang(xx + 40, yy + 24, 6, 1, 11, 1, nex);
			}
			if (dau == 0) {
				thanh_sang(xx + 25, yy + 24, 6, 1, 7, 0, pre);
			}
			else {
				thanh_sang(xx + 25, yy + 24, 6, 1, 11, 1, pre);
			}
			kt = 0;
		}
		while (_kbhit()) {
			char a = getch();
			if (a == esc || a == enter) {
				gotoxy(2, 30); cout << "                             ";
				free_char(ndbang, 5);
				return;
			}
			else if (a == -32) {
				a = getch();
				if (a == phai && lastp != 1) {
					dau += 10;
					kt = 1;
				}
				if (a == trai && dau != 0) {
					if (lastp == 1) {
						THEM_CUOI_BANG(xx, yy + 2 + yh - 2, wcb, 5, 10 - yh / 2 + 1, ndbang);
						lastp = 0;
					}
					dau -= 10;
					kt = 1;
				}
			}
		}
	}
}
void INdsCB(PTR_CB First)
{
	/*char sbdd[40] = "NOI BAI";
	DSCB_TG_SBD(4, 8, 2021, sbdd, First,90,8);*/
	if (First == NULL) {
		char nd[30] = "HIEN KHONG CO CHUYEN BAY NAO!";
		BOX(70, 13, 70, 4, 7, 0, nd);
		TB_ESC();
		return;
	}
	int d = 0; int m = 0; int y = 0; char sbd[50] = "";
	gotoxy(43, 6);
	cout << "CHON THOI GIAN";
	gotoxy(40, 15);
	cout << "SAN BAY DEN : ";
	ve_vien(54, 14, 20, 2, 7);
	char xem[5] = "XEM";
	BOX(45, 18, 6, 2, 7, 0, xem);
	IN_TBESC();
	int chon = 1; bool kt = 1;
	int k = 1;
	while (kt) {
		switch (chon) {
		case 1: {
			CHON_DATE(d, m, y, 40, 8, k);
			if (d == 0 || m == 0 || y == 0) {
				XOA_TBESC();
				return;
			}
			else
				chon = 2;
		}
		case 2: {
			gotoxy(55 + 18, 15); ShowCur(1);
			if (strlen(sbd) == 0) {
				strcpy(sbd, chon_SB(82, 6));
				XOA_CHON_SB();
				if (strlen(sbd) == 0) {
					if (TB_THOAT()) {
						XOA_TBESC();
						return;
					}
				}
				else
					CAN_GIUA(55, 15, 19, sbd);
				break;
			}
			else {
				char a = getch();
				ShowCur(0);
				if (a == -32) {
					a = getch();
					if (a == phai) {
						strcpy(sbd, chon_SB(82, 6));
						XOA_CHON_SB();
						//	gotoxy(55, 15); cout << "                   ";
						CAN_GIUA(55, 15, 19, sbd);
						chon = 3;
					}
					if (a == len || a == trai) {
						chon = 1; k = 3;
						break;
					}
					if (a == xuong)
						chon = 3;
				}
				else
					if (a == enter)
						chon = 3;
					else
						if (a == esc) {
							if (TB_THOAT()) {
								XOA_TBESC();
								return;
							}
						}
			}
			break;
		}
		case 3: {
			thanh_sang(45, 18, 6, 2, 11, 1, xem);
			char a = getch();
			if (a == -32) {
				a = getch();
				if (a == len || a == trai) {
					thanh_sang(45, 18, 6, 2, 7, 0, xem);
					chon = 2;
				}
			}
			if (a == enter) {
				XOA_TBESC();
				DSCB_TG_SBD(d, m, y, sbd, First, 90, 8);
				Xoa_n_BOX(90, 6, 100, 30, 1);
				IN_TBESC();
				//	kt = 0;
				break;
			}
			if (a == esc) {
				if (TB_THOAT()) {
					XOA_TBESC();
					return;
				}
			}
			break;
		}
		}
	}

}

///////// THONG KE SO LUOT THUC HIEN CUA MAY BAY /////
void TK_MB(dsMB dsmb) {
	if (dsmb.soMB == 0) {
		char nd[40] = " KHONG CO MAY BAY NAO! ";
		BOX(100, 20, 70, 4, 12, 0, nd);
		TB_ESC();
		return;
	}
	PTR_MB a;
	for (int i = 0; i < dsmb.soMB; i++) {						// SORT MB THEO SLTH GIAM DAN//
		for (int j = i; j < dsmb.soMB; j++) {
			if (dsmb.mb[i]->slth < dsmb.mb[j]->slth) {
				a = dsmb.mb[i];
				dsmb.mb[i] = dsmb.mb[j];
				dsmb.mb[j] = a;
			}
		}
	}
	char** ndbang = new char* [3];
	ndbang[0] = new char[20];
	ndbang[1] = new char[20];
	ndbang[2] = new char[20];
	strcpy(ndbang[0] , "SO HIEU MAY BAY");
	strcpy(ndbang[1] , "LOAI MAY BAY");
	strcpy(ndbang[2] , "SO LAN THUC HIEN");
	int wcot[3] = { 17,25,1 };
	KE_BANG(85, 6, wcot, 3, 10, ndbang);
	IN_TBESC();
	char nex[10] = "NEXT "; nex[5] = 26;
	char pre[10] = "<- PRE";
	bool lastp = 0;
	bool kt = 1; int yh; int count; int dau = 0;
	char charnum[10];
	while (1) {
		if (kt == 1) {
			count = 0; yh = 2;
			for (int i = 0; i < dsmb.soMB; i++) {
				if (count >= dau && count - dau < 10) {
				//	gotoxy(86, 7 + yh); cout << "    ";
					CAN_GIUA(86, 7 + yh, 5, itoa(dau + yh / 2, charnum, 10));
				//	gotoxy(95, 7 + yh); cout << "              ";
					CAN_GIUA(95, 7 + yh, 15, dsmb.mb[i]->shMB);
				//	gotoxy(86, 7 + yh); cout << "    ";
					CAN_GIUA(113, 7 + yh, 25, dsmb.mb[i]->lMB);
					CAN_GIUA(141, 7 + yh, 15, itoa(dsmb.mb[i]->slth,charnum,10));
					yh += 2;
					if (i == dsmb.soMB - 1)
						lastp = 1;
				}
				count++; 
			}
			if (lastp == 1) {
				thanh_sang(120, 30, 6, 1, 7, 0, nex);
				XOA_CUOI_BANG(85, 8 + yh - 2 + 1, wcot, 3,10 - yh/2 + 1 , ndbang); 
			}
			else {
				thanh_sang(120, 30, 6, 1, 11, 1, nex);
			}
			if (dau == 0) {
				thanh_sang(105, 30, 6, 1, 7, 0, pre);
			}
			else {
				thanh_sang(105, 30, 6, 1, 11, 1, pre);
			}
			kt = 0;
		}
		while(_kbhit()){
			char a = getch();
			if (a == esc) {
				XOA_TBESC();
				free_char(ndbang,3);
				return;
			}
			else if (a == -32) {
				a = getch();
				if (a == phai && lastp != 1) {
					dau += 10;
					kt = 1;
				}
				if (a == trai && dau != 0) {
					if (lastp == 1) {
						THEM_CUOI_BANG(85, 8 + yh - 2, wcot, 3, 10 - yh / 2 + 1, ndbang);
						lastp = 0;
					}
					dau -= 10;
					kt = 1;
				}
			}
		}
	}
}

////// DANH SACH VE CON TRONG CUA 1 CHUYEN BAY  /////
void IN_DSVE_CT(PTR_CB First) {
	if (First == NULL) {
		char nd[40] = " KHONG CO CHUYEN BAY NAO! ";
		BOX(100, 20, 70, 4, 12, 0, nd);
		TB_ESC();
		return;
	}
	else while(1) {
		
		PTR_CB p = nhap_macb(First);
		if (p == NULL) {
			return;
		}
		else {
			XOA_MH();
		//	PTR_CB p = tim_CB(First, macb);5
			gotoxy(80, 6); cout << " DANH SACH VE CON TRONG CUA CHUYEN BAY "<<p->infocb.maCB;
			gotoxy(80, 7); cout << "San bay den: " << p->infocb.san_bay_den << "     Trang thai: "; IN_STATUS(p->infocb.status);
			gotoxy(110, 11);  cout << "                     DANH SACH CHO NGOI                     ";
			gotoxy(130, 12); cout << "SO VE CON TRONG : " << p->infocb.dsve.gioi_han - p->infocb.dsve.ve_da_dat;
			gotoxy(82, 14);
			INCHONGOI(p);
			char** ndbang = new char* [1];
			ndbang[0] = new char[10];
			strcpy(ndbang[0] , "VE TRONG");
			int w[1] = { 30 };
			int dau = 0; bool kt = 1;
			bool lastp = 0; int count = 0; int yh = 2; int dem = 0;
			char nex[10] = "NEXT "; nex[5] = 26;
			char pre[10] = "<- PRE";
			KE_BANG(40, 11, w, 1, 10, ndbang);
			IN_TBESC(); bool k = true;
			IN_TB_ENTER_ESC();
			while (k) {
				if (kt == 1) {
					count = 0; yh = 2; dem = 0;
					for (int i = 1; i <= p->infocb.dsve.gioi_han && count < 10; i++) {
						if ((strcmp(p->infocb.dsve.ve[i], "") == 0)) {
							if (dem >= dau) {
								gotoxy(42, 12 + yh);
								cout << "   ";
								gotoxy(42, 12 + yh);
								cout << dau + yh / 2;
								gotoxy(62, 12 + yh);
								cout << i << "   ";
								yh += 2;
								count++;
							}
							dem++;
						}
						if (i == p->infocb.dsve.gioi_han) lastp = 1;
						if (count == 10 && i != p->infocb.dsve.gioi_han) {
							int j = i + 1;
							while (strcmp(p->infocb.dsve.ve[j], "") != 0) {
								if (j == p->infocb.dsve.gioi_han) {
									lastp = 1;
									break;
								}
								else
									j++;
							}

						}
					}
					if (lastp == 1) {
						thanh_sang(65, 35, 7, 1, 7, 0, nex);
						XOA_CUOI_BANG(40, 15 + yh - 4 + 1, w, 1, 10 - count, ndbang);
					}
					else {
						thanh_sang(65, 35, 7, 1, 1, 11, nex);
						//	kt = 0;
					}
					if (dau == 0) {
						thanh_sang(50, 35, 7, 1, 7, 0, pre);
					}
					else {
						thanh_sang(50, 35, 7, 1, 1, 11, pre);
						//	kt = 0;
					}
					kt = 0;
				}
				while (_kbhit()) {
					char a = getch();
					if (a == -32) {
						a = getch();
						if (a == phai && lastp == 0) {
							dau += 10;
							kt = 1;
						}
						else if (a == trai && dau != 0) {
							if (lastp == 1) {
								THEM_CUOI_BANG(40, 15 + yh - 4, w, 1, 10 - count, ndbang);
								lastp = 0;
							}
							dau -= 10;
							kt = 1;
						}
					}
					else if (a == esc || a == enter ) {
						XOA_TB_ENTER_ESC();
						k = false;
						free_char(ndbang,1);
						XOA_MH();

					}
				}
			}
		}
	}	
}

//============  HAM VE & THONG BAO ==================//
void IN_TB_ENTER_ESC() {
	gotoxy(2, 30);
	SetColor(9);
	cout << "BAM           DE TRO LAI!";
	SetColor(4); gotoxy(6, 30); cout << "ESC/ENTER";
	SetColor(7);
}
void XOA_TB_ENTER_ESC() {
	gotoxy(2, 30); cout << "                             ";
}
bool TB_THOAT() {
	int x = wherex();
	int y = wherey();
	HighLight();
	gotoxy(5, 30); cout << "BAN CO DONG Y THOAT?";
	Normal();
	gotoxy(2, 31); cout << "BAM   DE THOAT";
	gotoxy(2, 32); cout << "PHIM BAT KI DE TIEP TUC";
	SetColor(4); gotoxy(6, 31); cout << "Y"; SetColor(7);
	char a = getch();
	gotoxy(5, 30); cout << "                    ";
	gotoxy(2, 31); cout << "              ";
	gotoxy(2, 32); cout << "                       ";
	gotoxy(x, y);
	if (a == 'y' || a == 'Y') {
		return true;
	}
	else {
		if (a == -32) {
			a = getch();
			return false;
		}
		else 
			return false;
	}
}
void XOA_CHON_SB() {
	for (int i = 0; i < 40; i++) {
		gotoxy(80, 5 + i);
		cout << "                                                                                                                        ";
	}
}
void CAN_GIUA(int x, int y, int w, char* a) {
	int k = strlen(a);
	if (k == 0) return;
	for (int i = x; i < x + (w - k) / 2; i++) {
		gotoxy(i, y); cout << " ";
		gotoxy(i  + (w - k) / 2 + k, y); cout << " ";
	}
	gotoxy(x + (w - k) / 2, y); cout << a;
}
void IN_TBTIEPTUC() {
	HighLight();
	gotoxy(2, 32); cout << "BAM   DE TIEP TUC CHUC NANG ";
	SetColor(4);
	gotoxy(6, 32); cout << "T";
	Normal();
}
void XOA_TBTIEPTUC() {
	gotoxy(2, 32); cout << "                             ";
}
void IN_TBESC() {
	HighLight();
	gotoxy(5, 28); cout << " BAM     DE THOAT! ";
	SetColor(4);
	gotoxy(10, 28); cout << "ESC";
	Normal();
}
void XOA_TBESC() {
	gotoxy(5, 28); cout << "                   ";
}
void ve_vien(int x, int y,int w, int h, int color_vien) {
	if (h < 1 || w < 1) return;
	SetColor(color_vien);
	for (int ix = x; ix <= w + x; ix++) {
		gotoxy(ix, y);
		cout << char(205);
		gotoxy(ix, y + h);
		cout << char(205);
	}
	for (int iy = y; iy <= h + y; iy++) {
		gotoxy(x, iy);
		cout << char(186);
		gotoxy(x + w, iy);
		cout << char(186);
	}
	gotoxy(x, y); cout << char(201);//goc tren ben trai
	gotoxy(x + w, y); cout << char(187);//goc tren ben phai
	gotoxy(x, y + h); cout << char(200);//goc duoi trai
	gotoxy(x + w, y + h); cout << char(188);//goc duoi phai
}
void thanh_sang(int x, int y, int w, int h, int t_color_sang, int bg_color_sang, char* nd) {
	SetBGColor(bg_color_sang);
	for (int ix = x + 1; ix < x + w; ix++) {
		for (int iy = y + 1; iy < y + h; iy++) {
			gotoxy(ix, iy); cout << " ";
		}
	}
	SetColor(t_color_sang);
	gotoxy(((w - strlen(nd)) / 2) + 1 + x, y + h / 2);
	cout << nd;
	SetColor(7);
	SetBGColor(0);
}
void XOA_MH() {
	for (int i = 0; i < 48; i++) {
		gotoxy(35, 4+i);
		cout << "                                                                                                                                                                               ";
		
	}
}
void THONG_BAO(char* a) {
	gotoxy(2, 30);
	HighLight();
	cout << a;
	Normal();
	gotoxy(2, 35); cout << "BAM PHIM BAT KI DE TIEP TUC";
	while (true) {
		if (_kbhit()) {
			char c = getch();
			if (c == -32) c = getch();
			gotoxy(2, 30); cout << "                             ";
			gotoxy(2, 35); cout << "                             ";
			return;
		}
	}
}
void TB_ESC() {
	gotoxy(2, 30);
	SetColor(9);
	cout << "BAM           DE TRO LAI!";
	SetColor(4); gotoxy(6, 30); cout << "ESC/ENTER";
	SetColor(7);
	while (true) {
		if (_kbhit()) {
			char a = _getch();
			if (a == esc || a == enter) {
				gotoxy(2, 30); cout << "                             "; /// w = 29
				return;
			}
		}
	}
}
void BOX(int x, int y, int w, int h, int t_color, int bg_color, char* nd) {
	if (h <= 1 || w <= 1) return;
	SetColor(t_color);
	for (int ix = x; ix <= w + x; ix++) {
		gotoxy(ix, y);
		cout << char(205);
		gotoxy(ix, y + h);
		cout << char(205);
	}
	for (int iy = y; iy <= h + y; iy++) {
		gotoxy(x, iy);
		cout << char(186);
		gotoxy(x + w, iy);
		cout << char(186);
	}
	gotoxy(x, y); cout << char(201);//goc tren ben trai
	gotoxy(x + w, y); cout << char(187);//goc tren ben phai
	gotoxy(x, y + h); cout << char(200);//goc duoi trai
	gotoxy(x + w, y + h); cout << char(188);//goc duoi phai
	SetBGColor(bg_color);
	for (int ix = x + 1; ix <= x + w - 1; ix++) {
		for (int iy = y + 1; iy <= y + h - 1; iy++) {
			gotoxy(ix, iy);
			cout << " ";
		}
	}
	gotoxy(((w - strlen(nd)) / 2) + 1 + x, y + h / 2);
	cout << nd;
	SetBGColor(0);
	SetColor(7);
}
void n_BOX_ke_duoi(int x, int y, int w, int h, int t_color, int bg_color, int n, char nd[][20]) {
	for (int i = 0; i < n; i++) {
		BOX(x, y + i * h, w, h, t_color, bg_color, nd[i]);
		if (i != 0) {
			SetColor(t_color);
			gotoxy(x, y + i * h);
			cout << char(204);
			gotoxy(x + w, y + i * h);
			cout << char(185);
		}
	}
	SetColor(7);
}
void Xoa_n_BOX(int x, int y, int w, int h, int n) {
	gotoxy(x, y);
	for (int ix = x; ix <= x + w; ix++) {
		for (int iy = y; iy <= y + h * n; iy++) {
			gotoxy(ix, iy);
			cout << " ";
		}
	}
}
void KE_BANG(int x, int y, int *wcot, int col, int row, char** nd) {
	if (col != 0 && row != 0) {
		int xn = x;  int yn = y;  char stt[5] = "STT"; int h = 2;
		for (int i = 0; i <= col; i++) {
			if (i == 0) {
				for (int j = 0; j <= row; j++) {
					if (j == 0) {
						BOX(xn, yn, strlen(stt) + 3, h, 7, 0, stt);
						yn += h;
					}
					else {
						ve_vien(xn, yn, strlen(stt) + 3, h, 7);
						gotoxy(xn, yn); cout << char(204);
						yn += h;
					}
				}
				xn += strlen(stt) + 3;
				yn = y;
			}
			else {
				if (strlen(nd[i - 1]) > wcot[i - 1]) {
					for (int j = 0; j <= row; j++) {
						if (j == 0) {
							BOX(xn, yn, strlen(nd[i - 1]) + 3, h, 7, 0, nd[i - 1]);
							gotoxy(xn, yn); cout << char(203);
							yn += h;
						}
						else {
							ve_vien(xn, yn, strlen(nd[i - 1]) + 3, h, 7);
							gotoxy(xn, yn); cout << char(206);
							yn += h;
						}
					}
					gotoxy(xn, yn); cout << char(202);
					xn += strlen(nd[i - 1]) + 3;
					yn = y;
				}
				else {
					for (int j = 0; j <= row; j++) {
						if (j == 0) {
							BOX(xn, yn, wcot[i - 1] + 3, h, 7, 0, nd[i - 1]);
							gotoxy(xn, yn); cout << char(203);
							yn += h;
						}
						else {
							ve_vien(xn, yn, wcot[i - 1] + 3, h, 7);
							gotoxy(xn, yn);	cout << char(206);
							yn += h;
						}
					}
					gotoxy(xn, yn); cout << char(202);
					xn += wcot[i - 1] + 3;
					yn = y;
				}
			}
		}
		for (int i = 1; i <= row; i++) {
			gotoxy(xn, yn + h * i); cout << char(185);
		}
	}
}
void XOA_CUOI_BANG(int x, int y, int* wcot, int col, int row, char** nd) {
	if (row == 0 || col == 0) return;
	int w_row = 7;
	for (int i = 0; i < col; i++) {
		if (strlen(nd[i]) > wcot[i]) w_row += strlen(nd[i]) + 3;
		else
			w_row += wcot[i] + 3;
	}
	for (int i = 0; i < row*2; i++) {
		gotoxy(x, y + i);
		for (int j = 0; j < w_row; j++) {
			cout << " ";
		}
	}
	gotoxy(x, y - 1); cout << char(200);
	x += 6;
	for (int i = 0; i < col; i++) {
		gotoxy(x, y - 1); cout << char(202);
		if (strlen(nd[i]) > wcot[i]) x += strlen(nd[i]) + 3;
		else
			x += wcot[i] + 3;
	}
	gotoxy(x, y - 1); cout << char(188);
}
void THEM_CUOI_BANG(int x, int y, int* wcot, int col, int row, char** nd) {
	if (col != 0 && row != 0) {
		int xn = x;  int yn = y;  int h = 2;
		for (int i = 0; i <= col; i++) {
			if (i == 0) {
				for (int j = 0; j < row; j++) {					
					ve_vien(xn, yn, 6, h, 7);
					gotoxy(xn, yn); cout << char(204);
					yn += h;					
				}
				xn += 6;
				yn = y;
			}
			else {
				if (strlen(nd[i - 1]) > wcot[i - 1]) {
					for (int j = 0; j < row; j++) {				
						ve_vien(xn, yn, strlen(nd[i - 1]) + 3, h, 7);
						gotoxy(xn, yn); cout << char(206);
						yn += h;				
					}
					gotoxy(xn, yn); cout << char(202);
					xn += strlen(nd[i - 1]) + 3;
					yn = y;
				}
				else {
					for (int j = 0; j < row; j++) {					
						ve_vien(xn, yn, wcot[i - 1] + 3, h, 7);
						gotoxy(xn, yn);	cout << char(206);
						yn += h;					
					}
					gotoxy(xn, yn); cout << char(202);
					xn += wcot[i - 1] + 3;
					yn = y;
				}
			}
		}
		for (int i = 0; i < row; i++) {
			gotoxy(xn, yn + h * i); cout << char(185);
		}
	}
}
