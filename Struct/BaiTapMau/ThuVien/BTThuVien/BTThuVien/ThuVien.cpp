#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Sach{
	char MaSSach[10];
	char TenSach[50];
	char TacGia[50];
	int SL;
};
void nhap1CS(Sach &s){
	printf("\nNhap ma sach: ");
	scanf("%s", &s.MaSSach);
	printf("\nNhap ten sach: ");
	scanf("%s", &s.TenSach);
	printf("\nNhap tac gia: ");
	scanf("%s", &s.TacGia);
	printf("\nNhap so luong: ");
	scanf("%s", &s.SL);
}
void xuat1CS(Sach s){
	printf("\nMa sach: %s", s.MaSSach);
	printf("\nTen sach: %s", s.TenSach);
	printf("\nTac gia: %s", s.TacGia);
	printf("\nSo luong: %s", s.SL);
}
void nhapDSSV(Sach a[], int n){
	for (int i = 0; i < n; i++)
	{
		printf("Nhap cuon sach thu %d", i + 1);
		nhap1CS(a[i]);
	}
}
void xuatDSSV(Sach a[], int n){
	for (int i = 0; i < n; i++)
	{
		printf("Xuat cuon sach thu %d", i + 1);
		xuat1CS(a[i]);
	}
}
int timSVtheoTen(Sach a[], int n, char tensach[]){
	for (int i = 0; i < n; i++)
	{
		if (stricmp(tensach, a[i].TenSach) == 0)
		{
			xuat1CS(a[i]);
			return 1;
		}
	}
	return 0;
}
