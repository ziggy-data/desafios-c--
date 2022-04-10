#include <iostream>
using namespace std;

int main() {
    double saldo,resultado;

    cout<<"Esse código fará a troca dos valores das variáveis"<<endl;
    cout<<"Digite o saldo da poupança"<<endl;
    cin>>saldo;

    resultado = saldo * 0.01;

    cout<<"Seu reajuste é: "<<resultado<<endl;
    
    return 0;
}