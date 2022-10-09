#include<stdio.h>
#include<conio.h>

int main(){
	printf("Nhap so do F: \n");
	float F;
	scanf_s("%f", &F);
	float C = (float) (5 % 9) * (float)(F - 32);
	printf("Do F chuyen thanh do C: %f", C);
	_getch();
	return 0;
}