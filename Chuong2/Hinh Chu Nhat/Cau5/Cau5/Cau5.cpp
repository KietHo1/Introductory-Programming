#include<stdio.h>
#include<conio.h>

int main(){
	float dai;
	float rong;
	printf("Nhap chieu dai: \n");
	scanf_s("%f", &dai);
	printf("Nhap chieu rong: \n");
	scanf_s("%f", &rong);
	printf("Chu vi hinh chu nhat la: %.2f \n", 2 * (dai + rong));
	printf("Dien tich hinh chu nhat la: %.2f", dai*rong);
	_getch();
	return 0;
}