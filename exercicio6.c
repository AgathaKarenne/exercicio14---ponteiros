// 6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida, faça uma função que retorne a soma do dobro dos dois números lidos.
//  A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B.

#include <stdio.h>

int dobraSomaValor(int *a, int *b)
{
    *a = *a * 2;
    *b = *b * 2;

    return (*a + *b);
}
main()
{

    int v1 = 100, v2 = 200;

    // imprimir valores iniciais
    printf("Valor1: %d\n", v1);
    printf("Valor2: %d\n", v2);

    // imprimir soma do dobro dos valores
    int resultado = dobraSomaValor(&v1, &v2);
    printf("A soma do dobro dos valores e: %d\n", resultado);

    // imprimir dobro dos valores
    printf("Valor novo de a: %d\n", v1);
    printf("Valor novo de b: %d\n", v2);
}