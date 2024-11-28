#include <stdio.h>

float penjumlahan(float a, float b)
{
    return a + b;
}

float pengurangan(float a, float b)
{
    return a - b;
}
float perkalian(float a, float b)
{
    return a * b;
}
float pembagian(float a, float b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("menbagian dengan nol tidak valid/ ERROR");
    }

    return 0;
}

int main()
{
    int pilihan;
    float bil1, bil2, hasil;
    printf("program perhitungan Aritmetika\n");
    printf("1) penjumlahan\n");
    printf("2) pengurangan\n");
    printf("3) perkalian\n");
    printf("4) pembagian\n");
    printf("pilih operasi (1/2/3/4/): ");
    scanf("%d", &pilihan);

    printf("Masukan bilangan pertama: ");
    scanf("%f", &bil1);
    printf("Masukan bilangan kedua: ");
    scanf("%f", &bil2);

    switch (pilihan)
    {
    case 1:
        hasil = penjumlahan(bil1, bil2);
        printf("Hasil penjumlahan: %.2f\n", hasil);
        break;
    case 2:
        hasil = pengurangan(bil1, bil2);
        printf("Hasil pengurangan: %.2f\n", hasil);
        break;
    case 3:
        hasil = perkalian(bil1, bil2);
        printf("Hasil perkalian: %.2f\n", hasil);
        break;
    case 4:
        hasil = pembagian(bil1, bil2);
        if (bil2 != 0)
        {
            printf("Hasil pembagian: %.2f\n", hasil);
        }
        break;
    default:
        printf("Pilihan tidak valid.\n");
    }

    return 0;
}