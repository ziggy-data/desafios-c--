#include <iostream>
using namespace std;

int main(){

    float milha,resultado;

    cout<<"Qual é a comprimento em milhas"<<endl;
    cin>>milha;

    resultado = milha * 1609.344;

    cout<<"Comprimento em metros : "<< resultado <<" metros"<<endl;

    return 0;

}