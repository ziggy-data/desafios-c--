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

void mostra_fila(fila *f){
    for(int i=0 ; i<tam ; i++){
        cout<<f->vetor[i]<<endl;
    }
}


int main(){

    fila *f = (fila *)malloc(sizeof(fila));
    f->frente = 0;
    f->tras = 0;
    f->qtd = 0;
    enfileirar(f,10);
    enfileirar(f,20);
    enfileirar(f,30);
    enfileirar(f,40);
    enfileirar(f,50);
    
    mostra_fila(f);

}