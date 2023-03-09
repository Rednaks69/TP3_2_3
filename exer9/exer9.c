#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b);

int main(int argc, char *argv[])
{
    int tab[] = {10, 5, 15, 12, 90, 80};
    int n = sizeof(tab) / sizeof(tab[0]), i;

    qsort(tab, n, sizeof(int), compare);

    for (i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");
    return 0;
}
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}