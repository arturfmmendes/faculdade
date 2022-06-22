/* Data  por  extenso.  Faça  um  programa  que  solicite  a  data  de  nascimento  (dd/mm/aaaa)  do 
usuário e imprima a data com o nome do mês por extenso.
Data de Nascimento: 03/03/1980 
Você nasceu em 03 de Março de 1980. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    //variaveis
    char dia[2], mes[2], ano[4];    
    char data[10];
    char meses[12][9] = {
        {'j','a','n','e','i','r','o'}, 
        {'f', 'e', 'v', 'e', 'r', 'e', 'i', 'r', 'o'}, 
        {'m', 'a', 'r', 'c', 'o'},
        {'a', 'b', 'r', 'i', 'l'},
        {'m', 'a', 'i', 'o'},
        {'j','u','n', 'h', 'o'},
        {'j', 'u', 'l', 'h', 'o'},
        {'a', 'g', 'o', 's', 't', 'o'},
        {'s', 'e', 't', 'e', 'm', 'b', 'r', 'o'},
        {'o', 'u', 't', 'u', 'b', 'r', 'o'},
        {'n', 'o', 'v', 'e', 'm', 'b', 'r', 'o'},
        {'d', 'e', 'z', 'e', 'm', 'b', 'r', 'o'}
    };
    

    //input do usuario
    
    printf("Data de nascimento: ");
    scanf(" %[^\n]", data);

    int mes1 = data[3] - 48;
    mes1 *= 10;

    int mes2 = data[4] - 48;

    int mesF = mes1 + mes2;

    printf("Você nasceu %c%c de %s de %c%c%c%c", data[0], data[1], meses[mesF - 1], data[6], data[7], data[8], data[9]);
    return 0;
}
