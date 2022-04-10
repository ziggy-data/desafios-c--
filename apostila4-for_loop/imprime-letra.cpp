#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;

    cout<<"Digite um nome e aparecerá letra por letra: "<<endl;
    cin>>nome;      

    cout<<"palavra:"<<nome<<endl;
    for(int i=0; i<nome.length(); i++){
        cout<<nome[i]<<endl;
    }
    return 0;
}
