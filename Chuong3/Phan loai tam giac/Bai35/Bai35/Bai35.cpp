#include<stdio.h>
#include<conio.h>

int main(){
	int a, b, c;
	printf("Nhap canh a: ");
	scanf_s("%d", &a);
	printf("Nhap canh b: ");
	scanf_s("%d", &b);
	printf("Nhap canh c: ");
	scanf_s("%d", &c);
	if ((a == b && b != c) || (a == c && b != c) || (b == c && a != c))
		printf("Tam giac nay la tam giac can");
	else if (a == b && a == c && b == c)
		printf("Tam giac nay la tam giac deu");
	else if (((a * a) == (b * b) + (c * c)) || ((b * b) == (a * a) + (c * c)) || ((c * c) == (a * a) + (b * b)))
		printf("Tam giac nay la tam giac vuong");
	else if (((a * a) == (b * b) + (c * c) || b == c) || ((b * b) == (a * a) + (c * c) || a == c) ||
		((c * c) == (a * a) + (b * b) || a == b))
		printf("Tam giac nay la tam giac vuong can");
	else
		printf("Tam giac nay la tam giac thuong");
	_getch();
	return 0;
}