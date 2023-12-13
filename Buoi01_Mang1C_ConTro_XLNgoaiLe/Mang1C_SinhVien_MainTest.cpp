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
//	printf("\n0. Thoat Chuong Trinh                                     *");
//	printf("\n***********************************************************");
//}
//void process()
//{
//	int luaChon;
//	ItemType* A = NULL;
//	const char* inFileName = "input_Array1D_SV.txt";
//	int N;
//	do
//	{
//		showMenu();
//		printf("\nHay Nhap Lua Chon Chuc Nang: ");
//		scanf_s("%d", &luaChon);
//		switch (luaChon)
//		{
//		case 1:
//			nhapMang1C_SinhVien(A, N);
//			printf("Danh Sach Sinh Vien Vua Nhap La: \n");
//			xuatMang1C_SinhVien(A, N);
//			break;
//		/*case 2:
//			docMang1C_SinhVien(inFileName,A,N);
//			printf("\nNoi Dung Cua Mang Vua Load Tu File La: \n");
//			xuatMang1C_SinhVien(A,N);
//			break;*/
//		case 3:
//			printf("\nDanh Sach Sinh Vien La: \n");
//			xuatMang1C_SinhVien(A, N);
//			break;
//		}
//	} while (luaChon != 0);
//}
//void main()
//{
//	process();
//}