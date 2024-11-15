#include <stdio.h>

int main()
{
    char name[35];
    int NIM;
    char prodi[35];
    char falkultas[35];
    int NilaiUTS;
    int NilaiUAS;
    int NilaiPratikum;
    int NilaiAkhir;

    printf("Name     :");
    scanf(" %[^\n]s", name);
    printf("NIM      :");
    scanf(" %i", &NIM);
    printf("Prodi    :");
    scanf(" %[^\n]s", prodi);
    printf("Falkultas:");
    scanf(" %[^\n]s", falkultas);
    printf("NilaiPratikum :");
    scanf(" %i", &NilaiPratikum);
    printf("NilaiUTS      :");
    scanf(" %i", &NilaiUTS);
    printf("NilaiUAS      :");
    scanf(" %i", &NilaiUAS);

    NilaiAkhir = NilaiPratikum + NilaiUTS + NilaiUAS;

    printf("NilaiAkhir    : %i\n", NilaiAkhir);

    return 0;
}