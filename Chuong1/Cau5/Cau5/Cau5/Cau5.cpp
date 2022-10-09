#include<stdio.h>
#include<conio.h>

int main(){
	printf("Nhap so nguyen: ");
	int n;
	scanf_s("%d", &n);
	printf("Day so tu 1 den %d: \n", n);
	for (int i = 1; i <= n; i++){
		printf("%d \n", i);
	}
	_getch();
	return 0;
}