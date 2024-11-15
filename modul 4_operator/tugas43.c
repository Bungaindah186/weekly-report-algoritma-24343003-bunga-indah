#include <stdio.h>
int main()
{
    // deklarasi variabel
    int nilai_presensi = 85;
    int nilai_praktek = 65;
    int nilai_UTS = 80;
    int nilai_UAS = 75;
    float nilai_presensi_bobot;
    float nilai_praktek_bobot;
    float nilai_UTS_bobot;
    float nilai_UAS_bobot;
    float nilai_akhir;

    // besaram bobot
    nilai_presensi_bobot = 0.1 * nilai_presensi;
    nilai_praktek_bobot = 0.2 * nilai_praktek;
    nilai_UTS_bobot = 0.3 * nilai_UTS;
    nilai_UAS_bobot = 0.4 * nilai_UAS;
    nilai_akhir = 0.1 * nilai_presensi + 0.2 * nilai_praktek + 0.3 * nilai_UTS + 0.4 * nilai_UAS;

    // hasil output
    printf("Nilai_presensi  : %2d\n", nilai_presensi);
    printf("Nilai_praktek   : %2d\n", nilai_praktek);
    printf("Nilai_UTS       : %2d\n", nilai_UTS);
    printf("Nilai_UAS       : %2d\n", nilai_UAS);

    // nilai akhir
    nilai_akhir = 0.1 * nilai_presensi + 0.2 * nilai_praktek + 0.3 * nilai_UTS + 0.4 * nilai_UAS;
    printf("Nilai Akhir     :%.f\n", nilai_akhir);

    return 0;
}