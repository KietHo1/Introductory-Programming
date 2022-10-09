#include<stdio.h>
#include<conio.h>
int main(){
	printf("Nhap x: \n");
	int x;
	scanf_s("%d", &x);
	int F = 5 * x*x + 6 * x + 1;
	int G = 2 * x*x*x*x - 5 * x*x + 4 * x + 1;
	printf("F(x) = %d \n", F);
	printf("G(x) = %d", G);
	_getch();
	return 0;
}