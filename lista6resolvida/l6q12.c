// "12) Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra.
// Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse
// caractere."

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

  char s[100];
  int x, soma;
  char c;
  printf("Digite uma palavra:  ");
  gets(s);

  x = 0;
  while (s[x] != '\0')
  {

    c = tolower(s[x]);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {

      soma++;
    }

    x++;
  }
  printf("%i", soma);

  return 0;
}
