// 2. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

#include <stdio.h>

main()
{

    int a;
    int b;

    // para imprimir o endereco usa &
    if (&a > &b)
    {
        printf("O endereco maior e: %p\n", &a);
    }
    else if (a < b)
    {
        printf("o endereco maior e: %p\n", &b);
    }
}