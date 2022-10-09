#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("Nhap n (n > 0): ");
	scanf_s("%d", &n);
	printf("Cac so le nho hon %d: ", n);
	for (int i = 1; i < n; i++){
		if (i % 2 == 1){
			printf("\t %d", i);
		}
	}
	_getch();
	return 0;
}