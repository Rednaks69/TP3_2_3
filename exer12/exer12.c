#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[100];
    char caract;
    int compte = 0;
    printf("entrez une chaine de caracteres  : ");
    fgets(str, 100, stdin);
    printf("enter le caractere a chercher ");
    scanf("%c", &caract);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == caract)
        {
            compte += 1;
        }
    }
    printf("%d\n", compte);
    return 0;
}