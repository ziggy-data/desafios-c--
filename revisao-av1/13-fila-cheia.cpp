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

bool fila_esta_cheia(fila *f){
    if(f->tras == (f->frente - 1)){
        cout<<"Está cheia"<<endl;
        return 1;
    }else{
        cout<<"Está cheia"<<endl;
        return 0;
    }
}


int main(){




    return 0;
}