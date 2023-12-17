#include "Arr2D.h"

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
	printf("\n0. Thoat Chuong Trinh                                     *");
	printf("\n***********************************************************");
	printf("\n***********************************************************");
}
void process()
{
	int luaChon;
	ArrPtr* A = NULL;
	int M = 0, N = 0, kq = 0;
	const char* inFileName = "input_Arr2D_int.txt";
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
		}
	} while (luaChon != 0);
	freeArrayPointer(A, M, N);
}

int main()
{
	process();
}