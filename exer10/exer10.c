#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[100];
    printf("entrez une chaine de caracteres  :");
    fgets(str, 100, stdin);
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}