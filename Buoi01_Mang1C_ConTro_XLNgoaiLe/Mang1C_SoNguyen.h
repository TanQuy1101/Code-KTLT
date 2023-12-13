#ifndef  Mang1C_SoNguyen_h
#define Mang1C_SoNguyen_h

// Phần khai báo các thư viện cần dùng
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// Phần tạo kiểu dữ liệu người dùng
typedef int ItemType;

// Phần khai báo các nguyên mẫu hàm
void nhapSoNguyenDuong(int& x);

void nhapMang1C_SoNguyen(ItemType*& a, int& n);
void taoMang1C_SoNguyen(ItemType*& a, int& n);
void docMang1C_SoNguyen(const char *FileName, ItemType*& a, int& n);
void xuatMang1C_SoNguyen(ItemType*a, int n);

#endif 

