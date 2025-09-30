#include <stdio.h>
void tinhTienThua(int giaSanPham, int tienNguoiMua, int caseNum) {
    int tienThua = tienNguoiMua - giaSanPham;
    int soTo10 = tienThua / 10;
    tienThua = tienThua % 10;
    int soTo5 = tienThua / 5;
    tienThua = tienThua % 5; 
    int soTo1 = tienThua;
    printf("Case #%d: 10 = %d, 5 = %d, 1 = %d\n", caseNum, soTo10, soTo5, soTo1);
}
int main() {
    int soBovest;
    scanf("%d", &soBovest);
   for (int i = 1; i <= soBovest; i++) {
        int giaSanPham, tienNguoiMua;
        scanf("%d %d", &giaSanPham, &tienNguoiMua);
        tinhTienThua(giaSanPham, tienNguoiMua, i);
    }
    return 0;
}
