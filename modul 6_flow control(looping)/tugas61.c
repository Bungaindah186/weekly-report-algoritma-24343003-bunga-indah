#include <stdio.h>

int main()
{
    printf("deret bilangan genap dari 0 sampai 50\n");
    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d", i);
        }
    }

    printf("\n\nderet bilangan ganjil dari 0 sampai 50\n");
    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            printf(" %d", i);
        }
    }

    return 0;
}
