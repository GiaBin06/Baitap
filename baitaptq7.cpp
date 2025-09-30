#include<stdio.h>
#include<conio.h>
main(){
	float tiengui, tiennhan, laisuat;
	int thang=0;
	printf("so tien can gui: "); scanf("%f",&tiengui);
	printf("so tien da nhan: "); scanf("%f",&tiennhan);
	printf("lai suat hang thang: "); scanf("%f",&laisuat);
	while(tiengui<tiennhan){
		tiengui=tiengui+tiengui*laisuat/100;
		thang=thang+1;
	}
	printf("\nso thang da gui: %d", thang);
}
