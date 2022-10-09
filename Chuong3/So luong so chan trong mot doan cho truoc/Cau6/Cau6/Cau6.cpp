#include<stdio.h>
#include<conio.h>

int main(){
	int n, m;
	printf("Nhap n (n > 0): ");
	scanf_s("%d", &n);
	printf("Nhap m (m > 0 va m > n): ");
	scanf_s("%d", &m);
	int dem = 0;
	for (int i = 1; i <= m; i++){
		if (i >= n){
			if (i % 2 == 0)
				dem++;
		}
	}
	printf("So luong so chan trong doan [%d, %d] la: %d", n, m, dem);
	_getch();
	return 0;
}