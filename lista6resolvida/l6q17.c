// "17) Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os espaços em branco
// do vetor e depois escrever o vetor resultante."

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

  char s[100];
  int x;

  printf("Digite uma palavra:  ");
  gets(s);

  x = 0;
  while (s[x] != '\0')
  {

    if (s[x] != ' ')
    {

      printf("%c", s[x]);
    }

    x++;
  }

  return 0;
}
