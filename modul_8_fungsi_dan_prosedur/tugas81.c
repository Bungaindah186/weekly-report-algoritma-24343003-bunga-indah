#include <stdio.h>

int perkalian(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    return a + perkalian(a, b - 1);
}

int main()
{
    int bil1, bil2;

    printf("Masukan bilangan pertama:");
    scanf(" %d", &bil1);
    printf("Masukan bilangan kedua: ");
    scanf(" %d", &bil2);

    if (bil1 < 0 || bil2 < 0)
    {
        printf("Hanya mendukung bilangna positif\n");
    }

    int hasil = perkalian(bil1, bil2);

    printf("hasil perkalian %d x %d = %d\n", bil1, bil2, hasil);

    return 0;
}