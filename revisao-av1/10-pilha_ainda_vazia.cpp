#include <iostream>
#include <stdlib.h>
using namespace std;
#define tam 5

struct t_pilha{
    int topo;
    int vetor[tam];
} typedef pilha;

int pilha_vazia(pilha *p){
    if(p->topo == -1){
        return 1;
    }
    return 0;
}

int pilha_cheia(pilha *p){
    if(p-> topo == tam){
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

void pilha_ainda_vazia(pilha *p){
    cout<<tam - (p->topo +1)<<endl;
}

int main(){

    pilha *p = (pilha *)malloc(sizeof(pilha));
    p->topo = -1;
    int valor;

    empilhar(p,1);
    empilhar(p,2);
    empilhar(p,3);

    pilha_ainda_vazia(p);

    return 0;

}