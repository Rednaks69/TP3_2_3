#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*------------------------------------------
// execution avec
// gcc -o exer4 exer4.c -lm
// ./exer4
------------------------------------------*/

void resoudre(double *a, double *b, double *c)

{
    double dis;
    dis = pow(*b, 2) - 4 * (*a) * (*c);
    if (dis < 0)
    {
        printf("delta negatif\nresultats imaginaire\n");
        printf("le racine 1 : %.2f+%.2lfj", -(*b) / (2 * (*a)), sqrt(-(dis)) / (2 * (*a)));
        printf("\nle racine 2 : %.2f+%.2lfj\n", -(*b) / (2 * (*a)), -sqrt(-dis) / (2 * (*a)));
    }
    else if (dis == 0)
    {
        printf("delta egal a zero\nresultat reel unique  ");
        printf("%.2f\n", (-(*b)) / (2 * (*a)));
    }
    else
    {
        printf("delta positif\nresultats reels\n");
        printf("le racine 1 : %.2f", (-(*b) + sqrt((dis))) / (2 * (*a)));
        printf("\nle racine 2 : %.2f\n", (-(*b) - sqrt((dis))) / (2 * (*a)));
    }
}

int main(int argc, char const *argv[])
{
    double *a = (double *)malloc(sizeof(double));
    double *b = (double *)malloc(sizeof(double));
    double *c = (double *)malloc(sizeof(double));

    printf("\nresoulution d'equation de seconde degree de la forme de ax^2+bx+c = 0 \n");
    printf("Entrez les valeur de a, b et c respectivement :  \n");
    scanf("%lf%lf%lf", a, b, c);
    resoudre(a, b, c);
    free(a);
    free(b);
    free(c);
    return 0;
}