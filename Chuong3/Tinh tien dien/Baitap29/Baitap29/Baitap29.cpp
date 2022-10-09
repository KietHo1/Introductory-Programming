#include<stdio.h>
#include<conio.h>

int main(){
	int sd;
	printf("Nhap so dien: ");
	scanf_s("%d", &sd);
	int tiendien = 0;
	if (sd >= 1 && sd <= 100)
		tiendien = tiendien + sd * 5;
	else if (sd >= 101 && sd <= 150)
		tiendien = tiendien + 100 * 5 + (sd - 100) * 7;
	else if (sd >= 151 && sd <= 200)
		tiendien = tiendien + 100 * 5 + 50 * 7 + (sd - 150) * 10;
	else if (sd >= 201 && sd <= 300)
		tiendien = tiendien + 100 * 5 + 50 * 7 + 50 * 10 + (sd - 200) * 15;
	else
		tiendien = tiendien + 100 * 5 + 50 * 7 + 50 * 10 + 100 * 15 + (sd - 300) * 20;
	printf("Tien dien phai tra la: %d", tiendien);
	_getch();
	return 0;
}