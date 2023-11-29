// 5. Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável.
//  Escreva o conteúdo das 2 variáveis na tela.

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
    int v1 = 10, v2 = 20;

    // chamar funcao
    trocaVariaveis(&v1, &v2);
    printf("Maior valor e: v1 %d\n", v1);
    printf("Menor valor e: v2 %d\n", v2);
}
