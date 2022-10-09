#include<stdio.h>
#include<conio.h>

int main(){
	int d, r;
	printf("Nhap chieu dai: ");
	scanf_s("%d", &d);
	printf("Nhap chieu rong (rong < dai): ");
	scanf_s("%d", &r);
	printf("Ket qua ve hinh chu nhat voi chieu dai va chieu rong da nhap: \n");
	for (int i = 1; i <= r; i++){
		printf("\n* ");
		for (int j = 1; j < d; j++)
		{
			printf(" * ");
		}
	}
	_getch();
	return 0;
}