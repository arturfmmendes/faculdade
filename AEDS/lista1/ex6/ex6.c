#include <stdio.h>

int main(void)
{

    float coefA;
    float coefB;
    float x;

    printf("Coeficiente 'a': ");
    scanf("%f", &coefA);

    printf("Coeficiente 'b': ");
    scanf("%f", &coefB);

    x = (- coefB / coefA);

    printf("%.2f\n", x);

}