//Querida Rosi. Não vou fazer para 40 pessoas infelizmente. È muito trabalho e a lógica é a mesma.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getInt(char pergunta[]);

typedef struct pessoa{

    char nome[40];
    int diaNiver;
    int mesNiver;
}pessoa;

int main(void)
{

    pessoa grupo[] = {
        {"Artur", 31, 5 }, {"Amanda", 10, 3 }, {"Julio",4,12}, {"Felipe",8,5}
    };

    int mesEscolhido = getInt("Mes(somente numero): ");
    int niver = 0;
    for (int i = 0; i < sizeof(grupo)/sizeof(grupo[0]); i++)
    {
        if (grupo[i].mesNiver == mesEscolhido)
        {
            printf("%s no dia %d\n", grupo[i].nome, grupo[i].diaNiver);
            niver++;
        }

    }
    
    if (niver == 0)
    {
        printf("Nao ha pessoas com aniversário nesta data");
    }
}

int getInt(char pergunta[]){

    int integer;

    printf("%s", pergunta);
    scanf("%i", &integer);

    return integer;

}