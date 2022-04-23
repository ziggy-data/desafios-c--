#include <iostream>
using namespace std;


int main(){

    int quantidade = 0;
    string palavra;

    cout<<"Digite profissoes se for igual a M ou m (masculino) irá ser contado"<<endl;
    cout<<"SE DIGITAR 'SAIR' O PROGRAMA IRÁ PARAR"<<endl;
    cout<<"Digite uma sexo:"<<endl;
    cin>>palavra;

    while(palavra != "SAIR" ){
        if(palavra == "m" || palavra == "M"){
            quantidade++;
        }
        
        cout<<"Digite um sexo:"<<endl;
        cin>>palavra;
    }

    cout<<"A quantidade de Homens é :  "<<quantidade<<endl;

    return 0;

}