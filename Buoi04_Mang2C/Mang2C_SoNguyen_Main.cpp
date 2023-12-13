#include "Mang2C_SoNguyen.h"

void showMenu()
{
	printf("\n***********************************************************");
	printf("\n*********************      MENU   *************************");
	printf("\n***********************************************************");
	printf("\n1. Nhap Mot So Nguyen Duong                               *");
	printf("\n2. Nhap Mang2C So Nguyen                                  *");
	printf("\n3. Tao Mang2C So Nguyen                                   *");
	printf("\n4. Load Mang2C So Nguyen                                  *");
	printf("\n5. Xem Mang2C So Nguyen                                   *");
	printf("\n6. Tong Phan Tu Co Chu So Dau Le                          *");
	printf("\n7. Liet Ke So Hoan Thien                                  *");
	printf("\n8. Tong Cac Phan Tu Lon Hon ABS Cua Phan Tu Lien Sau      *");
	printf("\n9. Tong Phan Tu Tren Dong K Cua Ma Tran                   *");
	printf("\n10. Dem Tan Suat Xuat Hien Cua X                          *");
	printf("\n11. Tong Cac Phan Tu Nam Tren Bien Cua Ma Tran            *");
	printf("\n12. Liet Ke Phan Tu Yen Ngua                              *");
	printf("\n13. Sap Xep Tang Dan Tung Dong                            *");
	printf("\n14. Liet Ke Cac Cot Chua So Le                            *");
	printf("\n15. Sap Xep Zic Zac (Tang Tu Trai -> Phai, Tren -> Duoi   *");
	printf("\n16. Sap Xep Ma Tran Dong Chan Tang, Dong Le Giam          *");
	printf("\n0. Thoat Chuong Trinh                                     *");
	printf("\n***********************************************************");
	printf("\n***********************************************************");
}
void process()
{
	int luaChon;  ///
	ArrPtr* A = NULL;
	int M = 0, N = 0, kq = 0;
	int K = 0;
	int X;
	const char* inFileName = "input_Array2D_int.txt";
	const char* inFileName2 = "input_Array2D_PhanTuYenNgua.txt";
	const char* inFileName3 = "input_Array2D_ZicZac.txt";
	showMenu();
	do
	{
		printf("\nHay Nhap Lua Chon Chuc Nang: ");
		scanf("%d", &luaChon);
		fixScanf();
		switch (luaChon)
		{
		case 1:
			printf("Hay Nhap Mot So Nguyen Duong: ");
			nhapSoNguyenDuong(N);
			printf("So Nguyen Vua Nhap La: %d", N);
			break;
		case 2:
			nhapMang2C_SoNguyen(A, M, N);
			printf("Noi Dung Cua Ma Tran Vua Nhap La:\n");
			xuatMang2C_SoNguyen(A, M, N);
			break;
		case 3:
			taoMang2C_SoNguyen(A, M, N);
			printf("Noi Dung Cua Ma Tran Vua Tao La:\n");
			xuatMang2C_SoNguyen(A, M, N);
			break;
		case 4:
			docMang2C_SoNguyen(inFileName, A, M, N);
			printf("Noi Dung Cua Ma Tran Vua Load Tu File La:\n");
			xuatMang2C_SoNguyen(A, M, N);
			break;
		case 5:
			printf("Noi Dung Cua Ma Tran La: \n");
			xuatMang2C_SoNguyen(A, M, N);
			break;
		case 6:
			kq = sum_Element_OddFirstNumber(A, M, N);
			printf("Tong Cac Phan Tu Co Chu So Dau Le La: %d ", kq);
			break;
		case 7:
			printf("Cac So Hoan Thien Trong Ma Tran La: ");
			listed_SoHoanThien(A, M, N);
			break;
		case 8:
			kq = sum_ElementBiggerThan_absNextElement(A, M, N);
			printf("Tong Cac Phan Tu Lon Hon Tri Tuyet Doi Phan Tu Lien Sau La: %d", kq);
			break;
		case 9:
			printf("Nhap Gia Tri Cho Dong K Can Tinh Tong: ");
			scanf("%d", &K);
			fixScanf();
			kq = sum_LineK_Array2D(A, M, N, K);
			printf("Tong Dong %d La: %d", K, kq);
			break;
		case 10:
			printf("Nhap Gia Tri Cua X Can Dem: ");
			scanf("%d", &X);
			kq = count_X(A, M, N, X);
			printf("So Lan X Xuat Hien Trong Ma Tran La: %d ", kq);
			break;
		case 11:
			kq = sum_Element_TrenBien(A, M, N);
			printf("Tong Cac Phan Tu Nam Tren Bien Cua Ma Tran La: %d ", kq);
			break;
		case 12:
			docMang2C_SoNguyen(inFileName2, A, M, N);
			printf("Noi Dung Cua Ma Tran Vua Load Tu File La:\n");
			xuatMang2C_SoNguyen(A, M, N);

			printf("Danh Sach Cac Phan Tu Yen Ngua La: ");
			listed_Element_YenNgua(A, M, N);
			break;
		case 13:
			sortIncrease_EachLine(A, M, N);
			break;
		case 14:
			listed_Column_Odd(A, M, N);
			break;
		case 15:
			docMang2C_SoNguyen(inFileName3, A, M, N);
			printf("Noi Dung Cua Ma Tran Vua Load Tu File La:\n");
			xuatMang2C_SoNguyen(A, M, N);

			sort_ZicZac(A, M, N);
			printf("Noi Dung Cua Ma Tran Sau Khi Sap Xep ZicZac La:\n");
			xuatMang2C_SoNguyen(A, M, N);
			break;
		case 16:
			docMang2C_SoNguyen(inFileName3, A, M, N);
			printf("Noi Dung Cua Ma Tran Vua Load Tu File La:\n");
			xuatMang2C_SoNguyen(A, M, N);

			sort_EvenIncrease_OddDecrease(A, M, N);
			printf("Noi Dung Cua Ma Tran Sau Khi Sap Xep Dong Chan Tang, Dong Le Giam La:\n");
			xuatMang2C_SoNguyen(A, M, N);
			break;
		}
	} while (luaChon != 0);
	freeArrayPointer(A, M, N);
}

int main()
{
	process();
}