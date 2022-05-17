/*Crie um programa que leia a quantidade de veículos que uma locadora de veículos possui e 
o valor que ela cobra por cada aluguel, mostrando as informações pedidas a seguir: 
Sabendo-se que um terço dos veículos são alugados por mês, exiba o faturamento anual 
da locadora 
• Quando o cliente atrasa a entrega, é cobrada uma multa de 20% sobre o valor do aluguel. 
Sabendo que um décimo dos veículos alugados no mês é devolvido com atraso, calcule 
o valor ganho com multas no mês 
• Sabe-se ainda que 2% dos veículos precisam de manutenção ao longo do ano. Calcule o 
valor  gasto  com  a  manutenção  anual,  sabendo  que  o  valor  gasto  em  média  com  a 
manutenção é de R$ 600,00. 
 
Além de mostrar os resultados na tela, grave em  um arquivo  chamado resultado.txt. Cada 
valor deverá ser armazenado em uma linha.*/
#include <stdio.h>

int main(void)
{
    int qtdVeiculos = 0;
    
    //ler a quantidade de veiculos e o valor de cada aluguel

    printf("Quantidade de veiculos: ");
    scanf("%d", &qtdVeiculos);

    float aluguelVeiculo[qtdVeiculos];

    for (int i = 1; i <= qtdVeiculos; i++)
    {

        printf("Valor do %do aluguel: ", i);
        scanf("%d", &aluguelVeiculo[i - 1]);
    }


    //mostrar inflormacoes
    //faturamento anual : 1/3 dos veiculos sao alugados por mes

    float fatAnual = qtdVeiculos / 3;
    printf("Faturamento anual") 

    //o valor ganho com multas no mes : 10% dos veiculos alugados sao devolvidos com multa de 20% sobre o aluguel

    //o valor gasto com a manuntencao anual : 2% dos veiculos | 600,00 cada manuntencao


}