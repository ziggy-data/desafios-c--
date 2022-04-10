#include <iostream>
using namespace std;

int main() {
    double resultado,valor,desconto;

    cout<<"Digite o valor do produto"<<endl;
    cin>>valor;  

    desconto = valor * 0.12;
    resultado = valor - desconto;
    cout<<"Valor da produto com desconto: R$"<<resultado<<endl; 
    
    return 0;
}