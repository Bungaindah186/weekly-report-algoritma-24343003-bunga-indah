#include <stdio.h>

void main()
{
    float total_pembeli;
    float diskon;
    float cashback;
    float total_akhir;

    printf("Masukan total pembeli : ");
    scanf("%f", &total_pembeli);

    if (total_pembeli > 125000)
    {
        diskon = 0.25 * total_pembeli;
        cashback = 5000.0;
    }
    else if (total_pembeli > 75000)
    {
        diskon = 0.15 * total_pembeli;
    }
    else
    {
        diskon = 0.05 * total_pembeli;
    }

    total_akhir = total_pembeli - diskon - cashback;

    printf("\nDiskon yang diberikan: Rp. %.2f", diskon);
    printf("\nCashback yang diberikan: Rp. %.2f", cashback);
    printf("\nTotal yang harus dibayar: Rp. %.2f\n", total_akhir);
}
