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
void sapxepchantanglegiam(int a[], int &n){
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			// Chẵn tăng dần
			if (a[i] % 2 == 0 && a[j] % 2 == 0){
				if (a[i] > a[j]) {
					// Nếu a[i] > a[j] thì hoán đổi giá trị của a[i] và a[j]
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
			// Lẻ giảm dần
			if (a[i] % 2 == 1 && a[j] % 2 == 1){
				if (a[i] < a[j]) {
					// Nếu a[i] < a[j] thì hoán đổi giá trị của a[i] và a[j]
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}
}

int main(){
	int a[100], n;
	NhapMang(a, n);
	sapxepchantanglegiam(a, n);
	XuatMang(a, n);
	_getch();
	return 0;
}