#include <iostream>
using namespace std;


int main(){

    int teste = 0, quantidade = 0;

    cout<<"Digite numeros positivos e será impresso a quantidade de numeros digitados"<<endl;
    cout<<"SE O VALOR FOR NEGATIVO A PROGRAMA IRÁ PARAR"<<endl;
    cout<<"Digite um valor:"<<endl;
    cin>>teste;

    while(teste >= 0){

        quantidade++;
        cout<<"Digite um valor:"<<endl;
        cin>>teste;
    }

    cout<<"A quantidade de numeros é :  "<<quantidade<<endl;

    return 0;

}