#include <iostream>
using namespace std;

int main(){

    double serie, resultado = 1;

    cout<<"Qual é o numero de termos para série?"<<endl;
    cin>>serie;

    if(serie <= 0){
        for(double i=2; i<=serie ; i++){
            resultado += 1 / i;
        }
        cout<<"O resultado é: "<<resultado<<endl;
    }else{
        cout<<"Não foi possivel fazer!"<<endl;    
    }

    return 0;
}

