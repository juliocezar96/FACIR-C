#include <stdio.h>

/*
 *
 *2. Ler número da conta do cliente, saldo, débito e crédito. Após, calcular e escrever o saldo atual
 *(saldo atual = saldo - débito + crédito). Também testar se saldo atual for maior ou igual a zero
 *escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'.
 *
 */

int main(void)
{
  float contaCliente, saldo, credito, debito, saldoAtual;
  printf("Digite Saldo,debito e credito\n");
  scanf("%f%f%f", &saldo, &debito, &credito);
  saldoAtual = saldo - debito + credito;
  if (saldoAtual >= 0)
  {
    printf("Positivo");
  }
  else
  {
    printf("Saldo negativo");
  }
  return 0;
}
