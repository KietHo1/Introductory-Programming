#include<stdio.h>
#include<conio.h>

int tinhTong(int n);
int n;

int tinhTong(int n){
	int Tong = 0;
	for (int i = 1; i <= n; i++){
		Tong = Tong + i;
	}
	return Tong;
}

int main(){
	printf("Nhap n: \n");
	scanf_s("%d", &n);
	int Tong = tinhTong(n);
	printf("Tong can tinh la: %d", Tong);
	_getch();
	return 0;
}