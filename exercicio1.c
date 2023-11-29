// 1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &).
//  Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.

#include <stdio.h>

main()
{

    int inteiro = 10;
    float real = 40;
    char letra = 'A';

    // Associe as variáveis aos ponteiros (use &).
    int *ponteiro1 = &inteiro;
    float *ponteiro2 = &real;
    char *ponteiro3 = &letra;
    // Imprimir os valores nao modificados
    printf("Valor do inteiro: %d\n", inteiro);
    printf("Valor do real: %f\n", real);
    printf("Valor do char: %c\n", letra);

    //  Modifique os valores de cada variável usando os ponteiros.trocarei as variaveis uma com a outra
    *ponteiro1 = 40;
    *ponteiro2 = 10;
    *ponteiro3 = 'B';

    // imprimir valores trocados
    printf("Novo valor do inteiro: %d\n", inteiro);
    printf("Novo valor do real: %f\n", real);
    printf("Novo valor do char: %c\n", letra);
}