#include <stdio.h>
#include <stdlib.h>

int creationTabAleatoire(int *n, int *s)
{

    int tab[*n];
    for (int i = 0; i < *n; i++)
    {
        tab[i] = (rand() % 20) + 1;
        *s += tab[i];
        printf("%d  ", tab[i]);
    }
    return *s;
}

int main(int argc, char *argv[])
{
    int s = 0, *n;
    printf("enter le nombre de cases: ");
    scanf("%d", n);
    s = creationTabAleatoire(n, &s);
    printf("\nla somme du tab est :%d\n", s);

    return 0;
}