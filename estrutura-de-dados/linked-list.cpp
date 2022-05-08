#include <iostream>
#include <stdlib.h>
using namespace std;

struct t_lista{
    int chave;
    struct t_lista *prox;
}typedef lista;

void inserir(lista **cabeca,int chave){
    lista *no = (lista *)malloc(sizeof(lista));
    no->prox = NULL;
    no->chave = chave;
    if(*cabeca == NULL){
        *cabeca = no;
    }else{
        lista *temp = *cabeca;
        while(temp->prox != NULL){
            temp = temp->prox;
        }
        temp->prox = no;
    }
}

void imprimir(lista **cabeca){
    lista *temp = *cabeca;
    while(temp != NULL){
        cout<<temp->chave<<endl;
        temp = temp->prox;
    }
}

lista *busca(lista **cabeca, int chave){
    lista *temp = *cabeca;
    while (temp != NULL){
        if(temp->chave == chave){
            return temp;
        }
        temp = temp->prox;
    }
    return NULL;
}

void excluir(lista **cabeca, int chave){
    lista *temp = *cabeca;
    lista *ant = NULL;
    while(temp != NULL){
        if(temp -> chave == chave){
            if(ant != NULL){
                ant->prox = temp->prox;
            }else{
                *cabeca = temp->prox;
            }
            free(temp);
            temp = NULL;
        }
        else{
            ant = temp;
            temp = temp->prox;
        }
    }
}


int main(){

    lista *cabeca = NULL;
    inserir(&cabeca,10);
    inserir(&cabeca,20);
    inserir(&cabeca,30);
    imprimir(&cabeca);

    cout<<"------"<<endl;

    cout<<busca(&cabeca,30)<<endl;

    cout<<"------"<<endl;

    excluir(&cabeca, 20);

    imprimir(&cabeca);

    free(cabeca);

    return 0;
}








