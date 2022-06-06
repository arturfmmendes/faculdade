/* O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo 
de  substituição  na  qual  cada  letra  do  texto  é  substituída  por  outra,  que  se  apresenta  no 
alfabeto  abaixo  dela  um  número  fixo  de  vezes.  Por  exemplo,  com  uma  troca  de  três 
posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente 
um  programa  que  faça  uso  desse  Código  de  César  (3  posições),  entre  com  uma  string  e 
retorne a string codificada. 
Exemplo: a ligeira raposa marrom saltou sobre o cachorro cansado 
Nova  string:  D  OLJHLUD  UDSRVD  PDUURP  VDOWRX  VREUH  R  FDFKRUUR  
                            FDQVDGR 
 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * getString(char pergunta[100]);

int main(void)
{

    int key = 3;
    char *frase = getString("Digite a frase a ser encriptada:\n");

    int tam = strlen(frase);

    for (int i = 0; i < tam; i++)
    {
        switch (frase[i])
        {
            case 'X': 
                frase[i] -= 23;
                break;
            case 'Y':
                frase[i] -= 23;
                break;
            case 'Z':
            case 'x':
            case 'y':
            case 'z':
        }
            
        (frase[i] >= 65 && frase[i] <= (90 - key)) || (frase[i] >= 97 && frase[i] <= (122 - key))) frase[i] += key;
        else if ((frase[i] >= 88 && frase[i] <= 90) || (frase[i] >= 120 && frase[i] <= 122)) frase[i] = frase[i] -  25;
    }
    printf("%s", frase);
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
