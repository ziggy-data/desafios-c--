#include <iostream>
using namespace std;

int main(){

    double valor,soma,media;

    for(int i=0; i<=4 ; i++){
        cout<<"Digite um valor : "<<endl;
        cin>>valor;
        soma += valor;
    }
    media = soma / 5;
    cout<<"Média: "<<media<<endl;    

    return 0;

}

