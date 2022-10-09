#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("Nhap vao 1 so bat ki tu 0 -> 9: ");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("%d doc la so mot", n); break;
	case 2:
		printf("%d doc la so hai", n); break;
	case 3:
		printf("%d doc la so ba", n); break;
	case 4:
		printf("%d doc la so bon", n); break;
	case 5:
		printf("%d doc la so nam", n); break;
	case 6:
		printf("%d doc la so sau", n); break;
	case 7:
		printf("%d doc la so bay", n); break;
	case 8:
		printf("%d doc la so tam", n); break;
	case 9:
		printf("%d doc la so chin", n); break;
	default:
		printf("Khong xac dinh!");
		break;
	}
	_getch();
	return 0;
}