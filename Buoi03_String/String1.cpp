#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

////===================================================================================
void fixScanf()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
////===================================================================================

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
		// TH Sau Khoảng Trắng Đã Là Chữ Hoa ==> Ko Cần Thay Đổi 
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
int delete_Site(char* s, int site)     // Xóa Space Tại Vị Trí
{
	if (s == NULL)
		return 0;
	int n = strlen(s);
	if (site < 0 || site > n)
		return 0;
	for (int i = site; i < n; i++)
	{
		s[i] = s[i + 1];
	}
	s[n - 1] == '\0';
}
//==============================================================================================
void delete_Space(char* s)
{
	if (s == NULL)
		return;
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
		delete_Site(s, n - 1);
	}
}

// Bài 3. Đếm Số Lần Xuất Hiện Của Kí Tự Trong Chuỗi
int count_SoTu(char* s, char c) // %s : Chuỗi      %c : Kí Tự
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
	printf("\nSo Lan Xuat Hien Cua Ki Tu '%c' Trong Chuoi La: %d", c, count);
	if (!count)
		printf("\nKhong Tim Thay Ki Tu '%c' Trong Chuoi", c);
}

// Bài 4. Đếm Số Khoảng Trắng Trong Chuỗi
void count_Space(char* s)
{
	if (s == NULL)
		return;
	int count = 0;
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (s[i] == ' ' || s[i + 1] == '\0')
		{
			count++;
		}
	}
	printf("\nSo Khoang Trang Trong Chuoi Vua Nhap La: %d", count);
	if (!count)
		printf("Chuoi Khong Co Khoang Trang!");
}

// Bài 5. So Sánh Hai Chuỗi
void Compare_String(char* s1, char* s2)
{
	int kq = strcmp(s1, s2);
	if (kq > 0)
		printf("Chuoi %s > %s", s1, s2);
	else if (kq < 0)
		printf("Chuoi %s < %s", s1, s2);
	else
		printf("Chuoi %s = %s", s1, s2);
}

// Bài 6. Chuyển Đổi Chữ Thường Thành Chữ Hoa
void alter_Lwr_Into_Upr(char* s)
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	printf("Chuoi Sau Khi Chuyen Doi Chu Thuong Thanh Chu Hoa La: %s", s);
}

// Bài 7. Tìm Kiếm Tên Trong Chuỗi Họ Tên
void find_Name(char* s1, char* s2)
{
	if (s1 == NULL)
		return;
	int count = 0;
	int len = strlen(s1);
	for (int i = len - 1; i >= 0; i--)
	{
		if (s1[i] == ' ')
		{
			count = i + 1; // i Là Vị Trí Dấu Cách / i + 1 Là Vị Trí Của Chữ Sau Dấu Cách
		}
	}
	int len2 = strlen(s2);
	for (int i = 0; i < len2; i++)
	{ // Hàm tolower chuyển đổi ký tự đã cho thành chữ thường.
		if (tolower(s2[i]) != tolower(s1[count + i])) 
		{
			printf("Ten %s Khong Co Trong Chuoi %s", s2, s1);
			return;
		}
	}
	printf("Ten %s Co Trong Chuoi %s", s2, s1);
}

// Bài 8. Thêm Kí Tự Vào Vị Trí Bất Kì Trong Chuỗi
void insert_Char_Site(char* s, int Site, char NewChar)
{
	if (s == NULL)
		return;
	int len = strlen(s);
	if (Site < 0 || Site >= len)
		return;
	for (int i = len - 1; i >= Site; i--)
	{
		s[i + 1] = s[i];
	}
	s[Site] = NewChar;
	s[len + 1] = '\0';
	printf("Chuoi Sau Khi Them Ki Tu La: %s", s);
}

