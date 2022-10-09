#include<stdio.h>
#include<conio.h>

int main(){
	int a, b, c;
	printf("Nhap so thu nhat (>0): \n");
	scanf_s("%d", &a);
	printf("Nhap so thu hai (>0): \n");
	scanf_s("%d", &b);
	printf("Nhap so thu ba (>0): \n");
	scanf_s("%d", &c);
	int Maxab = a > b ? a : b;
	int Minab = a < b ? a : b;
	int max = c > Maxab ? c : Maxab;
	int min = c < Minab ? c : Minab;
	printf("Gia tri lon nhat la: %d \n", max);
	printf("Gia tri nho nhat la: %d", min);
	_getch();
	return 0;
}