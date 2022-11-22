// "20) Faça um programa que receba duas frases distintas e imprima de maneira invertida, trocando as letras A por *."

#include <stdio.h>
#include <string.h>

void main()
{
    char name[20], name1[20];
    int n, m, l;

    printf("digite seu nome: ");
    gets(name);
    printf("digite seu segundo nome: ");
    gets(name1);
    n = strlen(name);
    l = strlen(name1);

    printf("seu primeiro nome invertido e com os A's trocados por * vai ficar assim: ");

    for (m = n - 1; m >= 0; m--)
    {
        if (name[m] == 'a')
        {
            name[m] = '*';
            printf("%c", name[m]);
        }
        else
        {
            printf("%c", name[m]);
        }
    }

    printf("\nseu segundo nome invetido e com os A's trocados por * vai ficar assim: ");

    for (m = l - 1; m >= 0; m--)
    {
        if (name1[m] == 'a')
        {
            name1[m] = '*';
            printf("%c", name1[m]);
        }
        else
        {
            printf("%c", name1[m]);
        }
    }
}
