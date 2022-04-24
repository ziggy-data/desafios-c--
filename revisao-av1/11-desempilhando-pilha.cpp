#include <iostream>
#include <stdlib.h>
using namespace std;

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


int main(){

    pilha *p = (pilha *)malloc(sizeof(pilha));
    p->topo = -1;
    int valor;

    empilhar(p,1);
    empilhar(p,2);
    empilhar(p,3);
    empilhar(p,4);
    empilhar(p,5);

    desempilhar(p,&valor);
    cout<<valor<<endl;
    desempilhar(p,&valor);
    cout<<valor<<endl;
    desempilhar(p,&valor);
    cout<<valor<<endl;
    desempilhar(p,&valor);
    cout<<valor<<endl;
    desempilhar(p,&valor);
    cout<<valor<<endl;

    //RESPOSTA: APARECE EM ORDEM INVERSA

    return 0;
}