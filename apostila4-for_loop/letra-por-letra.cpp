#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;

    cout<<"Digite um nome e aparecerá letras em cascata : "<<endl;
    cin>>nome;      

    cout<<"palavra:"<<nome<<endl;
    for(int i=0; i<=nome.length(); i++){
        for(int j=0; j<i; j++){
            cout<<nome[j];
        }
    cout<<endl;
    }
    return 0;
}
