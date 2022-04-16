#include <iostream>
using namespace std;

int main(){

    int valor, contaNovo = 0, contaIdoso = 0, quantidade = 0;

    cout<<"Digite idades se for menor que 21 ou maior que 50 essas pessoas serão contabilizadas"<<endl;

    while(quantidade <3 ){

        cout<<"Digite um numero:"<<endl;
        cin>>valor;

        if(valor < 21){
            contaNovo++;
        }
        if(valor > 50){
            contaIdoso++;
        }

        quantidade++;
    }

    cout<<"Maiores de 21: "<<contaNovo<<endl;
    cout<<"Maiores de 50: "<<contaIdoso<<endl;

    return 0;
    
}