#include <iostream>
using namespace std;

int main(){

    float c,l,preco,resultado;

    cout<<"Qual é o comprimento da area"<<endl;
    cin>>c;
    cout<<"Qual é o largura da area"<<endl;
    cin>>l;
    cout<<"Qual é o preço do arame"<<endl;
    cin>>preco;

    resultado = (c*l)*preco;

    cout<<resultado<<endl;

    return 0;

}