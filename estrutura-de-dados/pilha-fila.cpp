#include <iostream>
#include <stdlib.h>
using namespace std;

#define tam 5

struct t_fila{
    int frente,tras;
    int vetor[tam];
    int qtd;
}typedef fila;

int enfileirar(fila *f, int valor){
    if(f->qtd == tam){
        return 0;
    }
    f->vetor[f->tras] = valor;
    if(f->tras == tam-1){
        f->tras = 0;
    }else{
        f->tras++;
    }
    f->qtd++;
    return 1;
}

int desinfileirar(fila *f,int *valor){

    if(f->qtd == 0){
        return 0;
    }
    
    *valor = f->vetor[f->frente];
    
    if(f->frente == tam-1){
        f->frente=0;
    }else{
        f->frente++;
    }

    f->qtd--;
    return 1;
}

struct t_pilha{
    int topo;
    int vetor[5];
} typedef pilha;

int pilha_vazia(pilha *p){
    if(p->topo == -1){
        return 1;
    }
    return 0;
}

int pilha_cheia(pilha *p){
    if(p-> topo == 4){
        return 1;
    }
    return 0;
}

int empilhar(pilha *p, int valor){
    if(pilha_cheia(p)){
        return 0;
    }
    p->topo++;
    p->vetor[p->topo]=valor;
    return 1;
}

int desempilhar(pilha *p, int *valor){
    if(pilha_vazia(p)){
        return 0;
    }
    *valor = p->vetor[p->topo];
    p->topo--;
    return 1;
}

void mostra_pilha(pilha *p){
    for(int i=0; i<=p->topo;i++){
        cout<<p->vetor[i]<<endl;
    }
}

void mostra_fila(fila *f){
    for(int i=0 ; i<tam ; i++){
        cout<<f->vetor[i]<<endl;
    }
}

int main(){

    pilha *p = (pilha *)malloc(sizeof(pilha));
    fila *f = (fila *)malloc(sizeof(fila));
    p->topo=-1;
    f->frente = 0;
    f->tras = 0;
    f->qtd = 0;
    int valor;
    
    empilhar(p,10);
    empilhar(p,20);
    empilhar(p,30);
    empilhar(p,40);
    empilhar(p,50);

    mostra_pilha(p);

    desempilhar(p,&valor);
    enfileirar(f,valor);
    desempilhar(p,&valor);
    enfileirar(f,valor);
    desempilhar(p,&valor);
    enfileirar(f,valor);
    desempilhar(p,&valor);
    enfileirar(f,valor);
    desempilhar(p,&valor);
    enfileirar(f,valor);

    cout<<"------------"<<endl;
    mostra_fila(f);

    desinfileirar(f,&valor);
    empilhar(p,valor);
    desinfileirar(f,&valor);
    empilhar(p,valor);
    desinfileirar(f,&valor);
    empilhar(p,valor);
    desinfileirar(f,&valor);
    empilhar(p,valor);
    desinfileirar(f,&valor);
    empilhar(p,valor);

    cout<<"------------"<<endl;
    mostra_pilha(p);

}