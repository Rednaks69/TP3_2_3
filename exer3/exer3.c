#include <stdio.h>
int *affectConst()
{
    static int A = 30;

    return (&A);
}
int main(int argc, char *argv[])
{
    int *ptr;
    ptr = affectConst();
    printf("%d\n", *ptr);
    return 0;
}

/*
1- la fonction affectConst renvois un pointeur A a la sortie, ce dernier
s'efface a la sortie de la fonction affectConst
*/

/*
2-  une des methodes pour remedier cette erreur , est que obliger la fonction affectConst
a rendre une adresse statique en ajoutant le mot static devant la declaration de la variable A
*/