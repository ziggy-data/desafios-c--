#include <iostream>
using namespace std;

int main() {
    double resultado,salario;
    string nome;

    for (int i = 0; i < 4; i++)
    {    
        cout<<"Digite o seu nome"<<endl;
        cin>>nome;
        cout<<"Digite o seu salario"<<endl;
        cin>>salario;  

        if(salario < 600.0){
            cout<<"Nome: "<<nome<<"  é isento de alíquota"<<endl; 
        }if(salario > 600.0 && salario < 1500.0){
            resultado = salario * 0.1;
            cout<<"Desconto: R$"<<resultado<<endl; 
        }if(salario >=  1500.0){
            resultado = salario * 0.15;
            cout<<"Desconto: R$"<<resultado<<endl; 
        }

    }   
    return 0;
}