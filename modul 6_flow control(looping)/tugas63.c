#include <stdio.h>

int main()
{
    int rows = 5;
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d", i * j);
        }
        printf("\n");
    }
    return 0;
}