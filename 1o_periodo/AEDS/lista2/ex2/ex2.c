#include <stdio.h>

int main(void)
{

    int quantidade = 0;
    int valor = 0;
    int negativos = 0;
    int positivos = 0;
    int nulos = 0;

    printf("Quantos números?\n");
    scanf("%d", &quantidade);

    for(int i = 0; i < quantidade; i++)
    {
        printf("Digite o %d° número:\n", i + 1);
        scanf("%d", &valor);
        if (valor < 0)
        {
            negativos++;
        }
        else if (valor == 0)
        {
            nulos++;
        }
        else
        {
            positivos++;
        }
    }
    float porcentPositivos = (positivos / (float)quantidade) * 100;

    float porcentNegativos = (negativos / (float)quantidade) * 100;

    float porcentNulos = (nulos / (float)quantidade) * 100;

    printf("%d(%.1f%%) positivo(s), %d(%.1f%%) negativo(s) e %d(%.1f%%) nulo(s)\n", positivos, porcentPositivos, negativos, porcentNegativos, nulos, porcentNulos);
return 0;
}
