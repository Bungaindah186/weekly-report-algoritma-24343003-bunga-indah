#include <stdio.h>

int main()
{
    int jumlah_mahasiswa = 20;
    float nilai_mahasiswa[20];
    float total = 0.0, rata_rata;

    printf("Masukkan nilai untuk mahasiswa (0-100):\n");

    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        while (1)
        {
            printf("Nilai mahasiswa ke-%d: ", i + 1);
            scanf("%f", &nilai_mahasiswa[i]); // Memastikan akses ke indeks array

            if (nilai_mahasiswa[i] >= 0 && nilai_mahasiswa[i] <= 100)
            {
                break;
            }
            else
            {
                printf("Nilai harus antara 0 hingga 100. Coba lagi.\n");
            }
        }

        total += nilai_mahasiswa[i];
    }

    rata_rata = total / jumlah_mahasiswa;

    printf("\nNilai Mahasiswa:\n");
    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        printf("Mahasiswa ke-%d: %.2f\n", i + 1, nilai_mahasiswa[i]);
    }

    printf("\nRata-rata nilai mahasiswa: %.2f\n", rata_rata);

    return 0;
}