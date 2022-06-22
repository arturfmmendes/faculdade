/*Uma   determinada   biblioteca   possui   obras   de   ciências   exatas,   humanas   e   biológicas,   
totalizando      1500  volumes,  distribuídos  em  cada  uma  das  áreas.  O  proprietário  resolveu 
agrupar as informações de cada livro no seguinte registro:  
• Código de catalogação 
• Doação (S/N) 
• Nome da obra 
• Nome do autor 
• Editora 
• Área 
 
Construir um algoritmo que: 
a) cadastre todos os volumes de cada uma das áreas em três vetores distintos 
b)  permita  ao  usuário  fazer  consulta  às  informações  cadastradas  fornecendo  o  código  de 
catalogação e a área. 
Existindo tal livro as informações são exibidas, caso contrário enviar mensagem de aviso. A 
consulta se repete até que o usuário digite código finalizador   -1.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro{
    int codigo;
    char doacao;
    char *tituloLivro;
    char *nomeAutor;
    char *editora;
    char *areaConhecimento;
}cadastro;




int main(void)
{
    cadastro livros[] = 
}