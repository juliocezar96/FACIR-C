//"1) Faça um programa que então leia uma string e a imprima."

#include <stdio.h>

int main()
{
    char nome[16];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf(" Ola,%s", nome);

    return 0;
}
