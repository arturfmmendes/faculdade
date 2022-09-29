#include <stdio.h>

int main(void)
{

    float nota;

//pedindo nota válida
    do
    {
        printf("Nota: ");
        scanf("%f", &nota);
    }while(nota < 0 || nota > 10);

//imprimindo resultado
    if (nota < 5)
    {
        printf("Insatisfatório\n");
    }
    else if (nota >= 5 && nota < 7)
    {
        printf("Regular\n");
    }
    else if (nota >= 7 && nota < 8)
    {
        printf("Bom\n");
    }
    else
    {
        printf("Ótimo\n");
    }

}