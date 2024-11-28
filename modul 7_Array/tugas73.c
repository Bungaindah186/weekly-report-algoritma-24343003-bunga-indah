#include <stdio.h>
#include <string.h>

int main()
{
    const char username[] = "bunga radit";
    const char password[] = "1018";

    char input_username[50];
    char input_password[50];

    printf("login akun anda\n");

    printf("masukan Username: ");
    scanf(" %[^\n]s", input_username);

    printf("masukan password:");
    scanf(" %s", input_password);

    if (strcmp(input_username, username) == 0 && strcmp(input_password, password) == 0)
    {
        printf("Berhasil login\n");
    }
    else
    {
        printf("maaf password anda salah\n");
    }

    return 0;
}