#include <iostream>
#include <string.h>
using namespace std;


int main(){

    char nome1[50],nome2[50];

    cout<<"Imprime nomes em ordem alfabetica "<<endl;
    cout<<"Qual é o seu nome?"<<endl;
    cin>>nome1;
    cout<<"Qual é o seu nome?"<<endl;
    cin>>nome2;
        
        if ( strcmp(nome1,nome2) > 0 ){
            cout<<"Ordem alfabética: "<<endl<<nome2<<endl<<nome1<<endl;
        }if ( strcmp(nome1,nome2) == 0 ){
            cout<<"São iguais "<<endl;
        }else{
            cout<<"Ordem alfabética: "<<endl<<nome1<<endl<<nome2<<endl;
        }

return 0;

}    