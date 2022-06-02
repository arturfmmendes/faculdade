/* Escreva um programa que, a partir de um nome informado pelo usuário, exiba suas iniciais.

As  iniciais  são  formadas  pela  primeira  letra  de  cada  nome,  sendo  que  todas  deverão 
aparecer em maiúsculas na saída do programa. Note que os conectores e, do, da, dos, das, 
de,  di,  du  não  são  considerados  nomes  e,  portanto,  não  devem  ser  considerados  para  a 
obtenção  das  iniciais.  As  iniciais  devem  ser  impressas  em  maiúsculas,  ainda  que  o  nome 
seja entrado todo em minúsculas. Exemplos: 
José Carlos Souza => JCS 
Nome do Fulano => NF 
Heloísa Martins Vieira => HMV
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char * getString(char pergunta[100]);

int main(void)
{
    // pegar input do usuario
    char *iniciais;
    int contIniciais = 0;
    
    char *vet = getString("Vetor: ");
 
    //passar pela string toda
    int tamVet = strlen(vet);


    for (int i = 0; i <= tamVet; i++ )
    {
        //pegar o primeiro caracter da string e colocar em uma string de ponteiro dinamica
        if (i == 0){

            iniciais = malloc(sizeof(char));
            *iniciais = toupper(vet[i]);
            contIniciais++;
        }
        
        //pegar char depois do espaço e colocar na prox casa da string
        else if (vet[i - 1] == ' ')
        {   
            //se o 3o(no caso de 'e') ou o 4o(no caso de 'de') elemento antes deste char for espaco saia 
            if (vet[i + 2] == ' ' || vet[i + 3] == ' ') continue;
            //senao adicione o vet[i no endereco de iniciais + o contador delas]
            realloc(iniciais, contIniciais + 1);
            *(iniciais + contIniciais) = toupper(vet[i]);
            contIniciais++;
        }
    }  

    printf("%s", iniciais);
    
    return 0;
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