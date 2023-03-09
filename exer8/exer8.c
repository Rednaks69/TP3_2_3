#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int *saisir(int tab[])
{
    static int n;
    printf("entrez la valeur de n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 20 + 1;
    }
    return &n;
}

void affiche()
{
    int tab[MAX];
    int *ptr;

    int *(*fonct1_ptr)(int[]) = saisir;
    ptr = (*fonct1_ptr)(tab);

    for (int i = 0; i < *ptr; i++)
    {
        printf("%d  ", tab[i]);
    }
    printf("\n");
}
void wrapper(void (*fonct)())
{
    fonct();
}

int main(int argc, char *argv[])
{
    wrapper(affiche);
    return 0;
}
