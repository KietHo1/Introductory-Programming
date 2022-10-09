#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("Moi ban chon hinh de tinh dien tich va chu vi:\n");
	printf("1.Hinh vuong\n");
	printf("2.Hinh chu nhat\n");
	printf("3.Hinh tron\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:{
			   float a;
			   printf("Nhap canh hinh vuong: ");
			   scanf_s("%f", &a);
			   float chuvihv = a * 4;
			   float dientichhv = a*a;
			   printf("Chu vi hinh vuong: %.2f\n", chuvihv);
			   printf("Dien tich hinh vuong: %.2f", dientichhv);
			   break;
	}
	case 2:{
			   float b, c;
			   printf("Nhap chieu dai: ");
			   scanf_s("%f", &b);
			   printf("Nhap chieu rong: ");
			   scanf_s("%f", &c);
			   float chuvihcn = 2 * (b + c);
			   float dientichhcn = b*c;
			   printf("Chu vi hinh chu nhat: %.2f\n", chuvihcn);
			   printf("Dien tich hinh chu nhat: %.2f", dientichhcn);
			   break;
	}
	case 3:{
			   float r;
			   const float PI = 3.14;
			   printf("Nhap ban kinh: ");
			   scanf_s("%f", &r);
			   float chuviht = 2 * PI*r;
			   float dientichht = PI*r*r;
			   printf("Chu vi hinh chu nhat: %.2f\n", chuviht);
			   printf("Dien tich hinh chu nhat: %.2f", dientichht);
			   break;
	}
	default:
		printf("Ban chon sai so roi!");
		break;
	}
	_getch();
	return 0;
}