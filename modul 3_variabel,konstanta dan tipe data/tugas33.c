#include <stdio.h>
int main()
{
    // deklarasi variabel
    int diameter = 12.0;
    float radius = diameter / 2.0;
    const float phi = 3.14;
    float volume;
    float luas;
    // rumus volume bola
    volume = (4.0 / 3.0) * phi * radius * radius * radius;

    // rumus luas permukaan bola
    luas = 4.0 * phi * radius * radius;

    // hasil output
    printf("volume bola          :%.2f cm^3\n", volume);
    printf("luas permukaan bola  :%.2f cm\n ", luas);

    return 0;
}