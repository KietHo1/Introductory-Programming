#include<stdio.h>
#include<conio.h>

int main(){
	int a, b;
	printf("Nhap a: ");
	scanf_s("%d", &a);
	printf("Nhap b: ");
	scanf_s("%d", &b);
	if (a % b == 0)
		printf("a la boi cua b");
	else
		printf("a la khong la boi cua b");
	_getch();
	return 0;
}