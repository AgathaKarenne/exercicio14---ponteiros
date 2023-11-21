#include<stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[10];
    int idade;
}Pessoa;

Pessoa* cadastrar(){
    //alocacao dinamica
    Pessoa *p = (Pessoa*)malloc(sizeof(Pessoa));

    printf("Digite o nome:");
    fgets(p->nome, sizeof(p->nome), stdin);
    printf("\nDigite a idade");
    scanf("%d", &p->idade);

    return p;

}
main(){
    //ponteiro para armazenar o retorno da funcao
    Pessoa *p;

    p = cadastrar();

    printf("Nome: %s", p->nome);
    printf("Idade : %d", p->idade);
    
}