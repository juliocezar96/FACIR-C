// "16) Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia 32 dos
// caracteres cujo código ASCII está entre 97 e 122."

#include <stdio.h>
#include <string.h>

void main()
{
    int n;
    char name[50];
    printf("digite uma frase (sem usar letras maisculas): ");
    gets(name);
    for (n = 0; n < strlen(name); n++)
    {
        if (name[n] >= 97 && name[n] <= 122)
            name[n] -= 32;
    }
    printf("sua frase em letras masiculas fica assim: %s", name);
}
