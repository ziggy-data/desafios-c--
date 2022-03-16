#include <iostream>
using namespace std;

int main(){
    double a,b;

    cout<<"Verifica se 2 numeros são iguais ou diferentes comparando qual é o maior valor"<<endl;
    cout<<"Digite um numero: "<<endl;
    cin>>a;
    cout<<"Digite um numero: "<<endl;
    cin>>b;

    if(a < b){
        cout<<"Ordem crescente: "<< a <<" - "<<b;
    }else if(a > b){
        cout<<"Ordem decrescente: "<<a<<" - "<<b;
    }

return 0;

}    