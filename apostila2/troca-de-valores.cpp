#include <iostream>
using namespace std;

int main() {
    double auxiliar,valor1,valor2;

    cout<<"Esse código fará a troca dos valores das variáveis"<<endl;
    cout<<"Digite o valor 1"<<endl;
    cin>>valor1;
    cout<<"Digite o valor 2"<<endl;
    cin>>valor2;

    auxiliar = valor1;
    valor1= valor2;
    valor2 = auxiliar;

    cout<<"Valor da variavel 1: "<<valor1<<endl<<"Valor da variavel 2: "<<valor2; 
    
    return 0;
}