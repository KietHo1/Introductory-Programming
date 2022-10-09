#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("Nhap n: \n");
	scanf_s("%d", &n);
	int tong = 0;
	for (int i = 1; i <= n; i++){
		tong = tong + i*i;
	}
	printf("Tong cua 1 + ... + %d^2 la: %d", n, tong);
	_getch();
	return 0;
}