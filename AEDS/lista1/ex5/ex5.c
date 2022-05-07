#include <stdio.h>

int main(void)
{

    float diaria;

    printf("Valor da diária: ");
    scanf("%f", &diaria);

//valor arrecadado com diaria cheia
    float totalDiaria = diaria * 38;

// valor diaria promocional
    float diariaP = diaria * 0.75;

//valor arrecadado com diaria promocional
    float totalDiariaP = diariaP * 60;

    printf("Diária promocional: %.2f\n", diariaP);
    printf("Valor arrecadado com 80%% de ocupação e diária promocional: %.2f\n", totalDiariaP);
    printf("Valor arrecadado com 50%% de ocupação e diária normal: %.2f\n", totalDiaria);
    printf("Diferença entre o valor arrecadado com a diária promoconal e o valor arrecadado com a diária normal: %.2f\n", totalDiaria - totalDiariaP);

}