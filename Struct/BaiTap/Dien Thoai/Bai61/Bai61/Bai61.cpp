#include<stdio.h>
#include<conio.h>
struct DienThoai
{
	char Madt[10];
	char Tendt[20];
	char Loaidt[10];
	float giaBan;
	int soLuong;
};
//void NhapMangSdt(Sach a[], int n){
//	for (int i = 1; i <= n; i++)
//	{
//		printf("Nhap cuon sach thu %d: ", i);
//		printf("\nNhap ma sach: ");
//		scanf("%s", &a[i].maSach);
//		printf("\nNhap ten sach: ");
//		scanf("%s", &a[i].tenSach);
//		printf("\nNhap gia ban: ");
//		scanf("%f", &a[i].giaBan);
//		printf("\nNhap so luong: ");
//		scanf("%d", &a[i].soLuong);
//	}
//}
void XuatMangSdt(DienThoai a[], int n){
	for (int i = 1; i <= n; i++)
	{
		printf("\nXuat thong tin dien thoai thu %d", i);
		printf("\nXuat ma dien thoai: ");
		printf("%s", a[i].Madt);
		printf("\nXuat ten dien thoai: ");
		printf("%s", a[i].Tendt);
		printf("\nXuat loai dien thoai: ");
		printf("%s", a[i].Loaidt);
		printf("\nXuat gia ban: ");
		printf("%f", a[i].giaBan);
		printf("\nXuat so luong: ");
		printf("%d", a[i].soLuong);
	}
}
//a.Viết hàm tính tổng tiền của tất cả các điện thoại có trong mảng.
int tongTien(DienThoai a[], int n){
	int tongtien = 0;
	for (int i = 0; i < n; i++)
	{
		tongtien += a[i].soLuong * a[i].giaBan;
	}
	return tongtien;
}
//b.Xuất các điện thoại loại « Nokia ».
void XuatLoaiSdt(DienThoai a[], int n){
	for (int i = 1; i <= n; i++)
	{
		if (a[i].Loaidt == "Nokia")
		{
			printf("\nXuat thong tin dien thoai thu %d", i);
			printf("\nXuat ma dien thoai: ");
			printf("%s", a[i].Madt);
			printf("\nXuat ten dien thoai: ");
			printf("%s", a[i].Tendt);
			printf("\nXuat loai dien thoai: ");
			printf("%s", a[i].Loaidt);
			printf("\nXuat gia ban: ");
			printf("%f", a[i].giaBan);
			printf("\nXuat so luong: ");
			printf("%d", a[i].soLuong);
		}
	}
}
//c.Viết hàm tìm điện thoại tên « GalaxyY »
void XuatTenSdt(DienThoai a[], int n){
	for (int i = 1; i <= n; i++)
	{
		if (a[i].Tendt == "GalaxyY")
		{
			printf("\nXuat thong tin dien thoai thu %d", i);
			printf("\nXuat ma dien thoai: ");
			printf("%s", a[i].Madt);
			printf("\nXuat ten dien thoai: ");
			printf("%s", a[i].Tendt);
			printf("\nXuat loai dien thoai: ");
			printf("%s", a[i].Loaidt);
			printf("\nXuat gia ban: ");
			printf("%f", a[i].giaBan);
			printf("\nXuat so luong: ");
			printf("%d", a[i].soLuong);
		}
	}
}