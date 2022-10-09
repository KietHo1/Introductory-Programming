#include<stdio.h>
#include<conio.h>
#include<string.h>
struct SinhVien{
	char masv[10];
	char tensv[50];
	int namsinh;
	float toan, ly, hoa, diemtb;
};
void nhap1SV(SinhVien &sv){
	printf("\nNhap ma sinh vien: ");
	scanf("%s", &sv.masv);
	printf("\nNhap ten sinh vien: ");
	scanf("%s", &sv.tensv);
	printf("\nNhap nam sinh: ");
	scanf("%s", &sv.namsinh);
	printf("\nNhap diem toan: ");
	scanf("%s", &sv.toan);
	printf("\nNhap diem ly: ");
	scanf("%s", &sv.ly);
	printf("\nNhap diem hoa: ");
	scanf("%s", &sv.hoa);
	printf("\nNhap diem trung binh: ");
	scanf("%s", &sv.diemtb);
}
void xuat1SV(SinhVien sv){
	printf("\nMa sinh vien: %s", sv.masv);
	printf("\nTen sinh vien: %s", sv.tensv);
	printf("\nNam sinh: %s", sv.namsinh);
	printf("\nDiem toan: %s", sv.toan);
	printf("\nDiem ly: %s", sv.ly);
	printf("\nDiem hoa: %s", sv.hoa);
	printf("\nDiem trung binh: %s", sv.diemtb);
}
void nhapDSSV(SinhVien a[], int n){
	for (int i = 0; i < n; i++)
	{
		printf("Nhap sinh vien thu %d", i + 1);
		nhap1SV(a[i]);
	}
}
void xuatDSSV(SinhVien a[], int n){
	for (int i = 0; i < n; i++)
	{
		printf("Xuat sinh vien thu %d", i + 1);
		xuat1SV(a[i]);
	}
}
float maxdtb(SinhVien a[], int n, int &i){
	 float max = a[0].diemtb;
	 int d;
	 for (int i = 1; i < n; i++)
	 {
		 if (a[i].diemtb > max)
		 {
			 max = a[i].diemtb;
			 d = i;
		 }
	 }
	 return max;
}
SinhVien inds(SinhVien a[], int n){
	for (int i = 0;  i < n;  i++)
	{
		if (a[i].diemtb > 5 && a[i].toan >= 3 && a[i].ly >= 3 && a[i].hoa >= 3){
			xuat1SV(a[i]);
		}
	}
}
void tangDanDTB(SinhVien a[], int n){
	float tg;
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i].diemtb > a[j].diemtb){
				// Hoan vi 2 so a[i] va a[j]
				tg = a[i].diemtb;
				a[i].diemtb = a[j].diemtb;
				a[j].diemtb = tg;
			}
		}
	}
}
void tangDanDTB(SinhVien a[], int n){
	float tg;
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i].toan < a[j].toan){
				// Hoan vi 2 so a[i] va a[j]
				tg = a[i].toan;
				a[i].toan = a[j].toan;
				a[j].toan = tg;
			}
		}
	}
}
void timSVtheoTen(SinhVien a[], int n, char ten[]){
	for (int i = 0; i < n; i++)
	{
		if (stricmp(ten, a[i].tensv) == 0)
			xuat1SV(a[i]);
	}
}