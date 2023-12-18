#ifndef  Arr2D_h
#define Arr2D_h

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

typedef int ItemType;
typedef ItemType* ArrPtr;

void fixScanf();
void deleteEndLine(char s[]);

void nhapSoNguyenDuong(int& x);
void initArrayPointer(ArrPtr*& a, int m, int n);     
void freeArrayPointer(ArrPtr*& a, int m, int n);  

void nhapMang2C_SoNguyen(ArrPtr*& a, int& m, int& n);
void taoMang2C_SoNguyen(ArrPtr*& a, int& m, int& n);
void docMang2C_SoNguyen(const char* FileName, ArrPtr*& a, int& m, int& n);
void xuatMang2C_SoNguyen(ArrPtr* a, int m, int n);

void hoanVi(ItemType& x, ItemType& y);

#endif 


