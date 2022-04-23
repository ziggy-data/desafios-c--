#include <iostream>
using namespace std;

int main(){

    int teste = 0, total = 0, quantidade = 0;

    cout<<"Digite numeros positivos e se for entre 100 e 200 sera contado"<<endl;
    cout<<"SE O VALOR FOR NEGATIVO A PROGRAMA IRÁ PARAR"<<endl;
    cout<<"Digite um valor:"<<endl;
    cin>>teste;

    while(teste >= 0){

        if(teste >= 100 && teste <=200){
            quantidade++;
        }
        
        cout<<"Digite um valor:"<<endl;
        cin>>teste;

    }

    cout<<"Quantidade dos numeros entre 100 e 200 é :  "<<quantidade<<endl;

    return 0;

}