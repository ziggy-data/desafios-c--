#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;

    cout<<"Digite um nome e irá repetir o tamanho do nome: "<<endl;
    cin>>nome;      

    for(int i=0; i<nome.length(); i++){
        cout<<nome<<endl;
    }
    return 0;
}
