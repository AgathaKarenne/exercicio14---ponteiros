#include<stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[10];
    int idade;
}Pessoa;
main(){
    //alogacao dinamica
    Pessoa *p;

    p = (Pessoa*)malloc(sizeof(Pessoa));

    printf("Digite o nome:");
    fgets(p->nome, sizeof(p->nome), stdin);
    printf("\nDigite a idade");
    scanf("%d", &p->idade);

    printf("Nome: %s", p->nome);
    printf("Idade : %d", p->idade);
    
}