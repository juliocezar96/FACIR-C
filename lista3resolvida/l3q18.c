#include <stdio.h>

/*
 *
 * 18. Calcule e escreva a tabuada do 8 (1 a 10)
 *
 */

int main(void)
{
  int muti;
  for (int i = 1; i <= 10; i++)
  {
    muti = i * 8;
    printf("%i X 8 = %i \n", i, muti);
  }
  return 0;
}