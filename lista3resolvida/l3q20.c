#include <stdio.h>

/*
 *
 * 20. Calcule e escreva a média aritmética dos números pares entre 10 (inclusive) e 100 (inclusive).
 *
 */

int main(void)
{
   int soma = 0, n = 0, media;
   for (int i = 1; i <= 100; i++)
   {
      if (i % 2 == 0)
      {
         soma = soma + i;
         n++;
      }
   }
   media = soma / n;
   printf("%i\n", media);
   return 0;
}