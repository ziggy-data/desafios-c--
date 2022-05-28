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

int contar_elementos(arvore *raiz){
    if(raiz == NULL){
        return 0;
    }else{
        return 1 + contar_elementos(raiz->esq) + contar_elementos(raiz->dir);
    }
}

int contar_elementos2(arvore *raiz){
    if(raiz == NULL){
        return 0;
    }else{
        int contador_esq = contador_esq + contar_elementos2(raiz->esq);
        int contador_dir = contador_dir + contar_elementos2(raiz->dir);
        cout<<contador_dir<<endl;
        cout<<contador_esq<<endl;
        return 1;
    }
}

int altura(arvore *raiz){
    if(raiz == NULL){
        return 0;
    }
    else{
        int esq = altura(raiz->esq);
        int dir = altura(raiz->dir);
        if(esq > dir){
            return esq + 1;
        }else{
            return dir + 1;
        }
    }
}


/*
void conta_pilha(arvore *raiz, int contador){
    if(raiz == NULL){
        return;
    }else{
        cout<<"RECURSÃO ATUAL: "<<contador<<endl;
        contador++;
        conta_pilha(raiz->dir,contador);
        conta_pilha(raiz->esq,contador);
       
    }
}
*/

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
    cout<<endl;

    cout<<"Quantidade de nos: "<<contar_elementos(raiz)<<endl;
    cout<<"Quantidade de altura: "<<altura(raiz)<<endl;

    arvore *raiz2 = NULL;
    raiz2 = inserir(raiz2,30);
    raiz2 = inserir(raiz2,10);
    raiz2 = inserir(raiz2,50);
    raiz2 = inserir(raiz2,60);
    raiz2 = inserir(raiz2,40);
    raiz2 = inserir(raiz2,35);
    raiz2 = inserir(raiz2,70);
    raiz2 = inserir(raiz2,80);
    raiz2 = inserir(raiz2,8);
    raiz2 = inserir(raiz2,9);
    raiz2 = inserir(raiz2,90);
    raiz2 = inserir(raiz2,100);

    cout<<"Quantidade de nos 2: "<<contar_elementos(raiz2)<<endl;
    cout<<"Quantidade de altura  2: "<<altura(raiz2)<<endl;
    int contador = 0;
    //conta_pilha(raiz,contador);
    cout<<&contador<<endl;
    
    cout<<contar_elementos2(raiz)<<endl;

    free(raiz);
    free(raiz2);

    return 0;
}

