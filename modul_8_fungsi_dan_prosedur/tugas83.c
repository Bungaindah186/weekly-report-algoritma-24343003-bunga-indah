#include <stdio.h>
#define PI 3.14159

float luas(float radius)
{
    return PI * radius * radius;
}

float keliling(float radius)
{
    return 2 * PI * radius;
}

int main()
{
    float radius, hasil_luas, hasil_keliling;

    printf("Program menghitung luas dan keliling lingkaran\n");
    printf("Masukan jari-jari: ");
    scanf(" %f", &radius);

    hasil_luas = luas(radius);
    hasil_keliling = keliling(radius);

    printf("Luas lingkaran: %.2f\n", hasil_luas);
    printf("Keliling lingkaran: %.2f\n", hasil_keliling);

    return 0;
}