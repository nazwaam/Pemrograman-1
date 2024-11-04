#include <stdio.h>

int main () {
    float nilaiPertama, nilaiKedua;

    printf("Masukkan Nilai Pertama  : ");
    scanf("%g", &nilaiPertama);
    printf("Masukkan Nilai Kedua    : ");
    scanf("%g", &nilaiKedua);
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"n", nilaiPertama, nilaiKedua, nilaiPertama + nilaiKedua);
    return 0;
}