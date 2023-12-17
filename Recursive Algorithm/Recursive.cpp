#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <math.h>

void nhapSoNguyenDuong(int N)
{
	do
	{
		scanf_s("%d", &N);
		if (N <= 0)
		{
			printf("\nSo Nguyen Vua Nhap Khong Hop Le ! Hay Nhap Lai: ");
		}
	} while (N <= 0);
}
////===================================================================================
int Factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * Factorial(n - 1);
}
////===================================================================================
int Sum(int n)
{
	if (n == 1)
		return 1;
	else
		return n + Sum(n - 1);
}
////===================================================================================
float Sum_Fraction(unsigned int n) // Kiểu Dữ Liệu Của Hàm
{
	if (n == 0)
		return 0;
	else
		return (float)1 / n + Sum_Fraction(n - 1); // Ép Kiểu Cho Output
}
////===================================================================================
int Fibonanci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return Fibonanci(n - 1) + Fibonanci(n - 2);
}
////===================================================================================
int Combination_nCk(int n, int k)
{
	if (k == 0 || n == k)
		return 1;
	else
		return Combination_nCk(n - 1, k) + Combination_nCk(n - 1, k - 1);
}
////===================================================================================
int UCLN(int a, int b) 
{
	if (b == 0 || b == a)
		return a;
	else if (a > b)
		return UCLN(b, a - b);
	else
		return UCLN(a, b - a);
}
////===================================================================================
int BCNN(int a, int b)
{
	if (a == b)
		return a;
	else
		return(a * b / (UCLN(a, b)));
}
////===================================================================================
int Exponential(int a, int n) // a^n = a*a^(n-1)
{
	if (n == 1)
		return a;
	else
		return a * Exponential(a, n - 1);
}
////===================================================================================
int alter_Decimal_into_Binary(int a)
{
	long b;
	if (a == 0)
		return 0;
	else
		b = a % 2;
	return (alter_Decimal_into_Binary(a / 2) * 10 + b);
}
////===================================================================================
void Menu()
{
	printf("\n***********************************************************");
	printf("\n*********************      MENU   *************************");
	printf("\n***********************************************************");
	printf("\n1. Nhap Mot So Nguyen Duong                               *");
	printf("\n2. Tinh Giai Thua                                         *");
	printf("\n3. Tinh Tong                                              *");
	printf("\n4. Tinh Tong Phan So                                      *");
	printf("\n5. Tinh So Fibonanci                                      *");
	printf("\n6. Tinh To Hop Chap k cua n                               *");
	printf("\n7. Tim UCLN Cua a & b                                     *");
	printf("\n8. Tim BCNN Cua a & b                                     *");
	printf("\n9. Tinh Luy Thua Cua Mot So                               *");
	printf("\n10. Chuyen Doi So Thap Phan Thanh So Nhi Phan             *");
	printf("\n***********************************************************");
	printf("\n***********************************************************");
}
////===================================================================================
void process()
{
	int luaChon;
	int N = 0;
	int K = 0;
	int kq = 0;
	float kq2 = 0;
	Menu();
	do
	{
		printf("\nHay Nhap Lua Chon: ");
		scanf("%d", &luaChon);
		switch (luaChon)
		{
		case 1:
			printf("Nhap Mot So Nguyen Duong: ");
			nhapSoNguyenDuong(N);
			printf("So Nguyen Duong Vua Nhap La: %d", N);
			break;
		case 2:
			printf("Nhap Mot So Nguyen Duong: ");
			scanf("%d", &N);

			kq = Factorial(N);
			printf("%d! = %d", N, kq);
			break;
		case 3:
			printf("Nhap Mot So Nguyen Duong: ");
			scanf("%d", &N);

			kq = Sum(N);
			printf("Tong Cua %d = %d", N, kq);
			break;
		case 4:
			printf("Nhap Mot So Nguyen Duong: ");
			scanf("%d", &N);

			kq2 = Sum_Fraction(N); // Kiểu Dữ Liệu Của Biến kq
			printf("Tong Cua 1/%d = %0.2f", N, kq2);
			break;
		case 5:
			printf("Nhap Mot So Nguyen Duong: ");
			scanf("%d", &N);

			kq = Fibonanci(N);
			if (N == 1 || N == 2)
			{
				printf("Gia Tri Cua So Fibonanci La 1");
			}
			else
			{
				printf("Gia Tri So Fibonanci Vua Nhap La: %d", kq);
			}
			break;
		case 6:
			printf("Nhap Gia Tri N: ");
			scanf("%d", &N);
			printf("Nhap Gia Tri K: ");
			scanf("%d", &K);

			kq = Combination_nCk(N, K);
			printf("Gia Tri %dC%d = %d", K, N, kq);
			break;
		case 7:
			printf("Nhap Gia Tri a: ");
			scanf("%d", &N);
			printf("Nhap Gia Tri b: ");
			scanf("%d", &K);

			kq = UCLN(N, K);
			printf("UCLN Cua Hai So a & b La: %d", kq);
			break;
		case 8:
			printf("Nhap Gia Tri a: ");
			scanf("%d", &N);
			printf("Nhap Gia Tri b: ");
			scanf("%d", &K);

			kq = BCNN(N, K);
			printf("BCNN Cua Hai So a & b La: %d", kq);
		case 9:
			printf("Nhap Gia Tri a: ");
			scanf("%d", &N);
			printf("Nhap Gia Tri n: ");
			scanf("%d", &K);

			kq = Exponential(N, K);
			printf("Gia Tri %d^%d = %d", N, K, kq);
			break;
		case 10:
			printf("Nhap So Thap Phan Muon Chuyen Doi: ");
			scanf("%d",&N);

			kq = alter_Decimal_into_Binary(N);
			printf("So Nhi Phan Tuong Ung Voi So Thap Phan %d La: %d",N,kq);
			break;
		}
	} while (luaChon != 0);
}
////===================================================================================
void main()
{
	process();
}