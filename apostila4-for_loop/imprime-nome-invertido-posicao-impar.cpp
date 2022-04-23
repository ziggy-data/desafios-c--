#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;

    cout<<"Digite um nome e aparecerá letras em posicoes impares e invertido: "<<endl;
    cin>>nome;      
    cout<<"palavra:"<<nome<<endl;
    for(int i=nome.length(); i>=0; i--){
            if(i % 2 != 0){
                cout<<nome[i];
            }
        }
    return 0;
}