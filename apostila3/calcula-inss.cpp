#include <iostream>
using namespace std;

int main() {
    double resultado,salario;

    cout<<"Digite o seu salario"<<endl;
    cin>>salario;  

    if(salario <= 900.0){
        cout<<"É isento de desconto"<<endl; 
    }if(salario > 900.0 && salario <= 1200.0){
        resultado = salario * 0.1;
        cout<<"Desconto: R$"<<resultado<<endl; 
    }if(salario >  1200.0 && salario <= 2000.0){
        resultado = salario * 0.15;
        cout<<"Desconto: R$"<<resultado<<endl; 
    }if(salario >  2000.0){
        resultado = salario * 0.275;
        cout<<"Desconto: R$"<<resultado<<endl; 
    }
    return 0;
}