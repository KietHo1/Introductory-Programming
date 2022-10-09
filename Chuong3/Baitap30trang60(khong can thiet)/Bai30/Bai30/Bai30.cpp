#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	if (n > 5)
		n = n + 2;
	else
		n = 0;
	printf("n bang %d", n);
	_getch();
	return 0;
}