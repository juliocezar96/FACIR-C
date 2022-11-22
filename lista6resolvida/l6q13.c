// "13) Ler uma frase e contar quantos caracteres são espaços em brancos. Lembre-se que uma frase é um
// conjunto de caracteres (vetor)."

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

  char s[100];
  int x, soma;

  printf("Digite uma palavra:  ");
  gets(s);

  x = 0;
  while (s[x] != '\0')
  {

    if (s[x] == ' ')
    {

      soma++;
    }

    x++;
  }
  printf("%i", soma);

  return 0;
}
