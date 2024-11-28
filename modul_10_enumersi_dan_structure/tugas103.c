#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MAHASISWA 100

struct Mahasiswa
{
    char npm[15];
    char nama[50];
    char tgl_lahir[15];
    char alamat[100];
    char hp[15];
};

void tampilkanData(struct Mahasiswa mhs[], int jumlah)
{
    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < jumlah; i++)
    {
        printf("%s %s %s %s %s\n", mhs[i].npm, mhs[i].nama, mhs[i].tgl_lahir, mhs[i].alamat, mhs[i].hp);
    }
}

int main()
{
    struct Mahasiswa mhs[MAX_MAHASISWA];
    int jumlahMahasiswa = 0;
    char lagi;

    do
    {
        printf("NPM: ");
        scanf("%s", mhs[jumlahMahasiswa].npm);
        printf("NAMA: ");
        scanf(" %[^\n]", mhs[jumlahMahasiswa].nama);
        printf("TGL LAHIR: ");
        scanf("%s", mhs[jumlahMahasiswa].tgl_lahir);
        printf("ALAMAT: ");
        scanf(" %[^\n]", mhs[jumlahMahasiswa].alamat);
        printf("HP: ");
        scanf("%s", mhs[jumlahMahasiswa].hp);

        jumlahMahasiswa++;

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &lagi);
    } while (lagi == 'y' && jumlahMahasiswa < MAX_MAHASISWA);

    tampilkanData(mhs, jumlahMahasiswa);

    return 0;
}