#include <iostream>
#include <cmath>
using namespace std;


int main(){
    
    //Entrar com a base e a altura de um triângulo e imprimir a sua área.

    float base,altura,resultado;

    cout<<"Qual é a base"<<endl;
    cin>>base;
    cout<<"Qual é a altura"<<endl;
    cin>>altura;

    resultado = (base*altura)/2;

    cout<<"Comprimento da área é : "<< resultado <<endl;

    return 0;

}

