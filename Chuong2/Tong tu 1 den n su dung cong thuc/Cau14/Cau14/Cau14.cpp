#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("Nhap n: \n");
	scanf_s("%d", &n);
	int tong = n*(n + 1) / 2;
	printf("Tong cua 1 + ... + %d la: %d", n, tong);
	_getch();
	return 0;
}