#include <iostream>
using namespace std;

int main(){

    int contagem =0;
    double resposta, maiores[15];

    for(int i = 0; i<15; i++){

        cout<<"Qual é o numero de termos para série?"<<endl;
        cin>>resposta;

        if (resposta >= 30){
            maiores[contagem] = resposta;
            contagem++;
        }
    }

    cout<<"-----"<<endl;

    for(int i = 0; i<contagem; i++){
        cout<<maiores[i]<<endl;
    }

    return 0;
}