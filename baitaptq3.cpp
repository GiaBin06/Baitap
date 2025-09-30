#include<stdio.h>	
int main() {
    int thang, nam;
    printf("Nhap vào tháng (1-12): ");
    scanf("%d", &thang);
    printf("Nhap vào nam: ");
    scanf("%d", &nam);
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        printf("Tháng %d nam %d có 31 ngày.\n", thang, nam);
    } 
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        printf("Tháng %d nam %d có 30 ngày.\n", thang, nam);
    } 
    else if (thang == 2) {
        if ((nam %4 == 0 && nam %100 != 0) || (nam % 400 == 0)) {
            printf("Tháng %d nam %d có 29 ngày.\n", thang, nam);
        } else {
            printf("Tháng %d nam %d có 28 ngày.\n", thang, nam);
        }
    } 
    else {
 
        printf("Thang %d khong hop le\n", thang);
    }
    return 0;
}
