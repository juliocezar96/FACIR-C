// "11) Faça um programa que receba do usuário uma string. O programa imprime a string sem suas vogais."

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

  char s[100];
  int x;
  char c;
  printf("Digite uma palavra ou frase:  ");
  gets(s);

  x = 0;
  while (s[x] != '\0')
  {
    c = tolower(s[x]);
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
    {

      printf("%c", c);
    }

    x++;
  }

  return 0;
}
