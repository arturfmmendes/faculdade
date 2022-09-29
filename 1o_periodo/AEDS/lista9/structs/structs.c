    //programa para gerar declaracoes de structs aleatorias
    /*
    {
        {
            ALEATORIO,
            ALEATORIO,
            ALEATORIO
        }
    }
    ESTRUTURA BASE*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int getInt(char pergunta[]);

void imprimirInteiro(void);

void imprimirFloat(void);

void imprimirBool(void);

void imprimirChar(void);

void imprimirString(void);

int main(void)
{
    srand(time(0));
    //RECEBER numero de structs desejado
    int quantidade = getInt("Quantidade de structs: ");
    //RECEBER numero de parametros por struct
    int qtdParametros = getInt("Quantidade de parametros: ");
    
    //RECEBER tipo de cada parametro
    
    int tiposParam[qtdParametros];

    for (int i = 0; i < qtdParametros; i++)
    {
        tiposParam[i] = getInt("1 - inteiro\n2 - real\n3 - bool\n4 - char\n5 - String\n");
    }

    //gerador de texto aleatorio
    //por cada parametro
    //IMPRIMIR structs
    printf("\n");
    printf("{\n");
    for (int i = 0; i < quantidade; i++)
    {   
        //chaves iniciais e espaco
        printf("    {\n");

        for (int i = 0; i < qtdParametros;i++)
        {
            printf("        ");
            switch(tiposParam[i])
            {
                //se tipo int faca isso
                case 1:
                    imprimirInteiro();
                    break;
                //se tipo float faca isso    
                case 2:
                    imprimirFloat();
                    break;
                //se tipo bool faca isso 
                case 3:
                    imprimirBool();
                    break;
                //se tipo char faca isso   
                case 4:
                    imprimirChar();
                    break;
                case 5:
                    imprimirString();
                    break; 
            }
            (i < qtdParametros - 1) ? printf(",\n"): printf("\n"); 
        }
        //imprimir chaves finais
        (i < quantidade - 1) ? printf("    },\n"): printf("    }\n");
    }
    printf("}\n");
    scanf("%d");
}

int getInt(char pergunta[]){

    int integer;

    printf("%s", pergunta);
    scanf("%i", &integer);

    return integer;

}

void imprimirInteiro(void){

    int resp;
    for (int i = 0; i < 3; i++)
    {
        resp = rand() % 10;

        printf("%d", resp);
    }
}

void imprimirFloat(void){
    int num;

    for (int i = 0; i < 3; i++)
    {
        num = rand() % 10;
        printf("%d",num);
    }
    printf(".");
    for (int i = 0; i < 2; i++)
    {
        num = rand() % 10;
        printf("%d",num);
    }
}

void imprimirBool(void){
    int num = rand() % 2;
    (num == 1) ? printf("true"):printf("false");
}

void imprimirChar(void){
    int num = rand() % 26;
    num += 65;
    char ch = num;
    printf("%c", ch);
}

void imprimirString(void){
    int num;
    char ch;
    printf("%c", '"');
    for (int i = 0; i < 7; i++)
    {
        num = rand() % 26;
        num += 97;
        ch = num;
        printf("%c", ch);
    } 
    printf("%c", '"');
}