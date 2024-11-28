#include <stdio.h>

float potong(float totalpembelian)
{
    if (totalpembelian >= 1000000 && totalpembelian < 3000000)
    {
        return totalpembelian * 0.20;
    }
    else if (totalpembelian >= 3000000)
    {
        return totalpembelian * 0.35;
    }
    else
    {
        return 0;
    }
}
int main()
{
    float total_pembelian, besar_diskon, total_bayar;

    printf("Program Hitung Potong\n");
    printf("Total pembelian:Rp");
    scanf("%f", &total_pembelian);

    besar_diskon = potong(total_pembelian);
    total_bayar = total_pembelian - besar_diskon;

    printf("Besar diskon: Rp%.2f\n", besar_diskon);
    printf("Besar yang Harus Dibayarkan: Rp%.2f\n", total_bayar);

    return 0;
}