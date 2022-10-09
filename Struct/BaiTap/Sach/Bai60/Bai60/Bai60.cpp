#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Sach
{
	char maSach[10];
	char tenSach[20];
	float giaBan;
	int soLuong;
};
void NhapMangSach(Sach a[], int n){
	for (int i = 1; i <= n; i++)
	{
		printf("Nhap cuon sach thu %d: ", i);
		printf("\nNhap ma sach: ");
		scanf("%s", &a[i].maSach);
		printf("\nNhap ten sach: ");
		scanf("%s", &a[i].tenSach);
		printf("\nNhap gia ban: ");
		scanf("%f", &a[i].giaBan);
		printf("\nNhap so luong: ");
		scanf("%d", &a[i].soLuong);
	}
}
void XuatMangSach(Sach a[], int n){
	for (int i = 1; i <= n; i++)
	{
		printf("\nXuat cuon sach thu %d", i);
		printf("\nXuat ma sach: ");
		printf("%s", a[i].maSach);
		printf("\nXuat ten sach: ");
		printf("%s", a[i].tenSach);
		printf("\nXuat gia ban: ");
		printf("%f", a[i].giaBan);
		printf("\nXuat so luong: ");
		printf("%d", a[i].soLuong);
	}
}
//b.Cho một mảng có n cuốn sách.Viết hàm in ra màn hình tổng số lượng các cuốn sách.
//int tongslSach(Sach a[]){
//	int tong = 0;
//	for (int i = 0; i < sizeof(a); i++)
//	{
//		if ()
//	}
//}
//c.Cho mảng có n cuốn sách.Viết hàm sắp xếp mảng tăng dần theo tên sách.
void sapXepTheoTenSach(Sach a[], int n){
	Sach tmp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(a[i].tenSach, a[j].tenSach) > 0)
			{
				strcpy(tmp.tenSach, a[i].tenSach);
				strcpy(a[i].tenSach, a[j].tenSach);
				strcpy(a[j].tenSach, tmp.tenSach);
			}
		}
	}
}
//d.Viết hàm xuất các sách có số lượng >10.
void XuatSachsllon10(Sach a[], int n){
	for (int i = 1; i <= n; i++)
	{
		if (a[i].soLuong > 10)
		{
			printf("\nXuat cuon sach thu %d", i);
			printf("\nXuat ma sach: ");
			printf("%s", a[i].maSach);
			printf("\nXuat ten sach: ");
			printf("%s", a[i].tenSach);
			printf("\nXuat gia ban: ");
			printf("%f", a[i].giaBan);
			printf("\nXuat so luong: ");
			printf("%d", a[i].soLuong);
		}
	}
}