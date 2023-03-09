#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[100], strResult[100];
    printf("entrez une chaine de caracteres  :");
    fgets(str, 100, stdin);
    for (int i = 0; i < strlen(str); i++)
    {
        strResult[i] = str[(strlen(str) - 1) - i];
    }
    printf("resulta: %s\n", strResult);
    return 0;
}