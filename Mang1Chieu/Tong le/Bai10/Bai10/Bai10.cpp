#include<stdio.h>
#include<conio.h>
void NhapMang(int a[], int &n);
void NhapMang(int a[], int &n){
	printf("Nhap so phan tu cua mang: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
}
void XuatMang(int a[], int &n);
void XuatMang(int a[], int &n){
	printf("Noi dung mang: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d \t", a[i]);
	}
}
int tongle(int a[], int &n){
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1)
			tong = tong + a[i];
	}
	return tong;
}
int main(){
	int a[100], n;
	NhapMang(a, n);
	XuatMang(a, n);
	int tong = tongle(a, n);
	printf("\nTong cac gia tri le trong mang: %d", tong);
	_getch();
	return 0;
}