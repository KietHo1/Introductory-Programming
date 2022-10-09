#include<stdio.h>
#include<conio.h>

int main(){
	int a, b;
	printf("CHUONG TRINH GIAI PHUONG TRINH BAC 1: ax + b = 0\n");
	printf("Nhap a: ");
	scanf_s("%d", &a);
	printf("Nhap b: ");
	scanf_s("%d", &b);
	if (a == 0){
		if (b == 0)
			printf("Phuong trinh vo so nghiem!");
		else
			printf("Phuong trinh vo nghiem!");
	}
	else{
		float x = (float)(-b) / (float)a;
		printf("Phuong trinh co nghiem la: %.2f", x);
	}
	_getch();
	return 0;
}