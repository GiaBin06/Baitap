#include<stdio.h>	
int main() {
    int thang, nam;
    printf("Nhap v�o th�ng (1-12): ");
    scanf("%d", &thang);
    printf("Nhap v�o nam: ");
    scanf("%d", &nam);
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        printf("Th�ng %d nam %d c� 31 ng�y.\n", thang, nam);
    } 
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        printf("Th�ng %d nam %d c� 30 ng�y.\n", thang, nam);
    } 
    else if (thang == 2) {
        if ((nam %4 == 0 && nam %100 != 0) || (nam % 400 == 0)) {
            printf("Th�ng %d nam %d c� 29 ng�y.\n", thang, nam);
        } else {
            printf("Th�ng %d nam %d c� 28 ng�y.\n", thang, nam);
        }
    } 
    else {
 
        printf("Thang %d khong hop le\n", thang);
    }
    return 0;
}
