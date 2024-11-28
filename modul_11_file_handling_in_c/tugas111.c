#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa
{
    char nama[100];
    char nim[20];
    char jurusan[100];
    char program_studi[100];
};

void inputBiodataMahasiswa()
{
    FILE *file;
    file = fopen("datamahasiswa.txt", "a"); // Membuka file untuk menambah data

    if (file == NULL)
    {
        printf("Error membuka file!\n");
        return;
    }

    struct Mahasiswa mhs;
    char lagi;

    do
    {
        // Menginputkan data mahasiswa
        printf("Masukkan data mahasiswa:\n");
        printf("Nama: ");
        scanf(" %[^\n]", mhs.nama); // Membaca string dengan spasi
        printf("NIM: ");
        scanf("%s", mhs.nim);
        printf("Jurusan: ");
        scanf(" %[^\n]", mhs.jurusan);
        printf("Program Studi: ");
        scanf(" %[^\n]", mhs.program_studi);

        // Menyimpan data ke dalam file
        fprintf(file, "Nama: %s\n", mhs.nama);
        fprintf(file, "NIM: %s\n", mhs.nim);
        fprintf(file, "Jurusan: %s\n", mhs.jurusan);
        fprintf(file, "Program Studi: %s\n\n", mhs.program_studi); // Baris kosong sebagai pemisah

        // Menanyakan apakah ingin menambah data mahasiswa lagi
        printf("Apakah Anda ingin menambahkan data mahasiswa lagi? (y/n): ");
        scanf(" %c", &lagi);
    } while (lagi == 'y' || lagi == 'Y');

    fclose(file); // Menutup file
}

int main()
{
    inputBiodataMahasiswa();
    printf("Data mahasiswa telah disimpan ke dalam file 'datamahasiswa.txt'.\n");
    return 0;
}