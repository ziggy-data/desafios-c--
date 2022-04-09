#include <iostream>
using namespace std;

int main(){

    int soma_pares = 0, conta_negativos = 0;
    int resposta;

    for(int i = 0; i<15; i++){

        cout<<"Qual é o valor "<<i <<" de 15: "<<endl;
        cin>>resposta;

        if (resposta % 2 == 0){
            soma_pares += resposta;
        }if (resposta < 0){
            conta_negativos++;
        }
    }

    cout<<"Soma de pares :"<< soma_pares <<endl;

    cout<<"-- Contagem de impares -- "<< conta_negativos  <<endl;

    return 0;
}