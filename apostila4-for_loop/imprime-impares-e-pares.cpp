#include <iostream>
using namespace std;

int main(){

    int conta_pares = 0, conta_impares = 0;
    int resposta, pares[15], impares[15];

    for(int i = 0; i<15; i++){

        cout<<"Qual é o numero de termos para série?"<<endl;
        cin>>resposta;

        if (resposta % 2 == 0){
            pares[conta_pares] = resposta;
            conta_pares++;
        }else{
            impares[conta_impares] = resposta;
            conta_impares++;
        }
    }

    cout<<"-- Contagem de pares -- "<< conta_pares <<endl;

    for(int i = 0; i<conta_pares; i++){
        cout<<pares[i]<<endl;
    }

    cout<<"-- Contagem de impares -- "<< conta_impares  <<endl;

    for(int i = 0; i<conta_impares; i++){
        cout<<impares[i]<<endl;
    }

    return 0;
}