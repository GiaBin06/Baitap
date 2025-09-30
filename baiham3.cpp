#include <stdio.h>
int tinhtiendien(int sokwh);
int main() {
    int chisotruoc, chisosau;
    printf("Nhap chi so dien thang truoc: "); scanf("%d", &chisotruoc);
    printf("Nhap chi so dien thang sau: "); scanf("%d", &chisosau);
    if (chisosau < chisotruoc) {
        printf("\nLoi: Chi so thang sau phai lon hon hoac bang chi so thang truoc.\n");
    } else {
        int sodientieuthu = chisosau - chisotruoc;
        int tongthanhtoan = tinhtiendien(sodientieuthu);
        printf("\nHOA DON TIEN DIEN\n");
        printf("So kWh tieu thu: %d kWh\n", sodientieuthu);
        printf("Tong tien phai tra la: %lld VND\n", tongthanhtoan);
    }
    return 0;
}
int tinhtiendien(int sokwh) {
    int tongtien = 0;
    const int dinhmuc[] = {400, 300, 200, 150, 100, 0};
    const int dongia[] = {2420, 2361, 2210, 2044, 1622, 1418};
    const int sobac = 6;
    for (int i = 0; i < sobac; ++i) {
        if (sokwh > dinhmuc[i]) {
            int dientrongbac = sokwh - dinhmuc[i];
            tongtien += (int)dientrongbac * dongia[i];
            sokwh = dinhmuc[i];
        }
    }
    return tongtien;
}
