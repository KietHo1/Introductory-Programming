#include<stdio.h>
#include<conio.h>

int main(){
	int bd, kt;
	int tien;
	do{
		printf("ban hay nhap gio bat dau:\n");
		scanf_s("%d", &bd);
		printf("ban hay nhap gio ket thuc:\n");
		scanf_s("%d", &kt);
	} while (bd < 10 || kt > 24);
	int thgianthue = kt - bd;
	if (bd >= 17 && kt <= 24)
		tien = thgianthue * 45000;
	else if (bd >= 10 && kt <= 17)
		tien = thgianthue * 20000;
	else
		tien = (17 - bd) * 20000 + (kt - 17) * 45000;
	printf("So tien phai tra la: %d", tien);
	_getch();
	return 0;
}