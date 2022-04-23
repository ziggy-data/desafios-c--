#include <iostream>
using namespace std;


int main(){

    int teste = 0, resultado;

    cout<<"Irá imprimir o triplo do valor até apertar -999 para sair"<<endl;
    cout<<"Digite o valor para ver seu triplo:"<<endl;
    cin>>teste;

    while(teste != -999){

        resultado = teste * 3;
        cout<<"Resultudo:"<<resultado<<endl;
        cout<<"Digite o valor para ver seu triplo:"<<endl;
        cin>>teste;
    }

    return 0;

}