#include<stdio.h>
#include<conio.h>
int main(){
	char tenkhachhang;
	int chisotruoc,chisosau,soluong;
	float dongia,tiendien ;
		printf("Ten Khach Hang: "); scanf("%s", &tenkhachhang);
		printf("So dien cu: "); scanf("%d", &chisotruoc);
		printf("So dien moi: "); scanf("%d", &chisosau);
		soluong = chisosau-chisotruoc;
	 if (soluong <= 100) {
        tiendien = soluong * 1418;
    } else if (soluong <= 150) {
        tiendien = 100 * 1418 + (soluong - 100) * 1622;
    } else if (soluong <= 200) {
        tiendien = 100 * 1418 + 50 * 1622 + (soluong - 150) * 2044;
    } else if (soluong <= 300) {
        tiendien = 100 * 1418 + 50 * 1622 + 50 * 2044 + (soluong - 200) * 2210;
    } else if (soluong <= 400) {
        tiendien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + (soluong - 300) * 2361;
    } else {
        tiendien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + 100 * 2361 + (soluong - 400) * 2420;
    }
    printf("\nThong tin khach hang:\n");
    printf("Ten khach hang: %s\n", tenkhachhang);
    printf("So kWh tieu thu: %d kWh\n", soluong);
    printf("Tien dien phai thanh toan: %.2f VND\n", tiendien);
	return 0;
	
}
