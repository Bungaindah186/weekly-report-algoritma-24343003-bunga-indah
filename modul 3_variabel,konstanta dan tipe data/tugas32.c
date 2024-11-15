#include <stdio.h>
int main()
{
    // deklarasi variabel
    float celcius, kelvin, fahrenheit, reamur;

    // masukan inputan data
    printf("masukan inputan celcius: ");
    scanf(" %f", &celcius);

    // rumus variabel
    kelvin = celcius + 273.15;

    // rumus variabel
    fahrenheit = (celcius * 1.8) + 32;

    // ruus variabel
    reamur = celcius * 0.8;

    // hasil keluaran output
    printf("inputan dalam calsius=%.2f c\n", celcius);
    printf(" dalam kelvin        =%.2f K\n", kelvin);
    printf("dalam fahrenheit     =%.2f F\n", fahrenheit);
    printf("dalam reamur         =%.2f R\n", reamur);

    return 0;
}