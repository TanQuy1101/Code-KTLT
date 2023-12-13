#include <stdio.h>
#include <conio.h>
#include <string.h>

// Bài 1. Chữ Đầu Thành Chữ Hoa, Còn Lại Thành Chữ Thường
void Alter_Character(char* s)
{
	//TH1: Kí Tự Đầu Tiên Của Chuỗi
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	//TH2: Kí Tự Sau Khoảng Trắng
	int n = strlen(s);
	for (int i = 1; i < n; i++)
	{
		if (s[i] == ' ')
		{
			s[i + 1] = s[i + 1] - 32;
		}
		// TH Sau Khoảng Trắng Đã Là Chữ Hoa ==> Ko Cần Thay Đổi (Sai Chỗ Này)
		if (s[i - 1] == ' ' && s[i] >= 'A' && s[i] <= 'Z')
		{
			continue;
		}
		//TH3: Các Vị Trí Ko Pải Đầu Và Sau Khoảng Trắng
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
	}
}

// Bài 2. Xóa Khoảng Trắng Trong Chuỗi
int delete_Site(char* s, int site)
{
	int n = strlen(s);
	if (site < 0 || site > n)  
		return 0;
	for (int i = site; i < n; i++)
	{
		s[i] = s[i + 1];  // Dòng Này Ko Hiểu
	}
	s[n - 1] == '\0'; // Dòng Này Ko Hiểu
}
//==============================================================================================
void delete_Space(char* s)
{
	int n = strlen(s);
	//TH1: Xóa Space BTH
	for (int i = 0; i < n; i++)
	{
		if (s[i] == ' ')
		{
			delete_Site(s, i);
			i--; // Trong TH Có Hai Space Dư Liên Tiếp, Sau Khi Xóa 1 Pải Giảm i Để Xóa Tiếp Cái Còn Lại
		}
	}
	//TH2: Xóa Space Ở Đầu
	if (s[0] == ' ')
	{
		delete_Site(s, 0);
	}
	//TH3: Xóa Space Ở Cuối
	if (s[n - 1] == ' ')
	{
		delete_Site(s, n-1);
	}
}

// Bài 3. Đếm Số Lần Xuất Hiện Của Kí Tự Trong Chuỗi
int count_SoTu(char* s, char c)
{
	if (s == NULL)
		return 0;
	int count = 0;
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		// Tìm Thấy Kí Tự Đó Ở Vị Trí Thứ 'i' Trong Chuỗi
		if (s[i] == c)
		{
			count++;
		}
	}
	if (count == 0)
	{
		// %s : Chuỗi      %c : Kí Tự
		printf("\nKhong Tim Thay Ki Tu '%c' Trong Chuoi %s",c,s);
	}
	else
	{
		printf("\nSo Lan Xuat Hien Ki Tu '%c' Trong Chuoi La: %d", c,count);
	}
}

// Bài 4. Đếm Số Khoảng Trắng Trong Chuỗi
int count_SoTu(char* s)
{
	if (s == NULL)
		return 0;
	int count = 0;
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (s[i] == ' ' || s[i + 1] == '\0') 
		{
			count++;
		}
	}
	return count;
}

void main()
{
	char s[50];
	char c;
	printf("Nhap Noi Dung Cho Chuoi: ");
	gets_s(s);
	printf("\nNoi Dung Cua Chuoi Vua Nhap La: ");
	puts(s);

	/*Alter_Character(s);
	printf("\nNoi Dung Cua Chuoi Sau Khi Thay Doi Hoa Thuong La: %s ",s);*/

	/*delete_Space(s);
	printf("\nChuoi Sau Khi Xoa Space La: %s ",s);*/

	/*printf("\nNhap Ki Tu Muon Tim Kiem Trong Chuoi: ");
	scanf_s("%c", &c);
	count_SoTu(s, c);*/

	/*int count = count_SoTu(s);
	printf("\nSo Ki Tu Trong Chuoi Vua Nhap La: %d",count);*/
	

	printf("\n");
}