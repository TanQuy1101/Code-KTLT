#include "Mang1C_SoNguyen.h"

void showMenu()
{
	printf("\n***********************************************************");
	printf("\n*********************      MENU   *************************");
	printf("\n***********************************************************");
	printf("\n1. Nhap Mot So Nguyen Duong                               *");
	printf("\n2. Nhap Mang 1C So Nguyen                                 *");
	printf("\n3. Tao Mang 1C So Nguyen                                  *");
	printf("\n4. Load Mang 1C So Nguyen                                 *");
	printf("\n5. Xem Mang 1C So Nguyen                                  *");
	printf("\n6. Tim Kiem Phan Tu (Tuyen Tinh)                          *");
	printf("\n7. Tim Kiem Phan Tu (Nhi Phan)                            *");
	printf("\n8. Sap Xep Tang Dan (Doi Cho Truc Tiep)                   *");
	printf("\n9. Xoa Gia Tri Trong Mang 1 Chieu Tai Vi Tri              *");
	printf("\n10. Tim Kiem Gia Tri Lon Nhat Trong Mang                  *");
	printf("\n11. Chen Phan Tu Vao Cuoi Mang                            *");
	printf("\n12. Chen Phan Tu Vao Dau Mang                             *");
	printf("\n13. Chen Phan Tu Vao Vi Tri Thu 'k'                       *");
	printf("\n14. Kiem Tra Mang Doi Xung                                *");
	printf("\n15. Kiem Tra SNT                                          *");
	printf("\n16. Dem So Nguyen To Trong Mang                           *");
	printf("\n17. Xuat Cac Phan Tu Tung Chu So La So Le                 *");
	printf("\n18. Kiem Tra Chan Le Xen Ke                               *");
	printf("\n19. Sap Xep So Chan Truoc (Tang Dan) So Le Sau (Giam Dan) *");
	printf("\n20. Tim Kiem Gia Tri Lon Thu Hai Trong Mang               *");
	printf("\n21. Tim Kiem Gia Tri Lon Thu Hai Trong Mang (C2)          *");
	printf("\n22. Xuat Danh Sach Cac Phan Tu O Vi Tri Chan Trong Mang   *");
	printf("\n23. Tinh Trung Binh Cong Cac Phan Tu Trong Mang           *");
	printf("\n24. Tim So Chan Lon Nhat Trong Mang                       *");
	printf("\n25. In Ra Cac Phan Tu Chan Lon Nhat Trong Mang            *");
	printf("\n0. Thoat Chuong Trinh                                     *");
	printf("\n***********************************************************");
	printf("\n***********************************************************");
}
void process()
{
	int luaChon;
	ItemType* A = NULL;
	int N = 0, kq;
	int site = 0;
	ItemType X;
	const char* inFileName = "input_Array1D_int.txt";
	showMenu();
	do
	{
		printf("\nHay Nhap Lua Chon Chuc Nang: ");
		scanf_s("%d", &luaChon);
		switch (luaChon)
		{
		case 1:
			printf("Hay Nhap Mot So Nguyen Duong: ");
			nhapSoNguyenDuong(N);
			printf("So Nguyen Vua Nhap La: %d", N);
			break;
		case 2:
			nhapMang1C_SoNguyen(A, N);
			printf("Noi Dung Cua Mang Vua Nhap La:\n");
			xuatMang1C_SoNguyen(A, N);
			break;
		case 3:
			taoMang1C_SoNguyen(A, N);
			printf("Noi Dung Cua Mang Vua Tao La:\n");
			xuatMang1C_SoNguyen(A, N);
			break;
		case 4:
			docMang1C_SoNguyen(inFileName, A, N);
			printf("Noi Dung Cua Mang Vua Load Tu File La:\n");
			xuatMang1C_SoNguyen(A, N);
			break;
		case 5:
			printf("Noi Dung Cua Mang La: \n");
			xuatMang1C_SoNguyen(A, N);
			break;
		case 6:
			printf("Hay Nhap Gia Tri Muon Tim: ");
			scanf_s("%d", &X);

			kq = timKiem_TuyenTinh(A, N, X);
			if (kq == -1)
			{
				printf("Khong Tim Thay Gia Tri %d.", X);
			}
			else
			{
				printf("Tim Thay Gia Tri %d Tai Vi Tri Thu %d.", X, kq);
			}
			break;
		case 7:
			printf("\nHay Nhap Gia Tri Muon Tim: ");
			scanf_s("%d", &X);

			kq = timKiem_NhiPhan(A, N, X);
			if (kq == -1)
			{
				printf("Khong Tim Thay Gia Tri %d ", X);
			}
			else
			{
				printf("Tim Thay Gia Tri %d Tai Vi Tri Thu %d. ", X, kq);
			}
			break;
		case 8:
			sapXep_DoiChoTrucTiep_TangDan(A, N);
			printf("\nNoi Dung Cua Mang Sau Khi Sap Xep Tang Dan (Interchange Sort) La: \n");
			xuatMang1C_SoNguyen(A, N);
			break;
		case 9:
			printf("\nHay Nhap Vi Tri Muon Xoa: ");
			scanf_s("%d", &site);
			delete_Array1D_Site(A, N, site);
			printf("Mang1C Sau Khi Xoa La: ");
			xuatMang1C_SoNguyen(A, N);
			break;
		case 10:
			kq = find_ValueMax(A, N);
			printf("Phan Tu Max Trong Mang La %d", kq);
			break;
		case 11:
			printf("Hay Nhap Gia Tri Muon Chen: ");
			scanf_s("%d", &X);
			insert_Last_Array1D(A, N, X);
			printf("\nNoi Dung Cua Mang Sau Khi Chen Vao Cuoi La: \n");
			xuatMang1C_SoNguyen(A, N);
			break;
		case 12:
			printf("Hay Nhap Gia Tri Muon Chen: ");
			scanf_s("%d", &X);
			insert_First_Array1D(A, N, X);
			printf("\nNoi Dung Cua Mang Sau Khi Chen Vao Dau La: \n");
			xuatMang1C_SoNguyen(A, N);
			break;
		case 13:
			printf("Hay Nhap Gia Tri Muon Chen: ");
			scanf_s("%d", &X);
			int K;
			printf("Hay Nhap Vi Tri Muon Chen: ");
			scanf_s("%d", &K);
			insert_SiteK_Array1D(A, N, X, K);
			printf("\nNoi Dung Cua Mang Sau Khi Chen Phan Tu 'k' La: \n");
			xuatMang1C_SoNguyen(A, N);
			break;
		case 14:
			kq = check_Array1D_Balance(A, N);
			if (kq == -1)
			{
				printf("Mang Khong Doi Xung !");
			}
			else
			{
				printf("Mang Doi Xung !!");
			}
			break;
		case 15:
			kq = check_SoNguyenTo(N);
			if (kq == -1)
			{
				printf("So %d Khong Phai SNT", N);
			}
			else
			{
				printf("So %d La SNT", N);
			}
			break;
		case 16:
			kq = count_SoNguyenTo(A, N);
			if (kq == false)
			{
				printf("Khong Co SNT Trong Mang ");
			}
			else
			{
				printf("Co %d SNT Trong Mang ", kq);
			}
			break;
		case 17:
			printf("Cac Phan Tu Ma Tung Chu So La So Le La: ");
			print_Odd(A, N);
			break;
		case 18:
			kq = check_EvenOdd_Interleaved(A, N);
			if (kq == false)
			{
				printf("Mang Khong Phai Day So Chan Le Xen Ke");
			}
			else
			{
				printf("Mang La Day So Chan Le Xen Ke");
			}
			break;
		case 19:
			sort_EvenFirst_OddLast(A, N);
			printf("Sap Xep So Chan Truoc (Tang Dan) So Le Sau (Giam Dan): ");
			xuatMang1C_SoNguyen(A, N);
			break;
		case 20:
			kq = find_ValueMax2(A, N);
			printf("Phan Tu Lon Thu Hai Trong Mang La %d", kq);
			break;
		case 21:
			kq = find_ValueMax2_Method2(A, N);
			printf("Phan Tu Lon Thu Hai Trong Mang La %d", kq);
			break;
		case 22:
			print_Element_EvenSite(A, N);
			break;
		case 23:
			average_Element_Array1D(A, N);
			break;
		case 24:
			kq = find_EvenMax(A, N);
			if (kq == -1)
			{
				printf("Mang Khong Co So Chan ! ");
			}
			else
			{
				printf("So Chan Lon Nhat Trong Mang La: %d",kq);
			}
			break;
		case 25:
			find_All_EvenMax(A, N);
			break;
		}
	} while (luaChon != 0);
}
int main()
{
	process();
}