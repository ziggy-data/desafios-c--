#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int a, b, resultado, final;

    cout<<"Este programa irá immprimir o quadrado da diferença"<<endl;
    cout<<"Qual é a primeiro valor"<<endl;
    cin>>a;
    cout<<"Qual é o segundo valor"<<endl;
    cin>>b;

    resultado = a-b;

    final = resultado * resultado;

    cout<<"O quadrado da diferença é "<<final<<endl;

    return 0;
}