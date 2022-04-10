#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;

    cout<<"Digite um nome e aparecerá letras em posicao par: "<<endl;
    cin>>nome;      
    cout<<"palavra:"<<nome<<endl;
    for(int i=0; i<nome.length(); i += 2){
            cout<<nome[i];
        }
    return 0;
}