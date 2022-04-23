#include <iostream>
using namespace std;

int main(){

    double serie, resultado = 1;

    cout<<"Qual é o numero de termos para série?"<<endl;
    cin>>serie;

    if(serie != 0){
        for(int i =0 ; i<serie;i++){
            if(i==0){
                resultado = i/ serie - i;
            }if(serie - i != 2){
                resultado = ((serie - 1) / 2)+ serie;
            }
        }
        cout<<"O resultado é: "<<resultado<<endl;
    }else{
        cout<<"Não foi possivel fazer"<<endl;    
    }

    return 0;
}

