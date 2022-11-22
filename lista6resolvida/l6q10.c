// "10) Faça um programa que receba uma palavra e a imprima de trás-para-frente."

#include <stdio.h>
#include <string.h>

int main()
{

  char s[10];
  int n, i;

  printf("Digite uma palavra:  ");
  gets(s);
  n = strlen(s);

  for (i = n - 1; i >= 0; i--)
  {
    printf("%c", s[i]);
  }
  return 0;
}
