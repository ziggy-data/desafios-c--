#include <iostream>
using namespace std;

int main(){

    int valor, maior = 0;

    cout<<"Digite valores, será armazenado o maior valor. digite -9999 para sair do código"<<endl;


    while(valor == -9999 ){

        cout<<"Digite um valor"<<endl;
        cin>>valor;
        if(maior < valor){
            maior = valor;
        }

    }

    cout<<"Maior valor: "<<maior<<endl;

    return 0;
    
}