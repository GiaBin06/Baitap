#include <stdio.h>
#include <math.h>
float Phanloaitamgiac(float a, float b, float c){
    if(a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a){
        printf("Ba canh nay khong tao thanh tam giac.\n");
        return -1;
    }
    int deu=0, can=0, vuong=0;
    if(a==b&&a==c){
	deu=1;
}
    else if(a==b||a==c||c==b){
	can=1;
}
    if(fabs(a*a+b*b-c*c)<0.0001||fabs(a*a+c*c-b*b)<0.0001||fabs(b*b+c*c-a*a)<0.0001){
	vuong=1;
}
    if(deu){
	printf("Tam giac deu\n");
}
    else if(can){
	printf("Tam giac can\n");
}
    else if(vuong){
	printf("Tam giac vuong\n");
}
    else{printf("Tam giac thuong\n");
}
    return 0;
}
float dientichtamgiac(float a, float b, float c){
    float p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(){
    float a,b,c,dientich;
    printf("Nhap a: ");scanf("%f",&a);
    printf("Nhap b: ");scanf("%f",&b);
    printf("Nhap c: ");scanf("%f",&c);
    Phanloaitamgiac(a,b,c);
    dientich=dientichtamgiac(a,b,c);
    if(dientich>=0){
	printf("Dien tich tam giac: %.2f\n",dientich);
}
    return 0;
}
