// "4) Faça um programa que leia um nome e imprima as 4 primeiras letras do nome."

#include <stdio.h>

int main()
{
    int i = 10;
    char nome[100];

    printf("Digite uma palavra: ");
    gets(nome);

    for (i = 0; i < 4; i++)
    {
        printf("%c", nome[i]);
    }
    return 0;
}
