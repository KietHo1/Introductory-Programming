#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	//Bai toan phuong trinh bac hai
	float a, b, c;
	printf("Nhap a(a khac 0): ");
	scanf_s("%f", &a);
	printf("Nhap b: ");
	scanf_s("%f", &b);
	printf("Nhap c: ");
	scanf_s("%f", &c);
	float delta = b*b - 4 * a*c;
	if (delta < 0)
		printf("Phuong trinh vo nghiem!");
	else if (delta == 0)
		printf("Phuong trinh co nghiem kep: %.2f", -b / (2 * a));
	else
	{
		float x1 = (-b + sqrt(delta)) / (2 * a);
		float x2 = (-b - sqrt(delta)) / (2 * a);
		printf("Phuong trinh co 2 nghiem la: %.2f va %.2f", x1, x2);
	}
	_getch();
	return 0;
}