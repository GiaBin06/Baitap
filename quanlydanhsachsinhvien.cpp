#include <stdio.h>
#include <string.h>
struct sinhvien {
	char masv[20];
	char hoten[50];
	int tuoi;
	float diemtb;
	char ngaysinh[20];
};
void nhap1sv(struct sinhvien *sv){
	printf("Nhap ho ten: ");
	fgets(sv->hoten, sizeof(sv->hoten), stdin);
	sv->hoten[strcspn(sv->hoten, "\n")] = '\0';
	printf("Nhap ngay sinh: ");
	fgets(sv->ngaysinh, sizeof(sv->ngaysinh), stdin);
	sv->ngaysinh[strcspn(sv->ngaysinh, "\n")] = '\0';
	printf("Nhap ma sv: ");
	fgets(sv->masv, sizeof(sv->masv), stdin);
	sv->masv[strcspn(sv->masv, "\n")] = '\0';
	printf("Nhap diem TB: ");
	scanf("%f", &sv->diemtb);
	while(getchar()!='\n');
}
void nhapdanhsach(struct sinhvien ds[], int n){
	for(int i=0;i<n;i++){
		printf("\nNhap sinh vien thu %d:\n", i+1);
		nhap1sv(&ds[i]);
	}
}
void xuat1sv(struct sinhvien sv){
	printf("Ho ten: %s\n", sv.hoten);
	printf("Ngay sinh: %s\n", sv.ngaysinh);
	printf("Ma sv: %s\n", sv.masv);
	printf("Diem TB: %.2f\n", sv.diemtb);
}
void xuatdanhsach(struct sinhvien ds[], int n){
	for(int i=0;i<n;i++){
		printf("\nSinh vien thu %d:\n", i+1);
		xuat1sv(ds[i]);
	}
}
void timsvdiemcaonhat(struct sinhvien ds[], int n){
	if (n == 0) return;
	int maxindex = 0;
	for (int i = 1; i < n; i++){
		if (ds[i].diemtb > ds[maxindex].diemtb){
			maxindex = i;
		}
	}
	printf("\n--- SINH VIEN CO DIEM TRUNG BINH CAO NHAT ---\n");
	for(int i = 0; i<n; i++){
		if(ds[i].diemtb==ds[maxindex].diemtb){
			xuat1sv(ds[i]);
		}
	}
	printf("\n");
}
void sapxepgiamdan(struct sinhvien ds[], int n){
	for(int i = 0; i<n; i++){
		int max_idx = i;
		for (int j= i + 1; j<n; j++){
			if(ds[j].diemtb>ds[max_idx].diemtb){
				max_idx = j;
			}
		}
		if (max_idx != i){
			struct sinhvien temp = ds[i];
			ds[i] = ds[max_idx];
			ds[max_idx] = temp;
		}
	}
}
int main(){
	int n;
	printf("quan ly danh sach sinh vien\n");
	printf("nhap so luong sinh vien : ");
	scanf("%d", &n);
	while(getchar()!='\n');
	if (n <= 0 || n > 100){
		printf("so luong sinh vien khong hop le.\n");
		return 1;
	}
	struct sinhvien ds[100];
	nhapdanhsach(ds, n);
	printf("\n DANH SACH VUA NHAP \n");
	xuatdanhsach(ds, n);
	timsvdiemcaonhat(ds, n);
	sapxepgiamdan(ds, n);
	printf("\n DANH SACH SAU KHI SAP XEP \n");
	printf("(Theo Diem TB Giam Dan)\n");
	xuatdanhsach(ds, n);
	return 0;
}
