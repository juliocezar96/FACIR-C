// "3) Entre com um nome e imprima o nome somente se a primeira letra do nome for “a” (maiuscula ou
// minuscula)."

#include <stdio.h>
#include <string.h>

int main()
{

  char nome[100];
  int x = 0;
  printf("Digite uma palavra ");
  gets(nome);

  if (nome[x] == 'A' || nome[x] == 'a')
  {

    printf("%s abc", nome);
  }
  return 0;
}
