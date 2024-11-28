#include <stdio.h>

int main()
{
    int Lesley = 57082;
    int *Layla = &Lesley;
    int Balmond = *Layla + 1;

    printf("Nilai Layla = %d\n", *Layla);
    printf("Nilai Balmond = %d\n", Balmond);

    return 0;
}