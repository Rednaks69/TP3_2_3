#include <stdio.h>
void incrementerParDeux(int *a)
{
    *a += 2;
}
int main(int argc, char *argv[])
{
    int val = 10;
    incrementerParDeux(&val);
    printf("%d\n", val);
    return 0;
}

// 1 - le programme affiche 10
// 2 - lincrementation ne marchepas et la valeur val ne change pas
// puisque la fonction fais une copie de la variable,
// 3- pour que la fonction incremente change la variale dans le programme pricipale
// il faux que le passage soit par adresse non pas par valeur