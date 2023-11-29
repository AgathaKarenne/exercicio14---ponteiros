// 9. Crie um programa que contenha uma matriz de inteiros contendo 3 linhas e 3 colunas. Imprima o endereço de cada posição dessa matriz.

#include <stdio.h>

main()
{
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("imprimir enderecos [%d][%d] : %p\n", i, j, &matriz[i][j]);
        }
    }
    // o valor de i é impresso antes do início do loop interno, e o valor de j é impresso antes de imprimir o endereço da matriz.
}