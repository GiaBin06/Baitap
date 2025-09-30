#include<stdio.h>
main(){
	char hoten[100];
	float toan,van,tinhoc,diemtb;
	printf("nhap ho va ten: "); gets(hoten);
	fflush(stdin);
	printf("nhap diem mon toan: "); scanf("%f",&toan);
	printf("nhap diem mon van: "); scanf("%f",&van);
	printf("nhap diem mon tinhoc: "); scanf("%f",&tinhoc);
	diemtb=(toan+van+tinhoc)/3;
		printf("Diem trung binh: %f", diemtb);
	 if (diemtb>8){
		printf("\nxep loai: gioi ");
	}
	else if(7<=diemtb){
		printf("\nxep loai: kha ");
	}
	else if(5<=diemtb){
		printf("\nxep loai: trung binh ");
	}
	else if(diemtb<5){
		printf("\nxep loai: YEU");
	}
	return 0;
}
