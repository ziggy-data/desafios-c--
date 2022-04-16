#include <iostream>
using namespace std;


int main(){

    int quantidade = 0;
    string palavra;

    cout<<"Digite profissoes se for igual a dentista irá ser contado"<<endl;
    cout<<"SE DIGITAR 'SAIR' O PROGRAMA IRÁ PARAR"<<endl;
    cout<<"Digite uma profissão:"<<endl;
    cin>>palavra;

    while(palavra != "SAIR" ){
        if(palavra == "Dentista" || "dentista" || "DENTISTA"){
            quantidade++;
        }
        
        cout<<"Digite uma profissao:"<<endl;
        cin>>palavra;
    }

    cout<<"A quantidade de Dentistas é :  "<<quantidade<<endl;

    return 0;

}