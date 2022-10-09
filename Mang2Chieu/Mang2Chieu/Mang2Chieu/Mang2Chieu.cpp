#include<stdio.h>
#include<math.h>
#include<conio.h>
void nhap(int a[][50], int &n, int &m)
{
	printf("nhap so dong:"); scanf("%d", &n);
	printf("nhap so cot:"); scanf("%d", &m);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
		{
			printf("nhap pt thu [%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuat(int a[][50], int n, int m)
{
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			printf("%4d", a[i][j]);

		}
		printf("\n");
	}
}
void Tong(int a[][50], int n, int m)
{
	int s = 0;
	for (int i = 0; i<m; i++)
	{
		s = s + a[0][i];
	}
	for (int i = 1; i<n; i++)
	{
		s = s + a[i][0];
	}
	for (int i = 1; i<m; i++)
	{
		s = s + a[n - 1][i];
	}
	for (int i = 1; i<n - 1; i++)
	{
		s = s + a[i][m - 1];
	}

	printf("Tong la: %d", s);
}
int main()
{
	int a[50][50], n, m, x;
	nhap(a, n, m);
	xuat(a, n, m);

	Tong(a, n, m);
	getch();
	return 0;

}