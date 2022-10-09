#include<stdio.h>
#include<conio.h>

int main(){
	//Doi mot so thanh nhi phan
	int a[10], n, i;
	printf("Nhap so bat ki (n > 0): ");
	scanf_s("%d", &n);
	int x = n;
	for (i = 0; n > 0; i++){
		a[i] = n % 2;
		n = n / 2;
	}
	printf("Nhi phan cua so %d la: ", x);
	for (i = i - 1; i >= 0; i--){
		printf("%d", a[i]);
	}
	_getch();
	return 0;
}