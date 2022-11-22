// "8) Faça um programa que conte o número de 1's que aparecem em um string. Exemplo: "0011001" == 3"

#include <stdio.h>
#include <string.h>

int main()
{

  char s[10];
  int x = 0;    // auxiliar
  int soma = 0; // auxiliar

  printf("Digite numeros e letras juntos:  ");
  gets(s);

  while (s[x] != '\0')
  {
    x++; // auxiliar
    if (s[x] == '1')
    {

      soma++; // auxiliar
    }
  }
  printf("%i\n", soma);

  return 0;
}
