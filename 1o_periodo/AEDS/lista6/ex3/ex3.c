#include <stdio.h>

int main(void) {

  FILE *txt = fopen("texto.txt", "w");
  char texto[10];
  
  printf("Seu Texto: ");
  scanf("%[^\n]s", texto);

  fprintf(txt, "%s", texto);
  fclose(txt);

  txt = fopen("texto.txt", "r");
  
  int as = 0;
  char c = '0';
  while (c != EOF)
  {
    c = fgetc(txt);
    if (c == 'a') as++;
  }
  printf("%d", as);
  return 0;
}