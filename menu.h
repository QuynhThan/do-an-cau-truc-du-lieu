
#include "doc_ghi_file.h"
/// <summary>
/// //////////////////////////SETTING CHON CHO NGOI BAT NGUOI DUNG NHAP DUNG///////////////////
/// 
/// </summary>


void resizeConsole(int width, int height);
//void BOX(int x, int y, int w, int h, int t_color, int bg_color, char* nd);
void BOX_THONG_BAO();
void fullscreen();
void Giao_Dien(int* aa, int* b, int& nn, int& m, int& so_CB, PTR_CB& CB, dsMB& ds_mb, PTR_HK& Root, int& so_0, char* macb);

/// <summary>
///					TOA DO BOX GIUA KHUNG X=70, Y =13
///					TOA DO KHUNG HIEN THI NOI DUNG X = 32 , Y = 6
/// </summary>
void menu()
{
	srand(time(NULL));
	///
	PTR_HK Root = NULL;
	filein_dshk(Root);
	///
	int so_CB = 0;
	dsMB ds_mb;
	doc_file_MB(ds_mb);// DOC DSMB TRUOC DSCB///
	PTR_CB CB = NULL;
	doc_file_CB(CB, so_CB, ds_mb);
	doc_file_VE(CB);
	int n, m, so_0;
	char macb[10] = "";
	int* a, * b;
	doc_file_mang_MB(a, n);
	doc_file_mang_CB(b, m, so_0, macb);
	Giao_Dien(a, b, n, m, so_CB, CB, ds_mb, Root, so_0, macb);
	fileout_dshk(Root);
	ghi_file_MB(ds_mb);
	ghi_file_CB(CB, so_CB);
	ghi_file_VE(CB);
	ghi_file_mang_MB(a, n);
	ghi_file_mang_CB(b, m, so_0, macb);
	delete_DSHK(Root);
	delete_CB(CB);
	delete_dsmb(ds_mb);
	delete[] a;
	delete[] b;
}

