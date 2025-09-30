#include<stdio.h>
float diemthang4 (float diem){
	float diem4;
	if(diem>=9.0){
		printf("A+");
}	else if (diem>=8){
		printf("A");
}	else if (diem>=7){
		printf("B+");
}	else if (diem>=6){
		printf("B");
}	else if (diem>5){
		printf("C");
}	else if (diem>4){
		printf("D");
}	else {
		printf("F");
}
}
main(){
float diem, diem4;
printf("Nhap diem thang 10: ");scanf("%f",&diem);
diem4=diemthang4(diem);
return 0;
}
