#ifndef  Mang2C_SoNguyen_h
#define Mang2C_SoNguyen_h
#define _CRT_SECURE_NO_WARNINGS

// Phần khai báo các thư viện cần dùng
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

// Phần tạo kiểu dữ liệu người dùng
typedef int ItemType;
typedef ItemType* ArrPtr;

// Phần khai báo các nguyên mẫu hàm
void fixScanf();
void nhapSoNguyenDuong(int& x);
void initArrayPointer(ArrPtr*& a, int m, int n);     // Khởi tạo mảng con trỏ
void freeArrayPointer(ArrPtr*& a, int m, int n);  // Giải phóng bộ nhớ mảng con trỏ

void nhapMang2C_SoNguyen(ArrPtr*& a, int& m, int& n);
void taoMang2C_SoNguyen(ArrPtr*& a, int& m, int& n);
void docMang2C_SoNguyen(const char* FileName, ArrPtr*& a, int& m, int& n);
void xuatMang2C_SoNguyen(ArrPtr* a, int m, int n);

void sum_Element_OddFirstNumber(ArrPtr* a, int m, int n);
void listed_SoHoanThien(ArrPtr* a, int m, int n);
int sum_ElementBiggerThan_absNextElement(ArrPtr* a, int m, int n);
int sum_LineK_Array2D(ArrPtr* a, int m, int n, int k);
int count_X(ArrPtr* a, int m, int n, int x);
int sum_Element_TrenBien(ArrPtr* a, int m, int n);

// Liệt Kê Phần Tử Yên Ngựa
// Phần Tử Yên Ngựa Là Phần Tử Lớn Nhất Trên Dòng - Nhỏ Nhất Trên Cột Hoặc Ngược Lại
int findMax_LineK(ArrPtr* a, int m, int n, int k);
int findMin_LineK(ArrPtr* a, int m, int n, int k);
int findMax_ColumnK(ArrPtr* a, int m, int n, int k);
int findMin_ColumnK(ArrPtr* a, int m, int n, int k);
void listed_Element_YenNgua(ArrPtr* a, int m, int n);

// Sắp Xếp mảng a Tăng Theo Từng Dòng
void sortIncrease_LineK(ArrPtr* a, int n, int k);
void sortIncrease_EachLine(ArrPtr* a, int m, int n);

// Liệt Kê Các Dòng Chứa Số Lẻ
int check_ColumnK_Odd(ArrPtr* a, int m, int n, int k);
void listed_Column_Odd(ArrPtr* a, int m, int n);

// Sắp Xếp ZicZac
void hoanVi(ItemType& x, ItemType& y);
void sort_IncreaseGradually(ItemType*& a, int m);
void sort_DecreaseGradually(ItemType*& a, int m);
void sort_EvenIncrease_OddDecrease_Line(ArrPtr*& a, int m, int n);
void sort_ZicZac(ArrPtr* a, int m, int n);

void sort_ColumnC(ArrPtr* a, int m, int c);
void sort_ColumnC_DecreaseGradually(ArrPtr* a, int m, int n, int c);
void listed_Column_Own_Even(ArrPtr* a, int m, int n);

int Sum_ColumnK(ArrPtr* a, int m, int k);
void listed_Column_MinSum(ArrPtr* a, int m, int n);
void listed_MinElement_RowK(ArrPtr* a, int n, int k);

#endif

