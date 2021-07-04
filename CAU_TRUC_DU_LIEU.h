#pragma once
//#include<iostream>
#include "mylib.h"
#define MAXMB 300
using namespace std;
struct MB
{
	char shMB[15];//DUY-NHAT
	char lMB[40];
	int seat;	//>=20
	int slth = 0;//so_lan_thuc_hien_chuyen_bay

};
typedef struct MB* PTR_MB;
struct dsMB
{
	PTR_MB mb[MAXMB];
	int soMB = 0;
};

struct dsVE
{
	char** ve;
	int ve_da_dat = 0;
	int gioi_han;
};

void tao_ds_ve(dsVE& ds_ve, int gioi_han)
{
	ds_ve.gioi_han = gioi_han;
	ds_ve.ve = new char* [gioi_han + 1];
	for (int i = 1; i <= gioi_han; i++) ds_ve.ve[i] = new char[15]{ '\0'};
}
struct DATE_TIME
{
	int ngay = 0, thang = 0, nam = 0;
	int gio = -1, phut = -1;
};
struct infoCB
{
	char maCB[15];
	DATE_TIME date_time;
	int status = 1;//0: huy chuyen, 1: con ve, 2: het ve, 3: hoan tat.
	char san_bay_den[50] = "";
	char shMB[15] = "";//..... so hieu may bay = shmb mang con tro MB
	dsVE dsve;
};

struct nodeCB //danh sach lien ket don
{
	infoCB infocb;
	nodeCB* next;
};
typedef struct nodeCB* PTR_CB;

struct infoHK {
	char so_CMND[15];//key
	char ho[40];
	char ten[10];
	char phai[5];
};
struct TREE_HK//cay nhi phan tim kiem
{
	infoHK infohk;
//	int bf = 0; /// chỉ số cân bằng.
	TREE_HK* pleft ;
	TREE_HK* pright;
};
typedef TREE_HK* PTR_HK;
