// "7) Crie um programa que compara duas strings (não use a função strcmp)."

#include <stdio.h>
#include <string.h>

int main()
{

  char nome[10];
  char nome1[10];
  int x, n;

  printf("Digite um nome: ");
  gets(nome);
  printf("Digite outro nome: ");
  gets(nome1);
  n = 0;
  x = 0;
  if (strlen(nome) == strlen(nome1))
  {
    while (nome[x] != '\0')
    {
      if (nome[x] != nome1[x])
      {
        n = 4;
      }
      x++;
    }
    if (n == 0)
    {
      printf("nomes Iguais");
    }
    else
    {
      printf("nome diferentes");
    }
  }
  else
  {
    printf("nome diferentes");
  }

  return 0;
}
