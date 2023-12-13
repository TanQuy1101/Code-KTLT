//#include "Mang1C_SinhVien.h"
//
//void showMenu()
//{
//	printf("\n***********************************************************");
//	printf("\n*********************      MENU   *************************");
//	printf("\n***********************************************************");
//	printf("\n1. Nhap Danh Sach Sinh Vien                               *");
//	printf("\n2. Load Danh Sach Sinh Vien                               *");
//	printf("\n3. Xem Danh Sach Sinh Vien                                *");
//	printf("\n4. Tim Kiem Sinh Vien Theo MSSV (Tuyen Tinh)              *");
//	printf("\n5. Tim Kiem Sinh Vien Theo Ten (Tuyen Tinh)               *");
//	printf("\n6. Tim Kiem Sinh Vien Theo Ten (Nhi Phan)                 *");
//	printf("\n7. Sap Xep Tang Dan Theo Ten (Doi Cho Truc Tiep)          *");
//	printf("\n0. Thoat Chuong Trinh                                     *");
//	printf("\n***********************************************************");
//}
//void process()
//{
//	int luaChon;
//	ItemType* A = NULL;
//	int N = 0, kq;
//	const char* inFileName = "input_Array1D_SinhVien.txt";
//	char pMSSV[11], pTen[11];
//	do
//	{
//		showMenu();
//		printf("\nHay Nhap Lua Chon Chuc Nang: ");
//		scanf_s("%d", &luaChon);
//		fixScanf();
//		switch (luaChon)
//		{
//		case 1:
//			nhapMang1C_SinhVien(A, N);
//			printf("Danh Sach Sinh Vien Vua Nhap La: \n");
//			xuatMang1C_SinhVien(A, N);
//			break;
//		case 2:
//			docMang1C_SinhVien(inFileName, A, N);
//			printf("\nDanh Sach Sinh Vien Vua Load Tu File La: \n");
//			xuatMang1C_SinhVien(A, N);
//			break;
//		case 3:
//			printf("\nDanh Sach Sinh Vien La: \n");
//			xuatMang1C_SinhVien(A, N);
//			break;
//		case 4:
//			printf("\nBan Hay Nhap MSSV Muon Tim: ");
//			fflush(stdin);
//			gets_s(pMSSV);
//
//			kq = timKiem_TuyenTinh_TheoMSSV(A, N, pMSSV);
//			if (kq == -1)
//			{
//				printf("\nKhong Tim Thay Sinh Vien Co pMSSV la %s", pMSSV);
//			}
//			else
//			{
//				printf("\nTim Thay Sinh Vien Co MSSV La %s Tai Vi Tri Thu %d", pMSSV, kq);
//			}
//			break;
//		case 5:
//			printf("\nBan Hay Nhap Ten Muon Tim: ");
//			fflush(stdin);
//			gets_s(pTen);
//
//			kq = timKiem_TuyenTinh_TheoTen(A, N, pTen);
//			if (kq == -1)
//			{
//				printf("\nKhong Tim Thay Sinh Vien Co Ten %s", pTen);
//			}
//			else
//			{
//				printf("\nTim Thay Sinh Vien Co Ten La %s Tai Vi Tri Thu %d", pTen, kq);
//			}
//			break;
//		case 6:
//			sapXep_DoiChoTrucTiep_TangDan_TheoTen(A, N);
//			printf("Danh Sach Sinh Vien Sau Khi Sap Xep Tang Dan Theo Ten La: \n");
//			xuatMang1C_SinhVien(A, N);
//
//			printf("\nBan Hay Nhap Ten Muon Tim: ");
//			fflush(stdin);
//			gets_s(pTen);
//
//			kq = timKiem_TuyenTinh_TheoTen(A, N, pTen);
//			if (kq == -1)
//			{
//				printf("\nKhong Tim Thay Sinh Vien Co Ten %s", pTen);
//			}
//			else
//			{
//				printf("\nTim Thay Sinh Vien Co Ten La %s Tai Vi Tri Thu %d", pTen, kq);
//			}
//			break;
//		case 7:
//			sapXep_DoiChoTrucTiep_TangDan_TheoTen(A, N);
//			printf("Danh Sach Sinh Vien Sau Khi Sap Xep Tang Dan Theo Ten La: \n");
//			xuatMang1C_SinhVien(A, N);
//			break;
//		}
//	} while (luaChon != 0);
//}
//int main()
//{
//	process();
//}