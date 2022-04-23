#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int valor, resultado, quantidade = 0;

    cout<<"Digite numeros se for positivos irá ser calculado sua raiz quadrada"<<endl;
    cout<<"SE DIGITAR NUMERO NEGATIVO O PROGRAMA IRÁ PARAR"<<endl;
    cout<<"Digite um numero:"<<endl;
    cin>>valor;

    while(quantidade <=10 ){

        if(valor >= 0){
            resultado = sqrt(valor);
            cout<<"Raiz quadrada: "<<resultado<<endl;
            quantidade++;
        }
        cout<<"Digite um numero:"<<endl;
        cin>>valor;

    }

    return 0;
    
}