// Bài 9. Tìm Kiếm Kí Tự Xuất Hiện Nhiều Nhất Trong Chuỗi
void find_Char_MostAppr(char* s) // SAI
{
	char a[50][50];
	int len = strlen(s);

	int Max = 0, idx;
	for (int i = 0; i < len; i++) {
		int count = 1;
		for (int j = i + 1; j < len; j++) {
			if (strcmp(a[i], a[j]) == 0) {

				count++;
			}
		}
		if (count > Max) {
			Max = count;
			idx = i;
		}
		else if (count == Max) {
			if (strcmp(a[idx], a[i]) > 0)
				idx = i;
		}
	}
	printf("Ki Tu Xuat Hien Nhieu Nhat Trong Chuoi La: %s", a[idx]);
}

// Bài 10. Xóa Chuỗi Kí Tự Trong Chuỗi
void delete_SmallString2_String1(char* s1, char* s2) 
{
	if (s1 == NULL)
		return;
	
	// TH1: Chuỗi s2 Không Tồn Tại Trong s1
	char* s3 = strstr(s1, s2); // Kiểm Tra s2 Pải Con s1 Không
	if (!s3) // s3 Trả Về Vị Trí Bắt Đầu Của đoạn giống chuỗi s2 Trong s1 
	{
		printf("Chuoi %s Khong Ton Tai Trong Chuoi %s",s2,s1);
		return;
	} 
	// s3 Là Chuỗi Giống s2 Trong s1 (Tan Quy)
	// s2 : Tan
	// s1 : Duong Tan Quy
	//            ^
	//            s3
	// s3 : Tan Quy
	
	// TH2: Chuỗi s2 Tồn Tại Trong s1
	int len2 = strlen(s2);
	int len3 = strlen(s3); // s3 Là Chuỗi Bắt Đầu Từ Vị Trí Giống s2 Trong s1
	for (int i = 0; i < len3; i++)
	{
		s3[i] = s3[i + len2]; // Dời Lên Nhiều Vị Trí, Thay Vì [i+1] Như Mảng Thì [i+len]
	}
	s3[len3 - 1] = '\0';
	printf("Chuoi s1 Sau Khi Xoa Ki Tu La: %s", s1);
}

// Bài 11. Xóa Chuỗi Tại Vị Trí Bất Kì
void delete_RandSite(char* s, int DelSite)
{
	if (s == NULL)
		return;
	int len = strlen(s);
	if (DelSite < 0 || DelSite >= len)
		return;
	for (int i = DelSite + 1; i < len; i++) // Vi Tri + 1
	{              // Thêm Là Các Kí Tự Trong Chuỗi Bị Dời Ra Sau (Thêm Phải Duyệt Chuỗi Từ Dưới Lên)
		s[i - 1] = s[i];  // Xóa Là Các Kí Tự Trong Chuỗi Bị Dời Lên Trước
	}
	s[len - 1] = '\0';
	printf("Chuoi Sau Khi Xoa La: %s", s);
}

