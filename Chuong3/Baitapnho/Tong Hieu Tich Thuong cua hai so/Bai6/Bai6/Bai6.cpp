#include<stdio.h>
#include<conio.h>

int main(){
	char n;
	float a, b;
	printf("Nhap phep tinh can tinh: ");
	scanf_s("%c", &n);
	switch (n)
	{
	case '+':
	{
				printf("Nhap so a: ");
				scanf_s("%f", &a);
				printf("Nhap so b: ");
				scanf_s("%f", &b);
				float tong = a + b;
				printf("Tong cua hai so a va b: %.2f", tong);
				break;
	}
	case '-':
	{
				printf("Nhap so a: ");
				scanf_s("%f", &a);
				printf("Nhap so b: ");
				scanf_s("%f", &b);
				float hieu = a - b;
				printf("Hieu cua hai so a va b: %.2f", hieu);
				break;
	}
	case '*':
	{
				printf("Nhap so a: ");
				scanf_s("%f", &a);
				printf("Nhap so b: ");
				scanf_s("%f", &b);
				float tich = a * b;
				printf("Tich cua hai so a va b: %.2f", tich);
				break;
	}
	case '/':
	{
				printf("Nhap so a: ");
				scanf_s("%f", &a);
				printf("Nhap so b (b khac 0): ");
				scanf_s("%f", &b);
				float thuong = (float)a / (float)b;
				printf("Thuong cua hai so a va b: %.2f", thuong);
				break;
	}
	default:
		printf("Khong co phep tinh nay!");
		break;
	}
	_getch();
	return 0;
}