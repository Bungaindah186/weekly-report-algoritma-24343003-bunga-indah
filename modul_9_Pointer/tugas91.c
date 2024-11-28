#include <stdio.h>
#include <string.h>

int main()
{
    char *kalimat = "BORLAND";
    char *ptr = kalimat + strlen(kalimat) - 1;
    char *start = kalimat;

    while (ptr >= start)
    {
        printf("%s\n", ptr);
        ptr--;
    }

    return 0;
}