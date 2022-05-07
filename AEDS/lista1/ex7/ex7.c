#include <stdio.h>

int main (void)
{

    float x;
    float y;
//pedindo variavel
    printf("Valor de X: ");
    scanf("%f", &x);
//calculo e impressão
    if (x <= 1)
    {
        y = 1;
    }
    else if (x > 1 && x <= 2)
    {
        y = 2;
    }
    else if (x > 2 && x <= 3)
    {
        y = x * x;
    }
    else
    {
        y = x * x * x;
    }
    printf("%.1f\n", y);
}