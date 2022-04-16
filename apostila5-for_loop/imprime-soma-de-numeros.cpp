#include <iostream>
using namespace std;

int main(){

    double valor,soma;

    for(int i=0; i<=4 ; i++){
        cout<<"Digite um valor : "<<endl;
        cin>>valor;
        soma += valor;
    }
    cout<<"Soma: "<<soma<<endl;    

    return 0;

}

