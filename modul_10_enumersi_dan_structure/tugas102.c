#include <stdio.h>
#include <string.h>

typedef struct
{
    int mulai_tanggal;
    int mulai_bulan;
    int akhir_tanggal;
    int akhir_bulan;
    char nama[20];
} Zodiak;

Zodiak zodiaks[] = {
    {20, 1, 18, 2, "AQUARIUS"},
    {19, 2, 20, 3, "PISCES"},
    {21, 3, 19, 4, "ARIES"},
    {20, 4, 20, 5, "TAURUS"},
    {21, 5, 20, 6, "GEMINI"},
    {21, 6, 22, 7, "CANCER"},
    {23, 7, 22, 8, "LEO"},
    {23, 8, 22, 9, "VIRGO"},
    {23, 9, 22, 10, "LIBRA"},
    {23, 10, 21, 11, "SCORPIO"},
    {22, 11, 21, 12, "SAGITTARIUS"},
    {22, 12, 19, 1, "CAPRICORN"}};

int tentukanZodiak(int tanggal, int bulan)
{
    for (int i = 0; i < 12; i++)
    {
        if ((bulan == zodiaks[i].mulai_bulan && tanggal >= zodiaks[i].mulai_tanggal) ||
            (bulan == zodiaks[i].akhir_bulan && tanggal <= zodiaks[i].akhir_tanggal))
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int tanggal, bulan, tahun;

    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tanggal, &bulan, &tahun);

    if (tanggal < 1 || tanggal > 31 || bulan < 1 || bulan > 12)
    {
        printf("Tanggal atau bulan tidak valid.\n");
        return 1;
    }

    int indeksZodiak = tentukanZodiak(tanggal, bulan);

    if (indeksZodiak != -1)
    {
        printf("Zodiak Anda adalah : %s\n", zodiaks[indeksZodiak].nama);
    }
    else
    {
        printf("Tanggal lahir tidak valid.\n");
    }

    return 0;
}