void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}
void fullscreen()
{
	keybd_event(VK_MENU, 0x38, 0, 0);
	keybd_event(VK_RETURN, 0x1c, 0, 0);
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
}
void BOX_THONG_BAO() {
	int x = 1; int y = 26; int w = 30; int h = 23; int t_color = 7; int bg_color = 0;
	ve_vien(x, y, w, h, t_color);
	gotoxy(x + 11, y + 1); cout << "THONG BAO";
	gotoxy(x + 1, y + 18); cout << "ESC: TRO LAI";
	gotoxy(x + 1, y + 19); cout << "UP: DI CHUYEN LEN";
	gotoxy(x + 1, y + 20); cout << "DOWN: DI CHUYEN XUONG";
	gotoxy(x + 1, y + 21); cout << "LEFT: DI CHUYEN QUA TRAI";
	gotoxy(x + 1, y + 22); cout << "RIGHT: DI CHUYEN QUA PHAI";
	for (int ix = x; ix < w + x; ix++) {
		gotoxy(ix, 42); cout << char(205);
	}
	gotoxy(x, 42); cout << char(204);
	gotoxy(x + w, 42); cout << char(185);
}
void Giao_Dien(int* aa, int* b, int& nn, int& m, int& so_CB, PTR_CB& CB, dsMB& ds_mb, PTR_HK& Root, int& so_0, char* macb) {/// toa do y duoi THONG BAO y=27
//	resizeConsole(2000, 800);
	fullscreen();
	ShowCur(0);
	int x = 1; int y = 4; int w = 30; int h = 4; int t_color = 7; int bg_color = 0;
	char trangchu[10] = "TRANG CHU"; char chucnang[10] = "CHUC NANG";
	int xtc = x + w; int ytc = 1; int wtc = 178; int htc = 2; int wtc_ht = wtc - 150; int xtc_ht = xtc + 70;
	int n = 4;
	char nd[4][20] = { "DAT/HUY VE","CHUYEN BAY","MAY BAY","CAC DANH SACH" };
	int t_color_sang = 1;
	int bg_color_sang = 11;
	ve_vien(0, 0, 210, 58, t_color);
	BOX_THONG_BAO();
	BOX(xtc, ytc, wtc, htc, t_color, bg_color, trangchu);
	BOX(x, ytc, w, htc, t_color, bg_color, chucnang);
	gotoxy(xtc, ytc); cout << char(203);
	gotoxy(xtc, ytc + htc); cout << char(202);
	n_BOX_ke_duoi(x, y, w, h, t_color, bg_color, n, nd);
	thanh_sang(x, y, w, h, t_color_sang, bg_color_sang, nd[0]);
	int cnc = 0; int cnccu = cnc;
	int xs = x; int ys = y;
	int xcu = xs; int ycu = ys;
	int xcot = x; int ycot = y;
	int scn = 0;
	char nddv[2][20] = { "DAT VE","HUY VE" };
	char ndcb[4][20] = { "TAO CHUYEN BAY","XOA CHUYEN BAY","CHINH SUA CB","HUY CHUYEN BAY" };
	char ndmb[3][20] = { "THEM MAY BAY", "XOA MAY BAY",  "HIEU CHINH MAY BAY" };
	char ndds[4][20] = { "DS VE", "DSHK THEO MACB", "IN DSCB THEO NGAY","THONG KE MAY BAY" };
	bool kt = true;
	bool xoa = 0;
	ShowCur(0);
	while (true) {
		if (kt == true) {
			if (xoa == 0)
				thanh_sang(xcu, ycu, w, h, t_color, bg_color, nd[cnccu]);
			cnccu = cnc;
			xoa = 0;
			xcu = xs;
			ycu = ys;
			thanh_sang(xs, ys, w, h, t_color_sang, bg_color_sang, nd[cnc]);
			kt = false;
		}
		if (_kbhit()) {
			char a = _getch();
			if ((a == 72 && ys != y && xs == xcot)) {
				//	xs = x;
				ys = ys - h;
				cnc--;
				kt = true;
			}
			if ((a == 80 && ys != y + h * n - h && xs == x) || (a == 80 && ys != ycot + h * scn - h && xs == xcot + w + 1)) {
				//	xs = x;
				ys = ys + h;
				cnc++;
				kt = true;
			}
			if ((a == 13 || a == 77) && xs != xcot + w + 1) {
				xcot = xs;
				ycot = ys;
				xs = xcot + w + 1;
				int cnp = 0; int cnpcu = 0;
				thanh_sang(xtc_ht, ytc, wtc_ht, htc, t_color, bg_color, nd[cnccu]);
				if (ys == y) {
					scn = 2;
					cnp = 1;
					n_BOX_ke_duoi(xs, ys, w, h, t_color, bg_color, scn, nddv);
				}
				if (ys == y + h) {
					scn = 4;
					cnp = 2;
					n_BOX_ke_duoi(xs, ys, w, h, t_color, bg_color, scn, ndcb);
				}
				if (ys == y + h * 2) {
					scn = 3;
					cnp = 3;
					n_BOX_ke_duoi(xs, ys, w, h, t_color, bg_color, scn, ndmb);
				}
				if (ys == y + h * 3) {
					scn = 4;
					cnp = 4;
					n_BOX_ke_duoi(xs, ys, w, h, t_color, bg_color, scn, ndds);
				}
				int cnpm = 0;
				int kt2 = true;
				while (kt == false) {
					if (kt2 == true) {
						if (xoa == 0) {//to lai mau cu cho chuc nang chinh// chi to 1 lan// dung tam bien xoa lam dk
							thanh_sang(xcu, ycu, w, h, t_color, bg_color, nd[cnccu]);
							xoa = 1;
						}
						else {
							if (cnp == 1)
								thanh_sang(xcu, ycu, w, h, t_color, bg_color, nddv[cnpcu]);
							if (cnp == 2)
								thanh_sang(xcu, ycu, w, h, t_color, bg_color, ndcb[cnpcu]);
							if (cnp == 3)
								thanh_sang(xcu, ycu, w, h, t_color, bg_color, ndmb[cnpcu]);
							if (cnp == 4)
								thanh_sang(xcu, ycu, w, h, t_color, bg_color, ndds[cnpcu]);
						}
						cnpcu = cnpm;
						xcu = xs;
						ycu = ys;
						if (cnp == 1)
							thanh_sang(xs, ys, w, h, t_color_sang, bg_color_sang, nddv[cnpm]);
						if (cnp == 2)
							thanh_sang(xs, ys, w, h, t_color_sang, bg_color_sang, ndcb[cnpm]);
						if (cnp == 3)
							thanh_sang(xs, ys, w, h, t_color_sang, bg_color_sang, ndmb[cnpm]);
						if (cnp == 4)
							thanh_sang(xs, ys, w, h, t_color_sang, bg_color_sang, ndds[cnpm]);
						kt2 = false;
					}
					if (_kbhit()) {
						char a2 = _getch();
						if (a2 == len && ys != ycot) {//&& xs == xcot + w +1))
							ys -= h;
							cnpm--;
							kt2 = true;
						}
						if (a2 == xuong && ys != ycot + scn * h - h) {
							ys += h;
							cnpm++;
							kt2 = true;
						}
						if (a2 == esc || a2 == trai) {
							xs = xcot;
							ys = ycot;
							xcot = x;
							Xoa_n_BOX(xcot + w + 1, ycot, w, h, scn);
							xoa = 1;
							thanh_sang(xtc_ht, ytc, wtc_ht, htc, t_color, bg_color, trangchu);
							kt = true;//tro lai cot 1
						}
						if (a2 == enter) {
							//gotoxy(40, 4);
							xs = xcot;
							ys = ycot;
							xcot = x;
							Xoa_n_BOX(xcot + w + 1, ycot, w, h, scn);
							xoa = 1;
							kt = true;
							switch (cnp) {
							case 1: {
								thanh_sang(xtc_ht, ytc, wtc_ht, htc, t_color, bg_color, nddv[cnpm]);
								switch (cnpm) {
								case 0: {

									DAT_VE(CB, Root);

									break;
								}
								case 1: {
									HuyVE(CB, Root);
									break;
								}
								default: break;
								}
								break;
							}
							case 2: {
								thanh_sang(xtc_ht, ytc, wtc_ht, htc, t_color, bg_color, ndcb[cnpm]);
								switch (cnpm) {
								case 0: {
									Lap_CB_moi(CB, ds_mb, b, m, so_0, macb, so_CB);
									break;
								}
								case 1: {
									xoa_CB(CB, so_CB);
									break;
								}
								case 2: {
									hieu_chinh_CB(CB);
									break;
								}
								case 3: {
									huy_chuyen(CB);
									break;
								}
								default: break;
								}
								break;
							}
							case 3: {
								thanh_sang(xtc_ht, ytc, wtc_ht, htc, t_color, bg_color, ndmb[cnpm]);
								switch (cnpm) {
									//	"THEM MAY BAY", "XOA MAY BAY",  "HIEU CHINH MAY BAY"
								case 0: {
									them_MB(ds_mb, aa, nn);
									break;
								}
								case 1: {
									xoa_MB(ds_mb, CB);
									break;
								}
								case 2: {
									hieu_chinh_MB(ds_mb, CB);
									break;
								}
								default: break;
								}
								break;
							}
							case 4: {
								thanh_sang(xtc_ht, ytc, wtc_ht, htc, t_color, bg_color, ndds[cnpm]);
								switch (cnpm) {
									//	"DS MAY BAY", "DS VE", "DSHK THEO MACB", "IN DSCB THEO NGAY","THONG KE MAY BAY"
								case 0: {
									//	in_dsve(CB);
									IN_DSVE_CT(CB);
									break;
								}
								case 1: {
									INdsHK(CB, Root);
									break;
								}
								case 2: {
									INdsCB(CB);
									break;
								}
								case 3: {
									TK_MB(ds_mb);
									break;
								}
								default: break;
								}
								break;
							}
							default: break;
							}
							ShowCur(0);
							XOA_MH();
							thanh_sang(xtc_ht, ytc, wtc_ht, htc, t_color, bg_color, trangchu);
						}
					}
				}
			}
			else if (a == 27 && xs == x) {
				return;
			}
		}
	}
}
