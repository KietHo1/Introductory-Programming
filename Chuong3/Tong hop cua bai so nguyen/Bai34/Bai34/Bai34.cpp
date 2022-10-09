#include<stdio.h>
#include<conio.h>

bool khacnhau(long a[], long n){
	bool dung = true;
	long demso = sochuso(n);
	for (; n != 0;){
		for (long i = 0; i <= demso; i++){
			a[i] = n % 10;
			n = n / 10;
		}
	}
	for (int i = 0; i <= demso; i++)
	{
		if (a[0] == a[i]){
			dung = false;
			break;
		}
	}
	return dung;
}

long chusodautien(long n){
	long temp = n;
	long first;
	do
	{
		first = temp % 10;
		temp = temp / 10;
	} while (temp != 0);
	return first;
}
long tongcacchuso(long n){
	long so;
	long tong = 0;
	for (; n != 0;){
		so = n % 10;
		tong += so;
		n /= 10;
	}
	return tong;
}
long chusolonnhat(long n){
	long somax;
	long max = 0;
	do
	{
		somax = n % 10;
		if (somax > max)
		{
			max = somax;
		}
		n = n / 10;
	} while (n != 10);
	return max;
}
long sochuso(long n){
	long dem = 0;
	long so;
	for (; n != 0;){
		so = n % 10;
		dem++;
		n /= 10;
	}
	return (dem+1);
}
int main(){
	long n;
	long tong = 0;
	long so, somax;
	long max = 0;
	long a[100];
	printf("Nhap n: ");
	scanf_s("%ld", &n);
	printf("Chu so hang dau tien cua %ld la: %ld", n, chusodautien(n));
	printf("Tong cac chu so cua %ld la: %ld", n, tongcacchuso(n));
	printf("Chu so lon nhat cua %ld la: %ld", n, chusolonnhat(n));
	printf("So chu so cua %ld la: %ld", n, sochuso(n));
	if (khacnhau(a, n) == true)
		printf("%ld la so co cac chu so khac nhau doi mot");
	else
		printf("%ld khong phai la so co cac chu so khac nhau doi mot");
	_getch();
	return 0;
}