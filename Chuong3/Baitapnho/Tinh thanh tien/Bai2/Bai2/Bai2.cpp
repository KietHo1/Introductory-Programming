#include<stdio.h>
#include<conio.h>

int main(){
	float dongia, soluong, thanhtien, giamgia;
	printf("Nhap don gia mot san pham: ");
	scanf_s("%f", &dongia);
	printf("Nhap so luong san pham: ");
	scanf_s("%f", &soluong);
	thanhtien = soluong * dongia;
	if (thanhtien > 100)
		giamgia = thanhtien * 3 / 100;
	else
		giamgia = 0;
	thanhtien = thanhtien - giamgia;
	printf("Tong tien phai tra la: %.2f", thanhtien);
	_getch();
	return 0;
}