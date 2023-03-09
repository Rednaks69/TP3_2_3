#include <stdio.h>
void addition(int a, int b)
{
    printf("Addition est %d\n", a + b);
}
void soustraction(int a, int b)
{
    printf("Subtraction est %d\n", a - b);
}
void multiplication(int a, int b)
{
    printf("Multiplication est %d\n", a * b);
}

int main()
{
    // fun_ptr_arr is an array of function pointers
    void (*fun_ptr_arr[])(int, int) = {addition, soustraction, multiplication};
    int ch, a = 15, b = 10;

    printf("Entrez votre choix: 0 pour addition, 1 pour soustraction and 2 "
           "pour multiplication\n");
    scanf("%d", &ch);

    if (ch > 2)
        return 0;

    (*fun_ptr_arr[ch])(a, b);

    return 0;
}