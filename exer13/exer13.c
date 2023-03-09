#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[100];
    int palandrome = 1;
    printf("entrez une chaine de caracteres  :");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';

    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] != str[(strlen(str) - 1) - i])
        {
            palandrome = 0;
            break;
        }
    }
    if (palandrome == 1)
    {
        printf("palandrome\n");
    }
    else
    {
        printf("nest pas palandrome\n");
    }

    return 0;
}