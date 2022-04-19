#include <iostream>
#include <stdlib.h>
#define tam 10
using namespace std;

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
    if(p-> topo == tam -1){
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

void compara_pilha(pilha*p, pilha *x, int vetor[]){
    for(int i=0;i<5;i++){
        if(p->vetor[i] ==vetor[i] && x->vetor[i] == vetor[i]){
            cout<<"Indice "<<i<< " é igual"<<endl;
        }
    }
}


int main(){

    pilha *p;
    p=(pilha *)malloc(sizeof(pilha));
    p->topo=-1;
    empilhar(p,7);
    empilhar(p,2);
    empilhar(p,3);
    empilhar(p,6);
    empilhar(p,9);
    cout<<"antes"<<p->vetor[p->topo]<<endl;
    int valor = 19;
    cout<<"valor"<<valor<<endl;
    desempilhar(p,&valor);
    cout<<"tirando"<<p->vetor[p->topo]<<endl;
    cout<<"valor"<<valor<<endl;
    empilhar(p,5);
    cout<<"botando"<<p->vetor[p->topo]<<endl;
    empilhar(p,13);
    cout<<"sobrepondo"<<p->vetor[p->topo]<<endl;
    
    desempilhar(p,&valor);
    //cout<<valor<<endl;
    cout<<p->vetor[p->topo]<<endl;
    desempilhar(p,&valor);
    desempilhar(p,&valor);
    mostra_pilha(p);
    free(p);
    return 0;
    
}