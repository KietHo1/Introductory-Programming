#include<stdio.h>
#include<conio.h>
#define FILENAME "dsMang.txt"

void ShowMenu(){
	printf("\n***************************************************************************");
	printf("\n*                 MENU BAI MA TRAN                                        *");
	printf("\n*--------------------------------------------------------------------------");
	printf("\n*  1. Doc ma tran tu file                                                 *");
	printf("\n*  2. In ma tran                                                          *");
	printf("\n*  3. Dem so luong cac so nguyen to tren tam giac duoi cua ma tran        *");
	printf("\n*  4. Kiem tra xem ma tran co doi xung nhau qua duong cheo phu hay khong? *");
	printf("\n*  0. Thoat chuong trinh                                                  *");
	printf("\n***************************************************************************");
	printf("\n*                 MENU BAI DIEN THOAI                                     *");
	printf("\n*--------------------------------------------------------------------------");
	printf("\n*  5. Doc danh sach dien thoai tu file                                    *");
	printf("\n*  6. In danh sach dien thoai                                             *");
	printf("\n*  7. Tinh gia tri trung binh cac san pham co nuoc san xuat la Trung Quoc *");
	printf("\n*      va co don gia nam trong khoang 100000 den 200000                   *");
	printf("\n*  8. Bo sung 1 phan tu vao danh sach tai vi tri bat ky                   *");
	printf("\n*  0. Thoat chuong trinh                                                  *");
	printf("\n***************************************************************************");
}
//===============================================================
void Process(){
	int luaChon;
	do
	{
		ShowMenu();
		do
		{
			printf("\nHay chon mot chuc nang (0->13): ");
			scanf("%d", &luaChon);
		} while (luaChon < 0 || luaChon > 13);
		switch (luaChon)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		}
	} while (luaChon != 0);
}
void main(){
	Process();
}
void docfile(char filename[], int a[][50]){
	FILE *fp;
	int row, col, i, j;
	fp = fopen("matran2.txt", "r");

	// doc so hang cua ma tran
	fscanf(fp, "%d\b", &row);
	// doc so cot cua ma tran
	fscanf(fp, "%d\n", &col);

	printf("So hang cua ma tran: %d\n", row);
	printf("So cot cua ma tran: %d\n", col);

	// doc noi dung ma tran
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			fscanf(fp, "%d\n", &a[i][j]);
		}
	}

	printf("\nMa tran: \n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	fclose(fp);
}
void inMaTran(int a[][50], int m, int n){
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("\nPhan tu a[%d][%d]: %d", i, j, a[i][j]);
		}
	}
}
int check_SoNguyenTo(int N){
	int dem = 0;
	if (N < 2)//neu N < 2 thì N khong phai so nguyen to
		return 0;
	else
	{
		//vong lap for bat dau tu i = 1 và ket thuc khi i = N, moi lan lap i tang len 1
		for (int i = 1; i <= N; i++)
		{
			if (N % i == 0)//kiem tra uoc cua N 
			{
				dem += 1;//dem so luong uoc cua N
			}
		}
		if (dem == 2)//neu N có 2 uoc thì N la so nguyen to
		{
			return 1;
		}
		else{//nguoc lai N khong phai so nguyen to
			return 0;
		}
	}
}
int Demsonguyento_Tamgiacduoi(int a[][50], int n)
{
		int dem = 0;
		for (int i = 0; i < n - 1; i++){
			for (int j = 0; j<n - 1; j++)
			if (i>j)
			{
				if (check_SoNguyenTo(a[i][j]) == 1)
					dem++;
			}
		}
		return dem;
}
int Kiemtradoixung_Duongcheophu(int a[][50], int n)
{
	int dem = 0;
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j<n - 1; j++)
		if (a[i][n - i - 1] == a[n + 1 - i][n + 1 - (n - i - 1)])
			return 1;
		else
			return 0;
	}
}
struct DienThoai{
	char MaSanPham[5];
	char TenSanPham[20];
	char NuocSX[15];
	int NamSX;
	float DonGia;
};
void xuatDSDienThoai(DienThoai a[], int n){
	for (int i = 0; i < n; i++)
	{
		printf("Xuat thong tin dien thoai thu %d", i + 1);
		xuat1DienThoai(a[i]);
	}
}
void nhap1DienThoai(DienThoai dt){
	printf("\nMa san pham: ");
	scanf("%s", &dt.MaSanPham);
	printf("\nTen san pham: ");
	scanf("%s", &dt.TenSanPham);
	printf("\nNuoc san xuat: ");
	scanf("%s", &dt.NuocSX);
	printf("\nNam san xuat: ");
	scanf("%d", &dt.NamSX);
	printf("\nDon gia: ");
	scanf("%f", &dt.DonGia);
}
void xuat1DienThoai(DienThoai dt){
	printf("\nMa san pham: %s", dt.MaSanPham);
	printf("\nTen san pham: %s", dt.TenSanPham);
	printf("\nNuoc san xuat: %s", dt.NuocSX);
	printf("\nNam san xuat: %d", dt.NamSX);
	printf("\nDon gia: %f", dt.DonGia);
}
//Tính giá trung bình các sản phẩm có Nước sản xuất là Trung Quốc và có đơn giá nằm trong
//khoảng từ 100000 tới 200000.
float TB_TrungQuoc_DonGia(DienThoai a[], int n){
	int dem = 0;
	float Tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].DonGia >= 100000 && a[i].DonGia <= 200000 && a[i].NuocSX == "Trung Quốc")
		{
			dem++;
			Tong += a[i].DonGia;
		}
	}
	return ((float)Tong / (float)dem);
}
//Bổ sung 1 phần tử vào danh sách sản phẩm tại vị trí bất kì
void ChenViTriBatKy(DienThoai a[], int n){
	int position;
	DienThoai x;
	printf("\nNhập vi tri chen phan tu: \n");
	scanf("%d", &position);
	nhap1DienThoai(x);
	// Dịch chuyển các phần tử từ vị trí cần chèn (position) về phía sau 1 đơn vị
	// Và làm trống vị trí position
	for (int c = n - 1; c >= position - 1; c--)
		a[c + 1] = a[c];

	/*Chèn phần tử vào chỗ trống vừa tạo*/
	a[position - 1] = x;

	printf("Mang sau khi chen:\n");
	for (int c = 0; c <= n; c++)
		printf("%d\n", a[c]);
}