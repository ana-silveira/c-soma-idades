/*
50. Fazer um programa para ler idades e mostrar a soma de todas as idades. Flag ser�
IDADE = �-1�.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int idade;
    int soma = 0;

    printf("Informe a primeira idade: ");
    scanf("%d", &idade);

    while ( idade != -1 )
    {
        soma += idade;
        printf("Informe a pr�xima idade: ");
        scanf("%d", &idade);
    }

    printf("A soma de todas as idades � %d", soma);

}
