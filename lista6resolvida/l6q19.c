// "19) Escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu programa deve terminar
// quando uma idade negativa for digitada. Ao terminar, seu programa deve escrever o nome e a idade das
// pessoas mais jovens e mais velhas."

#include <stdio.h>

void main()
{
    int x;
    typedef struct chamada
    {
        char name[20];
        int idade;
    } Tchamada;
    Tchamada aluno[10];
    int m = 0, l = 0;
    float alunos;
    for (int x = 0; x < 10; x++)
    {
        printf("qual seu primeiro nome? ");
        scanf("%s", &aluno[x].name);
        setbuf(stdin, NULL);
        printf("qual sua idade? ");
        scanf("%d", &aluno[x].idade);
        setbuf(stdin, NULL);
        if (aluno[x].idade < 0)
            break;
        else
            m += aluno[x].idade;
        l += 1;
    }
    alunos = m / l;
    printf("\n- Alunos mais velhos -\n");
    for (int x = 0; x < l; x++)
    {
        if (alunos < aluno[x].idade)
        {
            printf("Aluno: %s, Idade: %d\n", aluno[x].name, aluno[x].idade);
        }
    }
    printf("\n- alunos mais novos -\n");
    for (int x = 0; x < l; x++)
    {
        if (alunos >= aluno[x].idade)
        {
            if (aluno[x].idade > 0)
                printf("aluno: %s, Idade: %.d\n", aluno[x].name, aluno[x].idade);
        }
    }
}
