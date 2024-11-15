#include <stdio.h>
int main()
{
    // deklarasi variabel
    float alas;
    float tinggi;
    float luas;
    // input panjang ajas dan tinggi
    printf("alas: ");
    scanf("%f", &alas);
    printf("tinggi: ");
    scanf("%f", &tinggi);

    // Hitung luas segitiga
    luas = 0.5 * alas * tinggi;
    // tampilkan hasil
    printf("luas %.f cm^2\n", luas);

    return 0;
}