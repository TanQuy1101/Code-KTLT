﻿#include "Mang2C_SoNguyen.h"

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
int get_FirstNumber(int n)
{
	n = abs(n);
	while (n >= 10)
	{
		n = n / 10;
	}
	return n;
}
////===================================================================================
int sum_Element_OddFirstNumber(ArrPtr* a, int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (get_FirstNumber(a[i][j]) % 2 != 0)
			{
				sum += a[i][j];
			}
		}
	}
	return sum;
}
////===================================================================================
int check_SoHoanThien(int n)
{
	n = abs(n);
	int n2 = n / 2;
	int sum = 0;
	for (int i = 1; i <= n2; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	return sum == n;
}
////===================================================================================
void listed_SoHoanThien(ArrPtr* a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (check_SoHoanThien(a[i][j]))
			{
				printf("%5d ", a[i][j]);
			}
		}
	}
}
////===================================================================================
int sum_ElementBiggerThan_absNextElement(ArrPtr* a, int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > abs(a[i][j + 1]))
			{
				sum += a[i][j];
			}
		}
	}
	return sum;
}
////===================================================================================
int sum_LineK_Array2D(ArrPtr* a, int m, int n, int k)
{
	int sum = 0;
	if (k < 0 || k >= m)
		return 0;
	for (int j = 0; j < n; j++)
	{
		sum += a[k][j];
	}
	return sum;
}
////===================================================================================
int count_X(ArrPtr* a, int m, int n, int x)
{
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == x)
			{
				count++;
			}
		}
	}
	return count;
}
////===================================================================================
int sum_Element_TrenBien(ArrPtr* a, int m, int n)
{
	int sum = 0;
	for (int j = 0; j < n; j++)
	{
		sum += (a[0][j] + a[m - 1][j]);
	}
	for (int i = 1; i <= m - 2; i++)
	{
		sum += (a[i][0] + a[i][n - 1]);
	}
	return sum;
}
////===================================================================================
int findMax_LineK(ArrPtr* a, int m, int n, int k)
{
	int MaxLine = a[k][0];
	for (int j = 1; j < n; j++)
	{
		if (MaxLine < a[k][j])
		{
			MaxLine = a[k][j];
		}
	}
	return MaxLine;
}
////===================================================================================
int findMin_LineK(ArrPtr* a, int m, int n, int k)
{
	int MinLine = a[k][0];
	for (int j = 1; j < n; j++)
	{
		if (MinLine > a[k][j])
		{
			MinLine = a[k][j];
		}
	}
	return MinLine;
}
////===================================================================================
int findMax_ColumnK(ArrPtr* a, int m, int n, int k)
{
	int MaxColumn = a[0][k];
	for (int i = 1; i < m; i++)
	{
		if (MaxColumn < a[i][k])
		{
			MaxColumn = a[i][k];
		}
	}
	return MaxColumn;
}
////===================================================================================
int findMin_ColumnK(ArrPtr* a, int m, int n, int k)
{
	int MinColumn = a[0][k];
	for (int i = 1; i < m; i++)
	{
		if (MinColumn > a[i][k])
		{
			MinColumn = a[i][k];
		}
	}
	return MinColumn;
}
////===================================================================================
void listed_Element_YenNgua(ArrPtr* a, int m, int n)
{
	int MaxD, MinD, MaxC, MinC, count = 0;
	for (int i = 0; i < m; i++)
	{
		MaxD = findMax_LineK(a, m, n, i);
		MinD = findMin_LineK(a, m, n, i);
		for (int j = 0; j < n; j++)
		{
			MaxC = findMax_ColumnK(a, m, n, j);
			MinC = findMin_ColumnK(a, m, n, j);
			if (a[i][j] == MaxD && a[i][j] == MinC || a[i][j] == MaxC && a[i][j] == MinD)
			{
				printf("%5d", a[i][j]);
				count++;
			}
		}
	}
	if (count == 0)
		printf("Khong Co Phan Tu Yen Ngua ! ");
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
void sortIncrease_LineK(ArrPtr* a, int m, int n, int k)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[k][i] > a[k][j])
			{
				hoanVi(a[k][i], a[k][j]);
			}
		}
	}
}
//===================================================================================
void sortIncrease_EachLine(ArrPtr* a, int m, int n) 
{
	for (int i = 0; i < m; i++)
	{
		sortIncrease_LineK(a, m, n, i);
	}
	printf("Noi Dung Cua Ma Tran Sau Khi Sap Xep Tang Dan Tung Dong La:\n");
	xuatMang2C_SoNguyen(a, m, n);
}
////===================================================================================
int check_ColumnK_Odd(ArrPtr* a, int m, int n, int k)
{
	for (int i = 0; i < m; i++)
	{
		if (a[i][k] % 2 != 0)
		{
			return true;
		}
	}
	return false;
}
////===================================================================================
void listed_Column_Odd(ArrPtr* a, int m, int n)
{
	printf("Dach Sach Cac Cot Chua So Le: ");
	int count = 0;
	for (int j = 0; j < n; j++)
	{
		if (check_ColumnK_Odd(a, m, n, j))
		{
			printf("%5d", j);
			count++;
		}
	}
	if (count == 0)
	{
		printf("Khong Co Cot Nao Chua So Le ! ");
	}
}
//===================================================================================
void sort_IncreaseGradually(ItemType*& a, int m)  // Sắp Xếp Mảng Tăng
{
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (a[i] > a[j])
			{
				hoanVi(a[i], a[j]);
			}
		}
	}

}
////===================================================================================
void sort_DecreaseGradually(ItemType*& a, int m) // Sắp Xếp Mảng Giảm
{
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (a[i] < a[j])
			{
				hoanVi(a[i], a[j]);
			}
		}
	}
}
////===================================================================================
void sort_EvenIncrease_OddDecrease(ArrPtr*& a, int m, int n) // Sắp Xếp Ma Trận
{
	for (int i = 0; i < m; i++)
	{
		if (i % 2 == 0)
		{
			sort_IncreaseGradually(a[i], n);
		}
		else
		{
			sort_DecreaseGradually(a[i], n);
		}
	}
}
//===================================================================================
void sort_ZicZac(ArrPtr* a, int m, int n) // Sắp Xếp Ma Trận
{
	ItemType* b = new ItemType[m * n]; // Tạo mảng b để chứa giá trị chứ ko pải tạo ma trận b
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[k] = a[i][j];
			k++;
			/*printf("b[%d] = %d\t a[%d][%d] = %d\n",k,b[k],i,j, a[i][j]);*/
		}
	}
	sort_IncreaseGradually(b, k); // Sắp Xếp Mảng b Theo Thứ Tự Tăng Dần Hết Mảng
	k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = b[k];
			k++;
		}
	}
	sort_EvenIncrease_OddDecrease(a, m, n); // Ghi Trả Giá Trị Mảng b cho Ma Trận a Mới Sắp Xếp Theo Ý Đề Bài
}
//===================================================================================









