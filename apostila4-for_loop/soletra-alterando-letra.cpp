#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;

    cout<<"Digite um nome e aparecerá letras em cascata invertida: "<<endl;
    cin>>nome;      
    cout<<"palavra:"<<nome<<endl;
    for(int i=nome.length(); i>=0; i--){
        for(int j=i; j<nome.length(); j++){
            cout<<nome[j];
        }
    cout<<endl;
    }
    return 0;
}