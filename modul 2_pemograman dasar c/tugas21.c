#include <stdio.h>

int main()
{
    char name[35];
    printf("hello,siapa name lengkapmu?\n");
    scanf(" %34[^\n]", name);
    printf("selamat datang %s dalam pemograman\n", name);

    return 0;
}