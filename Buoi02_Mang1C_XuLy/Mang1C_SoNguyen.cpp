#include "Mang1C_SoNguyen.h"

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
void nhapMang1C_SoNguyen(ItemType*& a, int& n)
{
	printf("Nhap So Luong Phan Tu Cua Mang: ");
	nhapSoNguyenDuong(n);
	a = new ItemType[n]; // Xin cấp phát n ô nhớ lưu trữ n số nguyên
	for (int i = 0; i < n; i++)
	{
		ItemType tmp;
		printf("Nhap a[%d] = ", i);
		scanf_s("%d", &tmp);
		a[i] = tmp;
	}
}
////===================================================================================
void taoMang1C_SoNguyen(ItemType*& a, int& n)
{
	printf("Nhap So Luong Phan Tu Cua Mang: ");
	nhapSoNguyenDuong(n);
	a = new ItemType[n]; // Xin cấp phát n ô nhớ lưu trữ n số nguyên
	srand((unsigned)time(NULL)); // Tạo số nguyên theo thời gian thực
	for (int i = 0; i < n; i++)
	{
		ItemType tmp;
		tmp = rand() % 199 - 99; // Tạo một số nguyên thuộc đoạn [-99,99]
		a[i] = tmp;
	}
}
////===================================================================================
void docMang1C_SoNguyen(const char* FileName, ItemType*& a, int& n)
{
	FILE* fi = fopen(FileName, "rt");
	if (!fi)
	{
		printf("Loi Mo File: %s", FileName);
		return;
	}
	fscanf(fi, "%d\n", &n);
	a = new ItemType[n]; // Xin cấp phát n ô nhớ lưu trữ n số nguyên
	for (int i = 0; i < n; i++)
	{
		ItemType tmp;
		fscanf(fi, "%d", &tmp);
		a[i] = tmp;
	}
	fclose(fi);
}
////===================================================================================
void xuatMang1C_SoNguyen(ItemType* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}
////===================================================================================
int timKiem_TuyenTinh(ItemType* a, int n, ItemType x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			return i; // Tìm thấy giá trị của x tại vị trí thứ i
		}
	}
	return -1; // Ko tìm thấy giá trị của x tại vị trí thứ i
}
////===================================================================================
int timKiem_NhiPhan(ItemType* a, int n, ItemType x)
{
	int left = 0, right = n - 1, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] == x)
		{
			return mid; // Tìm thấy giá trị của x tại vị trí Mid
		}
		else if (a[mid] > x) // x nằm bên trái của a[Mid]
		{
			right = mid - 1; // Giảm biên trái của a[Mid] xún để nó lại gần x  (right của x)
		}
		else  // x nằm bên phải của a[Mid]
		{
			left = mid + 1; // Giảm biên phải của a[Mid] xún để nó lại gần x  (left của x)
		}
	}
	return -1; // Ko tìm thấy giá trị của x
}
////===================================================================================
void hoanVi(ItemType& x, ItemType& y)
{
	ItemType tmp;
	tmp = x;
	x = y;
	y = tmp;
}
////===================================================================================
void sapXep_DoiChoTrucTiep_TangDan(ItemType*& a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				hoanVi(a[i], a[j]);	// Hoán Vị a[i] và a[j]
			}
		}
	}
}
////===================================================================================
void sapXep_DoiChoTrucTiep_GiamDan(ItemType*& a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				hoanVi(a[i], a[j]);	// Hoán Vị a[i] và a[j]
			}
		}
	}
}
////===================================================================================
int delete_Array1D_Site(ItemType*& a, int& n, int site)
{
	if (site < 0 || site > n)
		return 0;
	for (int i = site; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
////===================================================================================
int find_ValueMax(ItemType* a, int n)
{
	int Max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > Max)
		{
			Max = a[i];
		}
	}
	return Max;
}
////===================================================================================
void insert_Last_Array1D(ItemType* a, int& n, int x)
{
	int size = sizeof(a) / sizeof(a[0]); // KTra Độ Dài Của Mảng
	if (n == size) // Giả Sử Mảng Có 10 Vị Trí Mà n = 11 ==> Ko Thể Thêm
	{
		printf("Khong The Them Vao Mang !");
	}
	a[n] = x; // a = 1,2,3,4,5   -->   n = 5     a[Cuối Mảng] = Giá Trị Muốn Chèn 
	n++; // Sau Khi Chèn Thì Độ Dài Mảng Bị Tăng Lên
}
////===================================================================================
void insert_First_Array1D(ItemType* a, int& n, int x)
{
	int size = sizeof(a) / sizeof(a[0]);
	if (n == size)
	{
		printf("Khong The Them Vao Mang !");
	}
	n++; // B1. Tăng Độ Dài Mảng Lên
	// Duyệt Từ Cuối Mảng Ngược Lên
	for (int i = n - 1; i > 0; i--)   // a = 1,2,3,4,5  -> n = 5   Sau Khi Tăng Thì n = 6
	{
		a[i] = a[i - 1];  //  a = 1  2  3  4  5  n++
	}                     //  a = x  1  2  3  4  5
	a[0] = x;
}
////===================================================================================
void insert_SiteK_Array1D(ItemType* a, int& n, int x, int k)
{
	int size = sizeof(a) / sizeof(a[0]);
	if (n == size)
	{
		printf("Khong The Them Vao Mang !");
	}
	n++;
	for (int i = n - 1; i > k; i--)
	{
		a[i] = a[i - 1];
	}
	a[k] = x;
}
////===================================================================================
int check_Array1D_Balance(ItemType* a, int n)
{
	for (int i = 0; i <= n / 2; i++)
	{
		if (a[i] != a[n - 1 - i])
		{
			return -1;
		}
	}
	return 0;
}
////===================================================================================
int check_SoNguyenTo(int n)
{
	if (n < 2)
		return false;
	int cn = sqrt(n);
	for (int i = 2; i <= cn; i++)
	{
		if (n % i == 0)
			return false;
		return true;
	}
}
////===================================================================================
int count_SoNguyenTo(ItemType* a, int& n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (check_SoNguyenTo(a[i]))
			count++;
	}
	return count;
}
////===================================================================================
int check_Odd(int n)
{
	n = abs(n);
	while (n > 0)
	{
		if (n % 2 == 0)
		{
			return false;
		}
		n = n / 10;
	}
	return true;
}
////===================================================================================
void print_Odd(ItemType* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (check_Odd(a[i]))
		{
			printf("%d ", a[i]);
		}
	}
}
////===================================================================================
int check_EvenOdd_Interleaved(ItemType* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] % 2 == a[i + 1] % 2)
			return false;
	}
	return true;
}
////===================================================================================
void sort_EvenFirst_OddLast(ItemType*& a, int n)
{
	if (a == NULL)
	{
		printf("Mang Rong Khong The Sap Xep!\n ");
		return;
	}
	ItemType* b = new ItemType[n]; // Khởi tạo mảng b chứa số chẵn
	ItemType* c = new ItemType[n]; // Khởi tạo mảng c chứa số lẻ
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[count1] = a[i];  // Số chẵn
			count1++;
		}
		else
		{
			c[count2] = a[i];  // Số lẻ
			count2++;
		}
	}
	sapXep_DoiChoTrucTiep_TangDan(b, count1);
	sapXep_DoiChoTrucTiep_GiamDan(c, count2);
	for (int i = 0; i < count1; i++) // count1 là số phần tử của mảng b
	{
		a[i] = b[i];   // Mảng a sẽ chứa các phần tử của Mảng b tới vị trí thứ [ count1 - 1 ] 
	}
	for (int i = 0; i < count2; i++) // count2 là số phần tử của mảng c
	{
		a[count1 + i] = c[i]; // Mảng a sẽ chứa từ phần tử thứ count1
	}
}
////===================================================================================

