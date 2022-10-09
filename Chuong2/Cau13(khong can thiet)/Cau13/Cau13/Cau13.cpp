#include<stdio.h>
#include<conio.h>

int main(){
	float a, b, c, d, e;
	printf("Nhap 5 so : \n");
	scanf_s("%f %f %f %f %f", &a, &b, &c, &d, &e);
	float tbc = (a + b + c + d + e) / 5;
	printf("Trung binh cong cua 5 so la: %.2f", tbc);
	_getch();
	return 0;
}