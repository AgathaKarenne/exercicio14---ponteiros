// 7. Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B.
//  A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A.
//  Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.

#include <stdio.h>

int soma(int *a, int b) // B não precisa ser passado por meio de um ponteiro porque a função soma não precisa modificar o valor de B na função chamadora.
// Em vez disso, ela simplesmente usa o valor de B para calcular a soma com A.
{

    *a = *a + b;
}
main()
{

    int v1 = 10, v2 = 5;

    printf("valores iniciais: a = %d, b = %d\n", v1, v2);

    // imprimir os valores
    soma(&v1, v2);
    printf("A soma dos valores em a e: %d\n", v1, v2);
    printf("valor de b: %d", v2);
}