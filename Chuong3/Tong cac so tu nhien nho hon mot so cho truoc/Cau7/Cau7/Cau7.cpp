#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("Nhap n (n > 0): ");
	scanf_s("%d", &n);
	int tong = 0;
	for (int i = 1; i < n; i++){
		tong = tong + i;
	}
	printf("Tong cac so tu nhien nho hon %d la: %d", n, tong);
	_getch();
	return 0;
}