#include <stdio.h>
int main()
{
    float dollar_1$ = 14250.0;
    float rupiah = 2500000.0;
    float dollar;

    printf("konverensi rupiah(Rp) ke dollar($): ");
    dollar = rupiah / dollar_1$;
    printf("$%.2f\n", dollar);
    return 0;
}