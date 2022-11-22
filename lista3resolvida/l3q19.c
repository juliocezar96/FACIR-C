#include <stdio.h>

/*
 *
 * 19. Calcule e escreva os números ímpares entre 1 (inclusive) e 100 (inclusive).
 *
 */

int main(void)
{
  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 != 0)
    {
      printf("%i\n", i);
    }
  }
  return 0;
}