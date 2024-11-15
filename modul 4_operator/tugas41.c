#include <stdio.h>
int main()
{
    // deklarasi konstanta
    int jam;
    int menit;
    int detik;
    int waktu_dalam_detik;
    // masukan jumlah waktu
    printf("masukan jumlah waktu dalam detik: ");
    scanf("%d", &waktu_dalam_detik);

    jam = waktu_dalam_detik / 3600;
    menit = (waktu_dalam_detik / 60) % 60;
    detik = waktu_dalam_detik % 60;

    // hasil output
    printf("jam    : %d\n", jam);
    printf("menit  : %d\n", menit);
    printf("detik  : %d\n", detik);

    return 0;
}