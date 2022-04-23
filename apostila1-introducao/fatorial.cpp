#include <iostream>
using namespace std;

int main(){

    //Realiza o calculo de fatorial

    double valor,recebe = 1;

    cout<<"Digite um numero"<<endl;
    cin>>valor;

    for(int i = valor ; valor > 1 ; valor--){

        recebe = recebe * valor ;
        cout<<recebe<<endl;
    }

    if(valor<0){
        cout<<"Números negativos não podem ser fatorados"<<endl;
    }else if(valor ==1 || valor==0){
        cout<<"O valor "<<valor<<"! = 1"<<endl;
    }

    return 0;
}