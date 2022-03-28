#include <iostream>
using namespace std;

int main(){

    double numero[10],maior,menor;

    for(int a=0; a<10;a++){
        cout<<"Digite o "<<a<<"º numero"<<endl;
        cin>>numero[a];
    }

    menor = numero[0];
    maior = numero[0];

    for(int b=0; b<10;b++){
        if(numero[b]>maior){
            maior = numero[b];
        }else if(numero[b]<menor){
            menor = numero[b];
    }
}

    cout<<"O maior valor é: "<<maior<<endl;
    cout<<"O menor valor é: "<<menor<<endl;


    return 0;
}