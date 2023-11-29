// 10. Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.

#include <stdio.h>

void dobraArray(int *array, int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {
        array[i] = array[i] * 2;
    }
}
main()
{
    int n[] = {2, 4, 6, 8, 10};
    int tamanho = sizeof(n) / sizeof(n[0]);

    printf("numeros do array\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", n[i]);
    }
    dobraArray(n, tamanho);

    printf("dobro dos numeros\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", n[i]);
    }
}