// 4. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B,
//  por exemplo, e, após a execução da função,
//  A conterá o valor de B e B terá o valor de A.

#include <stdio.h>

void trocaVariaveis(int *a, int *b)
{ // receber valores como parametro

    // variaveis utilizadas
    // int *a;
    // int *b;
    // criar uma variavel auxiliar para realizar a troca
    int aux;
    aux = *a;

    //  A conterá o valor de B
    *a = *b;

    // B terá o valor de A.
    *b = aux;
}
main()
{
    int num1 = 10, num2 = 5;

    printf("Num1: %.2d\tNum2: %.2d\n", num1, num2);
    trocaVariaveis(&num1, &num2);
    printf("Num1: %.2d\tNum2: %.2d\n", num1, num2);
}