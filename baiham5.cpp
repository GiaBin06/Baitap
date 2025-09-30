#include <stdio.h>
int doubleFactorial(int n);
int main() {
    int n;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap so nguyen khong am.\n");
    } else {
        long long ketQua = doubleFactorial(n);
        printf("%d!! = %lld\n", n, ketQua);
    }
    return 0;
}
int doubleFactorial(int n) {
    int gt = 1;
    int i = n;
    while (i > 1) {
        gt = gt * i;
        i = i - 2;
    }
    return gt;
}
