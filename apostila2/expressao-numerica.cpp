#include <iostream>
using namespace std;

int main(){

    float a,b,resultado;

    cout<<"Seguindo a seguinte expressão matematica: a3+b2+5"<<endl;
    cout<<"Digite o valor de 'a' : ";
    cin>>a;
    cout<<"Digite o valor de 'b' : ";
    cin>>b;

    resultado = (a*3) + (b *2) + 5;

    cout<<"O resultado é : "<< resultado;
    
    return 0;
    
}