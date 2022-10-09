#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a;
	printf("Nhap canh hinh vuong (>0): \n");
	scanf_s("%f", &a);
	printf("Chu vi hinh vuong la: %.2f \n", 4 * a);
	printf("Dien tich hinh vuong la: %.2f \n", a*a);
	printf("Duong cheo hinh vuong la: %.2f", a*sqrtl(2));
	_getch();
	return 0;
}