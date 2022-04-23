#include <iostream>
using namespace std;

int main(){

    string palavra;

    cout<<"Digite qualquer palavra e a primeira letra será exibida"<<endl;
    cout<<"SE A PALAVRA FOR 'FIM' O PROGRAMA IRÁ PARAR"<<endl;
    cout<<"Digite uma palavra:"<<endl;
    cin>>palavra;

    while(palavra != "FIM"){

        cout<<palavra[0]<<endl;
        cout<<"Digite uma palavra:"<<endl;
        cin>>palavra;

    }

    return 0;

}