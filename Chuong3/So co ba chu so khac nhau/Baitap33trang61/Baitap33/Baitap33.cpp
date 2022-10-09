#include<stdio.h>
#include<conio.h>

int main(){
	int n = 999;
	int i = 100;
	while(i < n){
		int e = i;
		int a = e % 10;
		e = e / 10;
		int b = e % 10;
		e = e / 10;
		int c = e % 10;
		if(a != b && a != c && b != c){
			int d = c * 100 + b * 10 + a;
			printf("%d \t", d);
		}
		i++;
 	}
	_getch();
	return 0;
}