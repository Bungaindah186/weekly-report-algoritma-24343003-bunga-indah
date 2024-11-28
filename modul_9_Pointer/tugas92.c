#include <stdio.h>
#include <string.h>

int main()
{
    char kalimat[50], kebalikannya[50];
    int panjang;
    printf("Masukan Kalimat: ");
    scanf("%s", kalimat);

    panjang = strlen(kalimat);

    for (int i = 0; i < panjang; i++)
    {
        kebalikannya[i] = kalimat[panjang - 1 - i];
    }

    kebalikannya[panjang] = '\0';

    printf("Kebalikannya: %s\n", kebalikannya);

    return 0;
}