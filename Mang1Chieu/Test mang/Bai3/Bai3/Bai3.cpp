#include<stdio.h>
#include<conio.h>
void NhapMang(float a[], int &n);
void XuatMang(int a[], int &n);
void NhapMang(float a[], int &n){
	printf("Nhap so phan tu cua mang: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}
}
void XuatMang(int a[], int &n){
	printf("Noi dung mang: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d \t", a[i]);
	}
}
void chan(int a[], int &n);
void chan(int a[], int &n){
	printf("Cac gia tri chan trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			printf("%d \t", a[i]);
	}
}
void vitrisoam(int a[], int &n){
	printf("Vi tri cac so am trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			printf("%d \t", i);
	}
}
void doanxy(float a[], int &n, float x, float y){
	printf("Cac gia tri thuoc doan [%f, %f]: ", x, y);
	for (int i = 0; i < n; i++){
		if (a[i] >= x && a[i] <= y)
			printf("%f \t", a[i]);
	}
}
int main(){
	float a[100];
	float x, y;
	int n;
	NhapMang(a, n);
	printf("Nhap x: ");
	scanf_s("%f", &x);
	printf("Nhap y: ");
	scanf_s("%f", &y);
	doanxy(a, n, x, y);
	_getch();
	return 0;
}