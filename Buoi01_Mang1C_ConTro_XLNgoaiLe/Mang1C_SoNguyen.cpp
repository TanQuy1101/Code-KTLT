//#include "Mang1C_SoNguyen.h"
//
//void nhapSoNguyenDuong(int& x)
//{
//	do
//	{
//		scanf_s("%d", &x);
//		if (x <= 0)
//	    {
//			printf("\nSo Nguyen Vua Nhap Khong Hop Le ! Hay Nhap Lai: ");
//		}
//	} while (x <= 0);
//}
//////===================================================================================
//void nhapMang1C_SoNguyen(ItemType*& a, int& n)
//{
//	printf("Nhap So Luong Phan Tu Cua Mang: ");
//	nhapSoNguyenDuong(n);
//	a = new ItemType[n]; // Xin cấp phát n ô nhớ lưu trữ n số nguyên
//	for (int i = 0; i < n; i++)
//	{
//		ItemType tmp;
//		printf("Nhap a[%d] = ",i);
//	    scanf_s("%d", &tmp);
//		a[i] = tmp;
//	}
//}
//////===================================================================================
//void taoMang1C_SoNguyen(ItemType*& a, int& n)
//{
//	printf("Nhap So Luong Phan Tu Cua Mang: ");
//	nhapSoNguyenDuong(n);
//	a = new ItemType[n]; // Xin cấp phát n ô nhớ lưu trữ n số nguyên
//	srand((unsigned)time(NULL)); // Tạo số nguyên theo thời gian thực
//	for (int i = 0; i < n; i++)
//	{
//		ItemType tmp;
//		tmp = rand() % 199 - 99; // Tạo một số nguyên thuộc đoạn [-99,99]
//		a[i] = tmp;
//	}
//}
//////==================================================================================
//void docMang1C_SoNguyen(const char* FileName, ItemType*& a, int& n)
//{
//	FILE* fi = fopen(FileName, "rt");
//	if (!fi)
//	{
//		printf("Loi Mo File: %s", FileName);
//		return;
//	}
//	fscanf(fi,"%d\n",&n);
//	a = new ItemType[n]; // Xin cấp phát n ô nhớ lưu trữ n số nguyên
//	for (int i = 0; i < n; i++)
//	{
//		ItemType tmp;
//		fscanf(fi, "%d", &tmp);
//		a[i] = tmp;
//	}
// fclose(fi);
//}
//////===================================================================================
//void xuatMang1C_SoNguyen(ItemType* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%4d", a[i]);
//	}
//}
//////===================================================================================
