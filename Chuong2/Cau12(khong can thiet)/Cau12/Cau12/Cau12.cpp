#include<stdio.h>
#include<conio.h>

int main(){
	float x, y;
	printf("Nhap chieu dai: ");
	scanf_s("%f", &x);
	printf("Nhap chieu rong (rong < dai): ");
	scanf_s("%f", &y);
	float chuvi = 2 * (x + y);
	float dientich = x*y;
	printf("Chu vi hinh chu nhat la: %.2f\n", chuvi);
	printf("Dien tich hinh chu nhat la: %.2f", dientich);
	_getch();
	return 0;
}