// Tìm Phần Tử Lớn Thứ Hai Trong Mảng  C1: Sắp Xếp Mảng Giảm Dần ==> a[1] Là Phần Tử Lớn Thứ Hai
void sort_Array1D_Decrease(ItemType* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				hoanVi(a[i], a[j]);
			}
		}
	}
}
////===================================================================================
int find_ValueMax2(ItemType* a, int n)
{
	sort_Array1D_Decrease(a, n);
	return a[1];
}
// C2: Gắn Giá Trị Cho Max1 và Max2
int find_ValueMax2_Method2(ItemType* a, int n)
{
	int Max1, Max2;
	if (a[0] > a[1])
	{
		Max1 = a[0];
		Max2 = a[1];
	}
	else
	{
		Max1 = a[1];
		Max2 = a[0];
	}
	for (int i = 2; i < n; i++)
	{
		if (a[i] >= Max1)
		{
			Max2 = Max1;
			Max1 = a[i];
		}
		else
		{
			if (a[i] > Max2)
			{
				Max2 = a[i];
			}
		}
	}
	return Max2;
}
////===================================================================================
void print_Element_EvenSite(ItemType* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", a[i]);
		}
	}
}
////===================================================================================
void average_Element_Array1D(ItemType* a, int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total = total + a[i]; // Tìm Tổng Các Phần Tử Trước
	}
	printf("Trung Binh Cong Cac Phan Tu Trong Mang1C La: %.2f ", (float)total / n); // Trung Bình Cộng
}
////===================================================================================
int check_Array1D_Even(ItemType*& a, int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			return 0;
	}
	return -1;
}
////===================================================================================
int find_EvenMax(ItemType* a, int n)
{
	if (check_Array1D_Even(a, n) == -1)
		return -1;
	int Max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] > Max)
		{
			Max = a[i];
		}
	}
	return Max;
}
////===================================================================================
void find_All_EvenMax(ItemType* a, int n) // Mảng Có Nhiều Hơn Một Phần Tử Chẵn Lớn Nhất
{
	if (check_Array1D_Even(a, n) == -1)
	{
		printf("Khong Co Phan Tu Chan Trong Mang ! ");
		return;
	}
	int Max = a[0];
	for (int i = 1; i < n; i++)
	{                                                          
		if (a[i] % 2 == 0 && a[i] > Max)
		{
			Max = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == Max)
		{
			printf("%d ", i);
		}
	}
}
////===================================================================================
void check_SoChinhPhuong(int n)
{
	int sqr = sqrt(n);
	if (sqr*sqr == n)
	{
		printf("%d la so chinh phuong!\n", n);
	}
	else
	{
		printf("%d khong phai so chinh phuong!\n", n);
	}
}	
////===================================================================================
int check_SoHoanThien(int n)
{
	n = abs(n);
	int n2 = n / 2;
	int sum = 0;
	for (int i = 1; i < n2; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	return sum == n;
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
