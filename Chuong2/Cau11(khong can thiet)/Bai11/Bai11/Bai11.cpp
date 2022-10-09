#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int x;
	printf("Nhap x: ");
	scanf_s("%d", &x);
	double d = x + 1;
	double f = d / (1 - x);
	/*double f = (1 + x) / (1 - x);*/
	double g = ((3 * (x*x*x*x*x)) + 2 * x + sqrt(d)) / (5 * (x*x) - 3);
	printf("F = %f \n G = %f", f, g);
	_getch();
	return 0;
}