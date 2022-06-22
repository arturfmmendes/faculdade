/*
A primeira linha contém um inteiro N, o número de premiados. 
A segunda linha contém N inteiros Ti, 
indicando os tamanhos solicitados pelos premiados, sendo que Ti = 1 representa o tamanho pequeno e Ti = 2 
representa o tamanho médio. A terceira linha contém um inteiro P, o número de camisetas de tamanho pequeno 
produzidas. A quarta e última contém um inteiro M, o número de camisetas de tamanho médio produzidas.

Seu programa deve produzir uma única linha, contendo um único caractere, que deve ser a letra maiúscula 'S' 
se todos os premiados serão atendidos com a camiseta do tamanho que escolheram, ou a letra maiúscula 'N' caso 
contrário.

Restrições
1 ≤ N ≤ 1000
0 ≤ P ≤ 1000
0 ≤ M ≤ 1000
N ≤ P + M
1 ≤ Xi ≤ 2 para 1 ≤ i ≤ N

Informações sobre a pontuação
Para um conjunto de casos de testes valendo 20 pontos, 1 ≤ N ≤ 10.
Exemplos

Entrada
5
1 1 2 1 2
3
2
Saída
S
	
Entrada
4
2 2 2 2
1
3
Saída
N
	*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int troubleshooting(int premiados, int Pps, int Mps);

int main(void)
{
    int numPremiados, Pgrafica, Mgrafica;
    char tipos[2000];
    
    //taking input from user
    //number of shirts
    printf("numero de premiados\n");
    scanf(" %d", &numPremiados);

    // type of shirts equal to number of shirts
    printf("tipos das camisas:\n");
    scanf(" %[^\n]", tipos);
    //how many of each type that the factory made
    //P
    printf("numero de P feitas\n");
    scanf("%d", &Pgrafica);
    //M
    printf("numero de M feitas\n");
    scanf("%d", &Mgrafica);
    //N <= P + M
    
    int error = troubleshooting(numPremiados, Pgrafica, Mgrafica);
    if (error != 0) return error;

    int Ppedidos = 0, Mpedidos = 0;
    //imprimir 'S' se a soma do numero de camisas M e P pedidos for igual ao numero impresso pela grafica
    //tratar string 
    for (int i = 0; tipos[i] != '\0'; i++)
    {

        if ((int) tipos[i] == 49)
        {
            Ppedidos++;
        } 

        if ((int) tipos[i] == 50) 
        {
            Mpedidos++;
        }

    }    

    //imprimir 'N' se nap for igual
    if (Mpedidos != Mgrafica || Ppedidos != Pgrafica) printf("N");
    else printf("S");

    return 0;
}

int troubleshooting(int premiados, int Pps, int Mps)
{
    if (premiados < 1 || premiados > 1000) return 1;

    if (Pps < 0 || Pps > 1000) return 2;

    if (Mps < 0 || Mps > 1000) return 3;

    if (premiados > Pps + Mps) return 4;

    return 0;
}
