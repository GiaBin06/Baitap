#include<stdio.h>
 int main(){
  char ten_mat_hang[100];
float trong_luong;
    int ma_chat_luong,don_gia,so_luong;
printf("Ghi ten mat hang vao: "); scanf("%s", &ten_mat_hang);
printf("nhap trong luong: "); scanf("%f", &trong_luong);
  printf("nhap ma chat luong vao: "); scanf("%d", &ma_chat_luong);
  printf("nhap don gia: "); scanf("%d", &don_gia);
  printf("nhap so luong: "); scanf("%d", &so_luong);
 
  printf("\nThong Tin Mat Hang");
  printf("\nTen mat hang: %s",  ten_mat_hang);
  printf("\nTrong luong cua mat hang: %f",  trong_luong);
  printf("\nMa chat luong: %d",  ma_chat_luong);
  printf("\nDon gia: %d",  don_gia);
  printf("\nSo luong: %d",  so_luong);
  return 0;
 }
