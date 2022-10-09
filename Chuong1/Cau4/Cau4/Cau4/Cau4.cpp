#include<stdio.h>
#include<conio.h>

int main(){
	printf("Nhap 2 so nguyen: ");
	int a, b;
	scanf_s("%d %d", &a, &b);
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	float thuong = a / b;
	printf("Tong 2 so nguyen la: %d \n", tong);
	printf("Hieu 2 so nguyen la: %d \n", hieu);
	printf("Tich 2 so nguyen la: %d \n", tich);
	printf("Thuong 2 so nguyen la: %0.2f", thuong);
	_getch();
	return 0;
}