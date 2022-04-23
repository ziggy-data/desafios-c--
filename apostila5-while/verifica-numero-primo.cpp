#include <iostream>
using namespace std;

int main(){

    int numero,i=1;
    int teste = 0;

    cout<<"Digite o valor para ser testar se é primo "<<endl;
    cin>>numero;

    while( i <= numero){
        if(numero%i == 0){

            teste++;
            i++;
        }
        i++;
    }

    if(teste == 2){
        cout<<"é um numero primo"<<endl;
    }else{
        cout<<"Não é um numero p9rimo"<<endl;
    }

    return 0;
}