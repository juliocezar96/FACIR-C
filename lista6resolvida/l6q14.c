// "14) Faça um programa que leia uma palavra (máximo de 50 letras) e some 1 no valor ASCII de cada caractere da
// palavra. Imprima a string resultante."

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char name[50];
    printf("digite sua palavra: ");
    gets(name);
    for (n = 0; n < strlen(name); n++)
        name[n] += 1;

    printf("somando sua palavra na tabela ASCII\n...\n...\n...\no resultado e: %s", name);
}
