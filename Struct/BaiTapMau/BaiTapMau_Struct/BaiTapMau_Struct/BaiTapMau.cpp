#include<stdio.h>
#include<conio.h>
#include<string.h>
struct SinhVien
{
	char mssv[50];
	char hoten[50];
	int solanvang;
};
void NhapMangSV(SinhVien a[], int n){
	for (int i = 1; i <= n; i++)
	{
		printf("Nhap sinh vien thu %d: ", i);
		printf("\nNhap ma so sinh vien: ");
		scanf("%s", &a[i].mssv);
		printf("\nNhap ho ten: ");
		scanf("%s", &a[i].hoten);
		printf("\nNhap so lan vang mat: ");
		scanf("%d", &a[i].solanvang);
	}
}
void XuatMangSV(SinhVien a[], int n){
	for (int i = 1; i <= n; i++)
	{
		printf("\nXuat sinh vien thu %d", i);
		printf("\nXuat ma so sinh vien: ");
		printf("%s", a[i].mssv);
		printf("\nXuat ho ten: ");
		printf("%s", a[i].hoten);
		printf("\nXuat so lan vang mat: %d\n", a[i].solanvang);
	}
}
void timSVVang(SinhVien a[], int n){
	for (int i = 1; i <= n; i++)
	{
		if (a[i].solanvang < 3){
			printf("\nXuat sinh vien thu %d", i);
			printf("\nMSSV: %s", a[i].mssv);
			printf("\nHo ten: %s", a[i].hoten);
			printf("\nSo lan vang: %d", a[i].solanvang);
		}
	}
}
void xoaXuongDong(char x[]){
	int len = strlen(x);
	// TITV\n\0 => TITV\0\0
	if (x[len - 1] == '\n'){
		x[len - 1] = '\0';
	}
}
void main(){
	SinhVien a[100];
	int n;
	printf("\nNhap so sinh vien: ");
	scanf("%d", &n);
	NhapMangSV(a, n);
	XuatMangSV(a, n);
	timSVVang(a, n);
	getch();
}