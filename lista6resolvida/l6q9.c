// "9) Escreva um programa que substitui as ocorrências de um caractere "0" em uma string por outro caractere,
// no caso substitua por "1"."

#include <stdio.h>
#include <string.h>

int main()
{

  char s[10];
  int x = 0;

  printf("Digite numeros e letras juntos:  ");
  gets(s);

  while (s[x] != '\0')
  {

    if (s[x] == '0')
    {
      s[x] = '1';
    }
    x++;
  }
  printf("%s", s);

  return 0;
}
