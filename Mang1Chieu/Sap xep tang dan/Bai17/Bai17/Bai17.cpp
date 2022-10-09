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
void sapxeptangdan(int a[], int &n){
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				// Nếu a[i] > a[j] thì hoán đổi giá trị của a[i] và a[j]
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main(){
	int a[100], n;
	NhapMang(a, n);
	sapxeptangdan(a, n);
	XuatMang(a, n);
	_getch();
	return 0;
}