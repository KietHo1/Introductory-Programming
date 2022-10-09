#include<stdio.h>
#include<conio.h>
struct PhanSo{
	int Tuso;
	int Mauso;
};
void nhap1PS(PhanSo &ps){
	printf("Nhap tu so: ");
	scanf("%d", &ps.Tuso);
	printf("Nhap mau so: ");
	scanf("%d", &ps.Mauso);
}
void xuat1PS(PhanSo ps){
	printf("Xuat phan so: %d/%d", ps.Tuso, ps.Mauso);
}
PhanSo tong2PS(PhanSo p1, PhanSo p2){
	PhanSo p0;
	p0.Tuso = p1.Tuso * p2.Mauso + p1.Mauso * p2.Tuso;
	p0.Mauso = p1.Mauso * p1.Mauso;
	return p0;
}
PhanSo hieu2PS(PhanSo p1, PhanSo p2){
	PhanSo p0;
	p0.Tuso = p1.Tuso * p2.Mauso - p1.Mauso * p2.Tuso;
	p0.Mauso = p1.Mauso * p1.Mauso;
	return p0;
}
PhanSo tich2PS(PhanSo p1, PhanSo p2){
	PhanSo p0;
	p0.Tuso = p1.Tuso * p2.Tuso;
	p0.Mauso = p1.Mauso * p1.Mauso;
	return p0;
}
PhanSo thuong2PS(PhanSo p1, PhanSo p2){
	PhanSo p0;
	p0.Tuso = p1.Tuso * p2.Mauso;
	p0.Mauso = p1.Mauso * p1.Tuso;
	return p0;
}
void nhapMPS(PhanSo a[], int &n){
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap phan so thu %d", i + 1);
		nhap1PS(a[i]);
	}
}
void xuatMPS(PhanSo a[], int n){
	for (int i = 0; i < n; i++)
	{
		printf("\nXuat phan so thu %d", i + 1);
		xuat1PS(a[i]);
	}
}
PhanSo tongMPS(PhanSo a[], int n){
	PhanSo kq = { 0, 1 };
	for (int i = 1; i < n; i++)
	{
		kq = tong2PS(a[i], kq);
	}
	return kq;
}
PhanSo tichMPS(PhanSo a[], int n){
	PhanSo kq = { 1, 1 };
	for (int i = 1; i < n; i++)
	{
		kq = tich2PS(a[i], kq);
	}
	return kq;
}