#include<stdio.h>
#include<conio.h>
//#define PI 3.14
const float PI = 3.14;
int main(){
	float r;
	printf("Nhap ban kinh (>0): \n");
	scanf_s("%f", &r);
	printf("Chu vi hinh tron la: %.2f \n", 2 * PI*r);
	printf("Dien tich hinh tron la: %.2f", PI * r *r);
	_getch();
	return 0;
}