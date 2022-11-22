#include <stdio.h>

/*
 *
 * 13. Ler as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que fazem
 * parte da avaliação. Calcular a média de aproveitamento, usando a fórmula abaixo e escrever
 * o conceito do aluno de acordo com a tabela de conceitos mais abaixo:
 * Média de Aproveitamento =  N1+N2*2 +N3*3 + Média dos exercícios / 7
 *
 */

int main(void)
{
  float n1, n2, n3, mediaExercicio, mediaAprov;
  printf("Digite o valor de N \n");
  scanf("%f %f %f %f", &n1, &n2, &n3, &mediaExercicio);

  mediaAprov = ((n1 + n2 * 2 + n3 + 3) + mediaExercicio) / 7;
  if (mediaAprov >= 9)
  {
    printf("Conceito A");
  }
  else if (mediaAprov < 9 && mediaAprov >= 7.5)
  {
    printf("Conceito B");
  }
  else if (mediaAprov < 7.5 && mediaAprov >= 6)
  {
    printf("Conceito C");
  }
  else if (mediaAprov < 6)
  {
    printf("Conceito D");
  }

  return 0;
}