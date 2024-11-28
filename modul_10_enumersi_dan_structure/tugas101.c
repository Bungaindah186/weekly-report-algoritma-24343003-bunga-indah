#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nomor_komputer, tebakan, percobaan;
    char bermain_lagi;

    srand(time(NULL));

    do
    {
        nomor_komputer = rand() % 20 + 1;
        percobaan = 0;

        printf("\nSelamat datang di permainan tebak nomor!\n");
        printf("saya telah memilih nomor antara 1 dan 20. coba tebak!\n");

        do
        {
            printf("Masukkn tebakan Anda: ");
            scanf("%d", &tebakan);
            percobaan++;

            if (tebakan < nomor_komputer)
            {
                printf("Nomor saya lebih besar!\n");
            }
            else if (tebakan > nomor_komputer)
            {
                printf("Nomor saya lebih kecil\n");
            }
            else
            {
                printf("Selamat, Anda benar! Nomor saya adalah %d.\n", nomor_komputer);
                printf("Anda membutuhkan %d percobaan untuk menebak nomor tersebut.\n", percobaan);
            }
        } while (tebakan != nomor_komputer);

        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %s", &bermain_lagi);

    } while (bermain_lagi == 'y');

    printf("Terima kasih telah bermain! sampai jumpa!\n");

    return 0;
}