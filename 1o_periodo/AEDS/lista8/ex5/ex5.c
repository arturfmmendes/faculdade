/*Valida e corrige número de telefone. Faça um programa que leia um número de telefone, e 
corrija  o  número  no  caso  deste  conter  somente  8  dígitos,  acrescentando  o  '9'  na  frente.  O 
usuário pode informar o número com ou sem o traço separador. 
Valida e corrige número de telefone 
Telefone: 8700-3001 
Telefone possui 8 dígitos. Vou acrescentar o digito nove na frente. 
Telefone corrigido sem formatação: 987003001 
Telefone corrigido com formatação: 98700-3001 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * getString(char pergunta[100]);

void limpaNumero(char vetor[]);

int main(void)
{
    //variaveis
    char *telefone = getString("Telefone: ");
    
    limpaNumero(telefone);

    int tam = strlen(telefone);
    
    if (tam < 9){

        realloc(telefone, (tam + 1) * sizeof(char));
        
        for (int i = tam - 1; telefone[i] != '\0'; i--){
            
            telefone[i + 1] = telefone[i];
        }
        tam++;
        telefone[0] = '9';
        printf("'9' colocado\n" ); 
    }

    if (telefone[5] != '-'){

        realloc(telefone, (tam + 1) * sizeof(char));
        for (int i = tam - 1; i >= 5; i--){

            telefone[i + 1] = telefone[i];
        }
        tam++;
        telefone[5] = '-';
        printf("'-' colocado\n");
    }

    printf("%s", telefone);

    return 0;
}

void limpaNumero(char vetor[]){

    for (int i = 0; vetor[i] != '\0'; i++){
        
        if (vetor[i] == '-' || vetor[i] == '(' || vetor[i] == ')'){
            
            for (int j = i; vetor[j] != '\0'; j++){
                vetor[j] = vetor[j + 1];
            }
        }
    }

}

char * getString(char pergunta[100]){
       
    char vetor[100];
    printf("%s", pergunta);
    scanf("%[^\n]", vetor);

    char *v2;
    int tamanho = strlen(vetor);
    for (int i = 0; i <= tamanho; i++){

        if (i == 0)
        {
            v2 = malloc(sizeof(char));
            *v2 = vetor[i];
            continue;
        }
        
        realloc(v2, i + 1);
        *(v2 + i) = vetor[i];
    }

    return v2;
}