#include <stdio.h>

int main()
{
    printf("===kalkulator sederhana====\n");
    printf("a) penjumlahan\n");
    printf("b) pengurangan\n");
    printf("c) perkalian\n");
    printf("d) pembagian\n");
    printf("e) hasil bagi\n");
    printf("pilih operasi (a/b/c/d//e) : ");

    char pilihan;
    float angka1, angka2, hasil;

    printf("");
    scanf(" %c", &pilihan);

    printf("Masukan dua angka: ");
    scanf("%f %f", &angka1, &angka2);

    switch (pilihan)
    {
    case 'a':
        hasil = angka1 + angka2;
        printf("hasil penjumlahan : %.2f\n", hasil);
        break;
    case 'b':
        hasil = angka1 - angka2;
        printf("hasil pengurangan : %.2f\n ", hasil);
        break;
    case 'c':
        hasil = angka1 * angka2;
        printf("hasil perkalian : %.2f\n", hasil);
        break;
    case 'd':
        if (angka2 != 0)
        {

            hasil = angka1 / angka2;
            printf("hasil pembagian : %.2f\n ", hasil);
        }
        else
        {
            printf("Error : pembagian dengan nol tidak diperbolehkan\n");
        }
        break;
    case 'e':
        if (angka2 != 0)
        {
            int hasil_bagi = (int)angka1 / (int)angka2;
            printf("hasil bagi : %d\n", hasil_bagi);
        }
        else
        {
            printf("Error : pembagian dengan nol tidak diperbolehkan\n");
        }
        break;
    default:
        printf("Pilihan tidak valid.\n");
        
    }
    return 0;
}