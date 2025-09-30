#include <stdio.h>
int main() {
    double tienGui;    
    int thang;
    double laiSuat;  
    printf ("Nhap so tien gui ban dau: "); scanf("%lf", &tienGui); 
    printf("Nhap so thang gui: ");
    scanf("%d", &thang);
    printf("Nhap lai suat moi tháng (%%): ");
    scanf("%lf", &laiSuat);
    double tongTien = tienGui;
    for (int i = 1; i <= thang; i++) {
         double tienLaiThang = tongTien * (laiSuat / 100);
        tongTien = tongTien + tienLaiThang;
   }
    printf("\n-----------------------------------\n");
    printf("So tien nhan duoc sau %d tháng la: %.2f VND\n", thang, tongTien);

    return 0;
}
