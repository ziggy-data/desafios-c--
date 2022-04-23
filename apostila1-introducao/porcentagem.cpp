#include <iostream>
using namespace std;

int main(){

    float valor,porcentagem,resultado;

    cout<<"Qual é a porcentagem do valor?"<<endl;
    cin>>porcentagem;
    cout<<"Qual é o valor?"<<endl;
    cin>>valor;

    resultado = (porcentagem/100) * valor;

    cout<<resultado<<endl;
    
    return 0;

}