#include<stdio.h>
int main(){
 float diem10, diem4;
 char *diemchu;
 	printf ("Nhap diem mon hoc (thang diem 10): "); 
	scanf("%f",&diem10);
 	if(diem10 < 0 || diem10 > 10){
 	 printf("diem khong hop le.\n");
 }else if (diem10 >= 9.0){
 	diem4 = 4.0;
 	diemchu = "A+";
 } else if(diem10 >= 8.0){
 	diem4 = 3.5;
 	diemchu = "A";
 } else if(diem10 >= 7.0){
 	diem4 = 3.0;
 	diemchu = "B+";
 } else if(diem10 >= 6.0){
 	diem4 = 2.5;
 	diemchu = "B";
 }else if(diem10 >= 5.0){
 	diem4 = 2.0;
 	diemchu = "C";
 }else if(diem10 >= 4.0 ){
 	diem4 = 1.5;
 	diemchu = "D";
 }else {
 	diem4 = 1;
 	diemchu = "F";
 }
 printf("\nKET QUA LA:\n");
 printf("Diem thang 4 la: %.1f\n", diem4);
 printf("Diem Chu la: %s\n", diemchu);
return 0;
}
