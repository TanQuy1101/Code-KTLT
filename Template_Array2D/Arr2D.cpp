#include "Arr2D.h"

void nhapSoNguyenDuong(int& x)
{
	do
	{
		scanf_s("%d", &x);
		if (x <= 0)
		{
			printf("\nSo Nguyen Vua Nhap Khong Hop Le ! Hay Nhap Lai: ");
		}
	} while (x <= 0);
}
////===================================================================================
void fixScanf()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
////===================================================================================
void deleteEndLine(char s[])
{
	size_t len = strlen(s);
	if (s[len - 1] == '\n')
	{
		s[len - 1] = '\0';
	}
}
////===================================================================================
void initArrayPointer(ArrPtr*& a, int m, int n)
{
	a = new ArrPtr[m];
	for (int i = 0; i < m; i++)
	{
		a[i] = new int[n];
	}
}
////===================================================================================
void freeArrayPointer(ArrPtr*& a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		delete a[i];
	}
	delete a;
}
////===================================================================================
void nhapMang2C_SoNguyen(ArrPtr*& a, int& m, int& n)
{
	printf("Nhap So Dong Cua Ma Tran: ");
	nhapSoNguyenDuong(m);
	printf("Nhap So Cot Cua Ma Tran: ");
	nhapSoNguyenDuong(n);
	initArrayPointer(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int tmp;
			printf("Nhap a[%d][%d] = ", i, j);
			scanf("%d", &tmp);
			a[i][j] = tmp;
		}
	}
}
////===================================================================================
void taoMang2C_SoNguyen(ArrPtr*& a, int& m, int& n)
{
	printf("Nhap So Dong Cua Ma Tran: ");
	nhapSoNguyenDuong(m);
	printf("Nhap So Cot Cua Ma Tran: ");
	nhapSoNguyenDuong(n);
	initArrayPointer(a, m, n);

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int tmp;
			tmp = rand() % 199 - 99; //  [-99,99]  ~~~  rand() % (b - a + 1) + a
			a[i][j] = tmp;
		}
	}
}
////===================================================================================
void docMang2C_SoNguyen(const char* FileName, ArrPtr*& a, int& m, int& n)
{
	FILE* fi = fopen(FileName, "rt");
	if (!fi)
	{
		printf("Loi Mo File: %s", FileName);
		return;
	}
	fscanf(fi, "%d%d\n", &m, &n);
	initArrayPointer(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int tmp;
			fscanf(fi, "%d", &tmp);
			a[i][j] = tmp;
		}
	}
	fclose(fi);
}
////===================================================================================
void xuatMang2C_SoNguyen(ArrPtr* a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n\n");
	}
}
////===================================================================================
void hoanVi(ItemType& x, ItemType& y)
{
	ItemType tmp;
	tmp = x;
	x = y;
	y = tmp;
}
//===================================================================================










