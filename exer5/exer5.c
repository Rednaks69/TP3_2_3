#include <stdio.h>

void fonc1(int a)
{
    printf("la Valeur de a est %d\n", a);
}
int main(int argc, char *argv[])
{
    void (*fonct1_ptr)(int) = fonc1; // line 7
    (fonct1_ptr)(10);                // line 8
    return 0;
}

/*
1- la Valeur de a est 10
*/
/*
2-
- la fonction fonct1_ptr(int) est un pointeur sur fonction de meme type que la fonction pointE
- meme si dans la fonction fonc1 on na pas utiliser de pointeur comme retour ou argument
on peux pointer une fonction sur cete dernierre
*/
/*
3- le output ne change pas
le syntax de pointeur sur fonction est un peux different du syntax normal de pointeurs

*/