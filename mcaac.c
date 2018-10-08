#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento{
    int chave;
    char letra;
    struct Elemento *prox;
    struct Elemento *anterior;
}TElemento;

typedef struct Lista{
    TElemento *inicio;
    TElemento *fim;
}TLista;

void inicializa_lista(TLista *lista){
    lista->inicio = NULL;
    lista->fim = NULL;
}
int inserir_elemento(TLista *lista){
    TElemento *novo;
    novo = malloc(sizeof(TElemento));

    scanf("%d",&novo->info);
    novo->prox =NULL;
    novo->anterior=NULL;

    if(lista->inicio == NULL){
        lista->inicio=novo;
        lista->fim=novo;
    }
    else{
        lista->fim->anterior = novo;
        novo->anterior = lista->fim;
        lista->fim= novo;

    }
}
void apresentar_elementos(TLista *lista){
    TElemento *aux;
    aux = lista->inicio;
    int d,maior;

    
    while(aux != NULL){
        if((aux->chave)>d){
           maior=aux->chave;
        }
        printf("%d ",aux->chave);
        aux = aux->prox;
        }
    while(maior!=0){
        printf("(");
        printf("%c/%d",aux->letra,aux->chave);
        printf(")");
        
        if()
    }
    
}


int x=0, z=0, j, i;
int main(){
    TLista Li;

    inicializa_lista(&Li);

    scanf("%d",&i);
    while(x<i){
        inserir_elemento(&Li);
        x++;
    }

    apresentar_elementos(&Li);

}
