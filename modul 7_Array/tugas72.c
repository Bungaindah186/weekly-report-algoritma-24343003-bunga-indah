#include <stdio.h>

int main()
{
    int banyak_mahasiswa;

    printf("input banyak mahasiswa :");
    scanf("%d", &banyak_mahasiswa);

    char nama_mahasiswa[banyak_mahasiswa][100];

    for (int i = 0; i < banyak_mahasiswa; i++)
    {
        printf("input nama mahasiswa ke %d:", i + 1);
        fgetchar();
        scanf(" %[^\n]s", nama_mahasiswa[i]);
        // fgets(nama_mahasiswa[i], sizeof(nama_mahasiswa[i]), stdin);
    }

    printf("\nnama mahasiswa yang dimasukan\n");
    for (int i = 0; i < banyak_mahasiswa; i++)
    {
        printf("Nama mahasiswa ke-%d : %s\n", i + 1, nama_mahasiswa[i]);
    }

    return 0;
}