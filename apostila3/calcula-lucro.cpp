#include <iostream>
using namespace std;

int main() {
    double resultado,valor;

    cout<<"Digite o valor do produto"<<endl;
    cin>>valor;  

    if(valor < 50.0){
        resultado = valor * 0.75;// valor do lucro
        resultado += valor;//valor do produto
        cout<<"Valor da venda: R$"<<valor+resultado<<endl; 
    }else{
        resultado = valor * 0.5;
        resultado += valor;
        cout<<"Valor da venda: R$"<<resultado<<endl; 
    }
    return 0;
}