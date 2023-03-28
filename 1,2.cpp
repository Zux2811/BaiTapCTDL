include <stdio.h>
include <conio.h>
Struct HonSo
{
    int SoNguyn, TuSo, MauSo;
};
typedef struct HonSo HS;
void nhapHonSo(HS &);
void xuatHonSo(HS);

void nhap(HS &z)
{
    printf("Nhap So Nguyen:\n");
    scanf("%d", &z.SoNguyen);
    printf("Nhap Tu So:\n");
    scanf("%d", &z.TuSo);
    printf("Nhap Mau So:\n");
    scanf("%d", &z.MauSo);
}
void xuat(HS z)
{
    printf("%d/%d/%d",z.SoNguyen,z.TuSo,z.MauSo);
}
int main()
{
	HonSo z;
	nhapHonSo(z);
	xuatHonSo(z);
	
	getch();
	return 0;
}