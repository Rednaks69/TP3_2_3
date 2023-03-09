#include <stdio.h>

int *fonc1(int *a, int *b)
{
    static int s;
    s = *a + *b;
    return &s;
}
int main()
{
    int a = 10;
    int b = 20;
    int *(*fonct1_ptr)(int *, int *) = fonc1;
    int *ptr;
    ptr = fonct1_ptr(&a, &b);

    printf("la valeur est : %d\n", *ptr);
    return 0;
}