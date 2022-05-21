#include <iostream>
#include <stdlib.h>
using namespace std;

struct T_arvore{
    int chave;
    struct T_arvore *esq;
    struct T_arvore *dir;
}typedef arvore;

arvore *inserir(arvore *raiz, int chave){
    if(raiz == NULL){
        arvore *no = (arvore *)malloc(sizeof(arvore));
        no->chave = chave;
        no->dir = NULL;
        no->esq = NULL;
        return no;
    }else{
        if(chave > raiz->chave){
            raiz->dir = inserir(raiz->dir, chave);
        }else{
            raiz->esq = inserir(raiz->esq, chave);
        }
        return raiz;
    }
}

void em_ordem(arvore *raiz){
    if(raiz == NULL)return;
    em_ordem(raiz->esq);
    cout<<raiz->chave<<"\t";
    em_ordem(raiz->dir);
}

void pre_ordem(arvore *raiz){
    if(raiz == NULL)return;
    cout<<raiz->chave<<"\t";
    pre_ordem(raiz->esq);
    pre_ordem(raiz->dir);
}

void pos_ordem(arvore *raiz){
    if(raiz == NULL)return;
    pos_ordem(raiz->esq);
    pos_ordem(raiz->dir);
    cout<<raiz->chave<<"\t";
}


int main(){
    arvore *raiz = NULL;
    raiz = inserir(raiz,12);
    raiz = inserir(raiz,4);
    raiz = inserir(raiz,16);
    raiz = inserir(raiz,2);
    raiz = inserir(raiz,8);
    raiz = inserir(raiz,6);
    em_ordem(raiz);
    cout<<endl;
    pre_ordem(raiz);
    cout<<endl;
    pos_ordem(raiz);


    free(raiz);

    return 0;
}

