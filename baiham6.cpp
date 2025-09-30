#include <iostream>
int tinhsothang(double tienbandau, double tiencanco, double laisuatthang){
    if (laisuatthang <= 0) return -1; 
    int sothang = 0;
    while (tienbandau < tiencanco){
        tienbandau += tienbandau * laisuatthang;
        sothang++;
    }
    return sothang;
}
int main() {
    double tienbd, tiencc, laisuat;

    std::cout << "Tien ban dau: "; std::cin >> tienbd;
    std::cout << "Tien can co: ";  std::cin >> tiencc;
    std::cout << "Lai suat moi thang (%): "; std::cin >> laisuat;

    int sothang = tinhsothang(tienbd, tiencc, laisuat / 100.0);

    if (sothang == -1) {
        std::cout << "Loi: Lai suat phai lon hon 0." << std::endl;
    } else {
        std::cout << "So thang gui it nhat: " << sothang << std::endl;
    }
    return 0;
}
