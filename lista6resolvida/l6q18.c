// 18) Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em uma string. A string
// e as letras L1 e L2 devem ser fornecidas pelo usuário.

#include <stdio.h>

void main()
{
    int n;
    char name[30], m, l;

    printf("digite uma frase: ");
    gets(name);
    setbuf(stdin, NULL);
    printf("escolha uma letra: ");
    scanf("%c", &m);
    setbuf(stdin, NULL);
    printf("escolha uma outra letra: ");
    scanf("%c", &l);
    setbuf(stdin, NULL);

    for (n = 0; name[n] != '\0'; n++)
        if (name[n] == m)
            name[n] = l;

    printf("sua frase ficou assim: %s. ", name);
}
