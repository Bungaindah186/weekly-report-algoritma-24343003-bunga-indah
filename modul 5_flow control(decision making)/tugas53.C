#include <stdio.h>
#include <math.h> // Untuk fungsi pow dan M_PI

// Fungsi untuk menghitung luas permukaan bola
double luasPermukaanBola(double radius)
{
    return 4 * M_PI * pow(radius, 2);
}

// Fungsi untuk menghitung luas permukaan kubus
double luasPermukaanKubus(double sisi)
{
    return 6 * pow(sisi, 2);
}

// Fungsi untuk menghitung luas permukaan balok
double luasPermukaanBalok(double panjang, double lebar, double tinggi)
{
    return 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
}

// Fungsi untuk menghitung luas permukaan tabung
double luasPermukaanTabung(double radius, double tinggi)
{
    return 2 * M_PI * radius * (radius + tinggi);
}

int main()
{
    int pilihan;
    printf("Pilih bentuk geometri untuk menghitung luas permukaannya:\n");
    printf("1. Luas Permukaan Bola\n");
    printf("2. Luas Permukaan Kubus\n");
    printf("3. Luas Permukaan Balok\n");
    printf("4. Luas Permukaan Tabung\n");
    printf("Masukkan pilihan Anda (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
    {
        double radius;
        printf("Masukkan jari-jari bola: ");
        scanf("%lf", &radius);
        double luas = luasPermukaanBola(radius);
        printf("Luas permukaan bola adalah: %.2lf\n", luas);
        break;
    }
    case 2:
    {
        double sisi;
        printf("Masukkan panjang sisi kubus: ");
        scanf("%lf", &sisi);
        double luas = luasPermukaanKubus(sisi);
        printf("Luas permukaan kubus adalah: %.2lf\n", luas);
        break;
    }
    case 3:
    {
        double panjang, lebar, tinggi;
        printf("Masukkan panjang balok: ");
        scanf("%lf", &panjang);
        printf("Masukkan lebar balok: ");
        scanf("%lf", &lebar);
        printf("Masukkan tinggi balok: ");
        scanf("%lf", &tinggi);
        double luas = luasPermukaanBalok(panjang, lebar, tinggi);
        printf("Luas permukaan balok adalah: %.2lf\n", luas);
        break;
    }
    case 4:
    {
        double radius, tinggi;
        printf("Masukkan jari-jari tabung: ");
        scanf("%lf", &radius);
        printf("Masukkan tinggi tabung: ");
        scanf("%lf", &tinggi);
        double luas = luasPermukaanTabung(radius, tinggi);
        printf("Luas permukaan tabung adalah: %.2lf\n", luas);
        break;
    }
    default:
        printf("Pilihan tidak valid. Silakan pilih antara 1-4.\n");
    }

    return 0;
}
