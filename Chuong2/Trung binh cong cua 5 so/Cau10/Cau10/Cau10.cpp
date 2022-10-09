#include<stdio.h>
#include<conio.h>

int main(){
	int a, b, c, d, e;
	printf("Moi ban nhap so (>0): \n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	scanf_s("%d", &e);
	float tb = ((float)a + (float)b + (float)c + (float)d + (float)e) / 5.00;
	printf("Trung binh cong cua 5 so la: %.2f", tb);
	_getch();
	return 0;
}