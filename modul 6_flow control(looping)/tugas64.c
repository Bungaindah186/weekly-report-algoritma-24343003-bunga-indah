#include <stdio.h>

int main()
{
    int saldo_ATM = 175000;
    int minimal_saldo = 50000;
    int pilihan, jumlah;
    char nama_akun[] = "hatori";
    char no_rek[] = "0123";

    printf("\nselamat datang di ATM\n");
    printf("No Rekening : %s\n", no_rek);
    printf("Nama AKun : %s\n", nama_akun);

    do
    {
        printf("Manu Pilihan\n");
        printf("1) cek saldo\n");
        printf("2) setoran\n");
        printf("3) penarikan tunai\n");
        printf("4) Exit\n");
        printf("Masukan pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            printf("\nsaldo anda saat ini : %d\n", saldo_ATM);
            break;
        case 2:
            printf("Masukan jumlah setoran:Rp. ");
            scanf(" %d", &jumlah);
            if (jumlah <= 0)
            {
                printf("jumlah setoran tidak valid\n");
            }
            else
            {
                saldo_ATM += jumlah;
                printf("setoran anda berhasil, saldo anda saat ini :Rp. %d\n", saldo_ATM);
            }
            break;
        case 3:
            printf("Masukan jumlah penarikan :Rp ");
            scanf(" %d", &jumlah);
            if (jumlah <= 0)
            {
                printf("jumlah penarikan tidak valid\n");
            }
            else if (saldo_ATM - jumlah < minimal_saldo)
            {
                printf("penarikan saldo gagal minimal Rp %d\n", minimal_saldo);
            }
            else
            {
                saldo_ATM -= jumlah;
                printf("penarikan anda berhasil, saldo anda saat ini ; Rp %d\n", saldo_ATM);
            }
            break;
        case 4:
            printf("Terima kasih telah melakukan layanan ATM\n");
            break;

        default:
            printf("\npilihan tidak valid,silahkan pilih menu yang tersediah\n");

            break;
        }
    } while (pilihan != 4);

    return 0;
}