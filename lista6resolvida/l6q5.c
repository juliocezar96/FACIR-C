// "5) Digite um nome, calcule e retorne quantas letras tem esse nome."

#include <stdio.h>
#include <string.h>

int main()
{

   char nome[100];
   int n;

   printf("Digite um palavra  ");
   gets(nome);

   n = strlen(nome);
   printf("%i", n);

   return 0;
}
