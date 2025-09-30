#include<stdio.h>
#include<math.h>
int main() {
    int sothanggui;
    double tiencanco, tienguibandau, laisuatthang;
    printf("Nhap so tien ban muon co trong tuong lai: "); scanf("%lf", &tiencanco);
   	printf("Nhap so thang gui: "); scanf("%d", &sothanggui);
    printf("Nhap lai suat moi thang (%%): "); scanf("%lf", &laisuatthang);
    double coso = 1 + (laisuatthang / 100);
    double somu = sothanggui;
    tienguibandau = tiencanco / pow(coso, somu);
    printf("de co duoc %.2f VND sau %d tháng voi lai suat %.2f%%/tháng,\n", tiencanco, sothanggui, laisuatthang);
    printf("Ban can gui so tien ban dau it nhat la: %.2f VND\n", tienguibandau);
    return 0;
}
