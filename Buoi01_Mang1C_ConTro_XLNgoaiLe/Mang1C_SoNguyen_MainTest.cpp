//#include "Mang1C_SoNguyen.h"
//
//void showMenu()
//{
//	printf("\n***********************************************************");
//	printf("\n*********************      MENU   *************************");
//	printf("\n***********************************************************");
//	printf("\n1. Nhap Mot So Nguyen Duong                               *");
//	printf("\n2. Nhap Mang 1C So Nguyen                                 *");
//	printf("\n3. Tao Mang 1C So Nguyen                                  *");
//	printf("\n4. Load Mang 1C So Nguyen                                 *");
//	printf("\n5. Xem Mang 1C So Nguyen                                  *");
//	printf("\n0. Thoat Chuong Trinh                                     *");
//	printf("\n***********************************************************");
//}
//void process()
//{
//	int luaChon;
//	int* A = NULL;
//	int N;
//	const char* inFileName = "input_Array1D_int.txt";
//	do
//	{
//		showMenu();
//		printf("\nHay Nhap Lua Chon Chuc Nang: ");
//		scanf_s("%d", &luaChon);
//		switch (luaChon)
//		{
//		case 1:
//			printf("Hay Nhap Mot So Nguyen Duong: ");
//			nhapSoNguyenDuong(N);
//			printf("\nSo Nguyen Vua Nhap La: %d", N);
//			break;
//		case 2:
//			nhapMang1C_SoNguyen(A, N);
//			printf("Noi Dung Cua Mang Vua Nhap La:\n");
//			xuatMang1C_SoNguyen(A, N);
//			break;
//		case 3:
//			taoMang1C_SoNguyen(A, N);
//			printf("\nNoi Dung Cua Mang Vua Tao La:\n");
//			xuatMang1C_SoNguyen(A, N);
//			break;
//		case 4:
//			docMang1C_SoNguyen(inFileName, A, N);
//			printf("\nNoi Dung Cua Mang Vua Load Tu File La:\n");
//			xuatMang1C_SoNguyen(A, N);
//			break;
//		case 5:
//			printf("\nNoi Dung Cua Mang La: \n");
//			xuatMang1C_SoNguyen(A, N);
//			break;
//		}
//	} while (luaChon != 0);
//}
//
//void main()
//{
//	process();
//}