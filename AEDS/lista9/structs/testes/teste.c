#include <stdio.h>

int getInt(char pergunta[]){

    int integer;

    printf("%s", pergunta);
    scanf("%i", &integer);

    return integer;

}

int main(void)
{
    int qtdParametros = getInt("Digite num: ");
    printf("\n");
    //chaves iniciais e espaco
    printf("{\n    {\n");

    for (int i = 0; i < qtdParametros;i++)
    {
        printf("        ");
        printf("asdasda");
        (i < qtdParametros - 1) ? printf(",\n"): printf("\n");
    }
    //imprimir chaves finais
    printf("    }\n}");    
}