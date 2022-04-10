#include <iostream>
using namespace std;

int main(){

    char nome[25];

    for(int i=0; i<=4 ; i++){
        cout<<"Digite um nome : "<<endl;
        cin>>nome;
        cout<<"primeira letra: "<<nome[0]<<endl;   
    }

    return 0;

}

