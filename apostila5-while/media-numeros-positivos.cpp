#include <iostream>
using namespace std;

int main(){

    float teste = 0, total = 0, quantidade = 1, media = 0;

    cout<<"Digite numeros positivos e será impresso a média de numeros digitados"<<endl;
    cout<<"SE O VALOR FOR NEGATIVO A PROGRAMA IRÁ PARAR"<<endl;
    cout<<"Digite um valor:"<<endl;
    cin>>teste;

    while(teste >= 0){

        total = total + teste;
        media = total / quantidade;
        cout<<"Digite um valor:"<<endl;
        cin>>teste;
        quantidade++;

    }

    cout<<"O média dos numeros é :  "<<media<<endl;

    return 0;

}
