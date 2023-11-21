#include<stdio.h>

main(){
    //alocacao dinamica
    float *numero;
    char *letra;

    numero = (float*)malloc(5 * sizeof(float));
    letra =  (char*)malloc(5 * sizeof(char));

    if (numero == NULL)
    {
        printf("estou de pilha, memoria cheia");
        return;
    }
    
    printf("%d", numero);

    *numero = 10;

    printf("\n%d", *numero);
}