//==============================================================================================
void showMenu()
{
	printf("\n***********************************************************");
	printf("\n*********************      MENU   *************************");
	printf("\n***********************************************************");
	printf("\n1. Chuyen Chu Dau Thanh Chu Hoa, Con Lai Thanh Chu Thuong *");
	printf("\n2. Xoa Khoang Trang Trong Chuoi                           *");
	printf("\n3. Dem So Lan Xuat Hien Cua Ki Tu Trong Chuoi             *");
	printf("\n4. Dem So Khoang Trang Trong Chuoi                        *");
	printf("\n5. So Sanh Hai Chuoi                                      *");
	printf("\n6. Chuyen Chu Thuong Thanh Chu Hoa                        *");
	printf("\n7. Tim Ten Trong Chuoi Ho Ten                             *");
	printf("\n8. Them Ki Tu Vao Vi Tri Bat Ki Trong Chuoi               *");
	printf("\n9. Tim Kiem Ki Tu Xuat Hien Nhieu Nhat Trong Chuoi        *");
	printf("\n10. Xoa Chuoi Con Trong Chuoi                             *");
	printf("\n11. Xoa Tai Vi Tri Bat Ki Trong Chuoi                     *");
	printf("\n0. Thoat Chuong Trinh                                     *");
	printf("\n***********************************************************");
	printf("\n***********************************************************");
}
//==============================================================================================
void process()
{
	char s[50];
	char c = 0;
	char s1[50];
	char s2[50];
	int Site = 0;
	int luaChon;
	showMenu();
	do
	{
		printf("\nHay Nhap Lua Chon Chuc Nang: ");
		scanf("%d", &luaChon);
		fixScanf();
		switch (luaChon)
		{
		case 1:
			printf("Nhap Noi Dung Cho Chuoi: ");
			gets_s(s);
			printf("\nNoi Dung Cua Chuoi Vua Nhap La: ");
			puts(s);
			Alter_Character(s);
			printf("\nNoi Dung Cua Chuoi Sau Khi Thay Doi Hoa Thuong La: %s ", s);
			break;
		case 2:
			printf("Nhap Noi Dung Cho Chuoi: ");
			gets_s(s);
			printf("\nNoi Dung Cua Chuoi Vua Nhap La: ");
			puts(s);
			delete_Space(s);
			printf("\nChuoi Sau Khi Xoa Space La: %s ", s);
			break;
		case 3:
			printf("Nhap Noi Dung Cho Chuoi: ");
			gets_s(s);
			printf("\nNoi Dung Cua Chuoi Vua Nhap La: ");
			puts(s);
			printf("\nNhap Ki Tu Muon Tim Kiem Trong Chuoi: ");
			scanf("%c", &c);
			count_SoTu(s, c);
			break;
		case 4:
			printf("Nhap Noi Dung Cho Chuoi: ");
			gets_s(s);
			printf("\nNoi Dung Cua Chuoi Vua Nhap La: ");
			puts(s);
			count_Space(s);
			break;
		case 5:
			printf("\nNhap Noi Dung Cho Chuoi s1: ");
			gets_s(s1);
			printf("Noi Dung Cua Chuoi s1 Vua Nhap La: ");
			puts(s1);
			printf("\nNhap Noi Dung Cho Chuoi s2: ");
			gets_s(s2);
			printf("Noi Dung Cua Chuoi s2 Vua Nhap La: ");
			puts(s2);
			printf("\n");
			Compare_String(s1, s2);
			break;
		case 6:
			printf("Nhap Noi Dung Cho Chuoi: ");
			gets_s(s);
			printf("Noi Dung Cua Chuoi Vua Nhap La: ");
			puts(s);
			alter_Lwr_Into_Upr(s);
			break;
		case 7:
			printf("Nhap Ho Va Ten: ");
			gets_s(s);
			printf("Ho Va Ten Vua Nhap La: ");
			puts(s);
			printf("Hay Nhap Ten Muon Tim Kiem: ");
			gets_s(s1);
			find_Name(s, s1);
			break;
		case 8:
			printf("Nhap Noi Dung Cho Chuoi: ");
			gets_s(s);
			printf("Noi Dung Cua Chuoi Vua Nhap La: ");
			puts(s);
			printf("Nhap Vi Tri Muon Them: ");
			scanf("%d", &Site);
			fixScanf();
			printf("Nhap Ki Tu Muon Them Vao Chuoi: ");
			scanf("%c", &c);
			insert_Char_Site(s, Site, c);
			break;
		case 9:
			printf("Nhap Noi Dung Cho Chuoi: ");
			gets_s(s);
			printf("Noi Dung Cua Chuoi Vua Nhap La: ");
			puts(s);
			find_Char_MostAppr(s);
			break;
		case 10:
			printf("Nhap Chuoi s1: ");
			gets_s(s1);
			printf("Noi Dung Cua Chuoi s1 Vua Nhap La: ");
			puts(s1);
			printf("Nhap Chuoi s2 Muon Xoa Trong Chuoi s1: ");
			gets_s(s2);
			delete_SmallString2_String1(s1, s2);
			break;
		case 11:
			printf("Nhap Noi Dung Cho Chuoi: ");
			gets_s(s);
			printf("Noi Dung Cua Chuoi Vua Nhap La: ");
			puts(s);
			printf("Nhap Vi Tri Muon Xoa: ");
			scanf("%d", &Site);
			delete_RandSite(s, Site);
			break;
		}
	} while (luaChon != 0);
}
//==============================================================================================
void main()
{
	process();
}