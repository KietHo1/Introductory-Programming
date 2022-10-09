#include<stdio.h>
#include<conio.h>

int main(){
	int max;
	int a, b;
	printf("Nhap so thu nhat: \n");
	scanf_s("%d", &a);
	printf("Nhap so thu hai: \n");
	scanf_s("%d", &b);
	max = a > b ? a : b;
	printf("So lon nhat la: %d", max);
	_getch();
	return 0;
}