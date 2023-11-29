// 3. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

#include <stdio.h>

main()
{

    int a;
    int b;

    printf("o endereco da variavel a e: %p\n", &a);
    printf("o endereco da variavel b e: %p\n", &b);

    if (a > b)
    {
        printf("o maior endereco e da variavel a: %p\n", &a);
    }
    else
    {
        printf("o maior endereco e da variavel b: %p\n", &b);
    }
}