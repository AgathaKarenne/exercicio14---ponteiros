// 8. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.

#include <stdio.h>

main()
{
    float array[10];

    for (int i = 0; i < 10; i++)
    {
        printf("imprima os enderecos do array %d: %p\n", i, &array[i]);
    }
}