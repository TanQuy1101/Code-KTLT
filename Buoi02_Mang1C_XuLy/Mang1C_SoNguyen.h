#ifndef  Mang1C_SoNguyen_h
#define Mang1C_SoNguyen_h

// Phần khai báo các thư viện cần dùng
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

// Phần tạo kiểu dữ liệu người dùng
typedef int ItemType;

// Phần khai báo các nguyên mẫu hàm
void nhapSoNguyenDuong(int& x);

void nhapMang1C_SoNguyen(ItemType*& a, int& n);
void taoMang1C_SoNguyen(ItemType*& a, int& n);
void docMang1C_SoNguyen(const char *FileName, ItemType*& a, int& n);
void xuatMang1C_SoNguyen(ItemType*a, int n);

int timKiem_TuyenTinh(ItemType* a, int n, ItemType x);
int timKiem_NhiPhan(ItemType* a, int n, ItemType x);
void hoanVi(ItemType&x, ItemType&y);
void sapXep_DoiChoTrucTiep_TangDan(ItemType*&a,int n);
void sapXep_DoiChoTrucTiep_GiamDan(ItemType*& a, int n);

int delete_Array1D_Site(ItemType*& a, int& n, int site);
int find_ValueMax(ItemType* a, int n);
int find_ValueMax2(ItemType* a, int n);
int find_ValueMax2_Method2(ItemType* a, int n);

void insert_Last_Array1D(ItemType*a,int &n,int x);
void insert_First_Array1D(ItemType* a, int& n, int x);
void insert_SiteK_Array1D(ItemType* a, int& n, int x, int site);

int check_Array1D_Balance(ItemType* a, int n);
int check_SoNguyenTo(int n);
int count_SoNguyenTo(ItemType* a, int& n);
int check_Odd(int n);
void print_Odd(ItemType* a, int n);
int check_EvenOdd_Interleaved(ItemType* a, int n);

void sort_EvenFirst_OddLast(ItemType*& a, int n);
void print_Element_EvenSite(ItemType* a, int n);
void average_Element_Array1D(ItemType* a, int n);
int find_EvenMax(ItemType* a, int n);
void find_All_EvenMax(ItemType* a, int n);

#endif 

