#include <stdio.h>
int main()
{
    // inputan
    char nama_pembeli[30];
    char nama_barang[30];
    float harga_barang_satuan;
    int jumlah_barang_yang_dibeli;
    float harga_total;

    // penjumlahan harga total
    harga_total = harga_barang_satuan * jumlah_barang_yang_dibeli;

    // hasil output
    printf("nama_pembelian: ");
    scanf(" %s", nama_pembeli);
    printf("nama_barang: ");
    scanf(" %s", nama_barang);
    printf("harga_barang_satuan: ");
    scanf(" %f", &harga_barang_satuan);
    printf("jumlah_barang_yang_dibeli: ");
    scanf(" %i", &jumlah_barang_yang_dibeli);

    // penjumlahan harga total
    harga_total = harga_barang_satuan * jumlah_barang_yang_dibeli;
    printf("harga_total = %.2f ", harga_total);

    return 0;
}