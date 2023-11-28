#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Pessoa
{
    int id;
    char nome[30];
    int idade;
    struct Pessoa *prox;  //ponteiro que irar apontar para uma nova pessoa na lista 
                   //guarda o endereço de memoria da proxima pessoa
}Pessoa;
//funcao que cria a lista vazia
Pessoa* criarListaVazia(){ //iniciar lista vazia
    return NULL;    
}
//criar funcao que ira criar uma nova pessoa
//retornar o endereço da nova pessoa
Pessoa* criarPessoa(){
    //definir endereço de memoria da pessoa,alocando de forme dinamica
    Pessoa *novaPessoa;
    novaPessoa = (Pessoa*)malloc(sizeof(Pessoa));
        if(novaPessoa == NULL){
        //verificar se foi criado corretamente o armazenamento da nova pessoa ou se retornou nulo
        //memoria insuficiente
        printf("Erro de alocacao");
        exit(EXIT_FAILURE); //funcao que sai do programa e para de executar
        }
        novaPessoa->prox = NULL;
        return novaPessoa; //endereco de memoria alocado para a nova pessoa
}
//agora criar funcao para cadastrar pessoa na lista
Pessoa* cadastrar(Pessoa *lista){//chamar funcao que cria pessoas como parametro
    //criar ponteiro que ira cadastrar pessoa
    Pessoa *novaPessoa = criarPessoa();
    //no endereco de memoria iremos inserir as informacoes
    srand(time(NULL));
    novaPessoa->id = rand() % 100;
    printf("Digite o nome:");
    fgets(novaPessoa->nome, sizeof(novaPessoa->nome), stdin);
    printf("Digite a idade:");
    scanf("%d", &novaPessoa->idade);

    //duas situacoes 1 - lista vazia, 2 - ja tem alguem na lista
    if(lista == NULL){
        return novaPessoa;
    }else{
        //percorrer a lista ate encontrar a pessoa que aponta pra NULL
        //criar ponteiro auxiliar:para ver se ele aponta para NULL
        Pessoa *atual = lista; //atual esta recebendo o primeiro da lista
        while(atual->prox != NULL){ //atual nao ira apontar pra nulo, então ele ira trazer o primeiro cadastrado
            atual = atual->prox; //aponta para proxima pessoa da lista
        }
        atual->prox = novaPessoa; //percorrer todas as pessoas do cadastro até achar o atual proximo apontar pra nulo
        return lista; //retornar a lista atualizada
    }

}
void mostrar(Pessoa *lista){
    if (lista == NULL)
    {
        printf("LIsta Nula");
        return;
    }else{
        Pessoa *atual = lista;
        while (atual != NULL)
        {
            printf("\nNome: %s", atual->nome);
            printf("\nIdade: %d", atual->idade);
            printf("\nID: %d", atual->id);
            atual = atual->prox;
        }
        printf("Pessoa nao encontrada");
        return NULL;
    }   
}
Pessoa* buscarPessoa(Pessoa *lista, int idBusca){
    if (lista == NULL)
    {
        printf("LIsta Nula");
        return;
    }else{
        Pessoa *atual = lista;
        while (atual != NULL)
        {
           if (atual->id == idBusca)
           {
                printf("\nNome: %s", atual->nome);
                printf("\nIdade: %d", atual->idade);
                printf("\nID: %d", atual->id);
                return atual;
           }
            atual = atual->prox;
        }
        
    }
}
void alterar(Pessoa *encontrada){
        printf("Alteracao dos campos");
        printf("Digite o novo nome");
        fflush(stdin);
        fgets(encontrada->nome, sizeof(encontrada->nome), stdin);
        fflush(stdin);
        printf("Digite a nova idade");
        fflush(stdin);
        scanf("%d", &encontrada->idade);
        fflush(stdin);
}
Pessoa* excluir(Pessoa *lista, int idBusca){
    Pessoa *anterior = NULL;
    Pessoa *atual = lista;

    while(atual != NULL && atual->id != idBusca){
        anterior = atual;
        atual = atual->prox;
    }
    if(atual != NULL){
        //logica de exclusao
        if (anterior != NULL)
        {
            //excluir alguem que nao esta no inicio da lista
            anterior->prox = atual->prox;
        }else{
            //excluir o primeiro da lista
            lista = atual->prox;
        }
        free(atual);
        printf("excluido com sucesso");
    }else
    {
        printf("Pessoa nao encontrada");
    }
    return lista;
}
void liberarLista(Pessoa *lista){
    Pessoa *atual = lista;
    Pessoa *proximaPessoa;
    while (atual != NULL)
    {
        proximaPessoa = atual->prox;
        free(atual);
        atual = proximaPessoa;
    }
    
}
main(){
    
    int opcao, idBusca;
    Pessoa *lista = criarListaVazia(); //inicializa a lista vazia no main
    Pessoa *encontrada;
    do
    {
        printf("\n1: Cadastrar");
        printf("\n2: Mostrar");
        printf("\n3: Buscar");
        printf("\n4: Alterar");
        printf("\n5: Excluir");
        printf("\n0 : Sair");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            lista = cadastrar(lista);
            break;
        case 2:
            mostrar(lista);
            break;
        case 3:
            printf("Digite o id para busca");
            scanf("%d", &idBusca);
            encontrada = buscarPessoa(lista, idBusca);
            break;
        case 4:
            printf("Digite o id para busca");
            scanf("%d", &idBusca);
            encontrada =buscarPessoa(lista, idBusca);
            if (encontrada != NULL)
            {
                alterar(encontrada);
            }
            break;
        case 5:
            printf("Digite o id para busca");
            scanf("%d", &idBusca);
            lista = excluir(lista , idBusca);
            break;
        }

    } while (opcao != 0);
    liberarLista(lista);
    
}