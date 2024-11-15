#include <stdio.h>
int main()
{

    float tarif_pertama = 15000;
    float tarif_baru = tarif_pertama * 0.5;
    float total_harga;
    int durasi = 3;
    int durasi_jam;

    total_harga = tarif_pertama + (durasi - 1) * tarif_baru;
    printf("total_harga untuk menonton 3 jam adalah Rp %.2f\n", total_harga);

    return 0;
}