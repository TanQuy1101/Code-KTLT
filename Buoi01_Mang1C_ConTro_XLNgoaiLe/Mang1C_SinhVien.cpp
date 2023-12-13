//#include "Mang1C_SinhVien.h"
//
//void deleteEndLine(char s[])
//{
//	size_t len = strlen(s);
//	if (s[len - 1] == '\n')
//	{
//		s[len - 1] = '\0';
//	}
//}
//void fixScanf()
//{
//	char c;
//	while ((c = getchar()) != '\n' && c != EOF);
//}
//
//void nhapSoNguyenDuong(int& x)
//{
//	do
//	{
//		scanf_s("%d", &x);
//		if (x <= 0)
//	{
//			printf("\nSo Nguyen Vua Nhap Khong Hop Le ! Hay Nhap Lai: ");
//		}
//	} while (x <= 0);
//}
//////===================================================================================
//void nhapTTSV(ItemType& x)
//{
//printf("Hay Nhap MSSV: ");       fflush(stdin); fgets(x.MSSV, sizeof(x.MSSV), stdin);    deleteEndLine(x.MSSV);
//printf("Hay Nhap Ho SV: ");      fflush(stdin); fgets(x.Ho, sizeof(x.Ho), stdin);        deleteEndLine(x.Ho);
//printf("Hay Nhap Ho Lot SV: ");  fflush(stdin); fgets(x.HoLot, sizeof(x.HoLot), stdin);  deleteEndLine(x.HoLot);
//printf("Hay Nhap Ten SV: ");     fflush(stdin); fgets(x.Ten, sizeof(x.Ten), stdin);      deleteEndLine(x.Ten);
//printf("Hay Nhap DTB Cua SV: "); fflush(stdin); scanf_s("%f", &x.DTB);     fixScanf();
//}
//////===================================================================================
//void docTTSV(FILE*& fi, ItemType& x)
//{
//	fscanf(fi,"%[^#]%*c%[^#]%*c%[^#]%*c%[^#]%*c%f",&x.MSSV, &x.Ho, &x.HoLot, &x.Ten, &x.DTB);
//}
//////===================================================================================
//void xuatTTSV(ItemType x)
//{
//	printf("%-12s%-11s%-21s%-11s%-10.2f",x.MSSV,x.Ho,x.HoLot,x.Ten,x.DTB);
//}
//////===================================================================================
//void nhapMang1C_SinhVien(ItemType*& a, int& n)
//{
//	printf("Nhap So Luong Sinh Vien: ");
//	nhapSoNguyenDuong(n);
//	a = new ItemType[n]; // Xin cấp phát n ô nhớ lưu trữ n số nguyên
//	for (int i = 0; i < n; i++)
//	{
//		ItemType tmp;
//		nhapTTSV(tmp);
//		a[i] = tmp;
//	}
//}
//////===================================================================================
//
////void docMang1C_SinhVien(char* FileName, ItemType*& a, int& n)
////{
////	FILE *fi = fopen(FileName,"rt");
////	if (!fi)
////	{
////		printf("Loi Mo File: %s", FileName);
////		return;
////	}
////	fscanf_s(fi,"%d\n",&n);
////	a = new ItemType[n]; // Xin cấp phát n ô nhớ lưu trữ n số nguyên
////	for (int i = 0; i < n; i++)
////	{
////		ItemType tmp;
////		docTTSV(fi, tmp);
////		a[i] = tmp;
////	}
////	fclose(fi);
////}
//////===================================================================================
//
//void xuatMang1C_SinhVien(ItemType* a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		xuatTTSV(a[i]);
//	}
//}
//////===================================================================================
