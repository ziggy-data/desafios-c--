#include <iostream>
using namespace std;


int main(){

    string a;

    cout<<"Testa se o nome possui a primeira letra com 'a' se simm imprime se nao não imprime"<<endl;
    cout<<"Qual é o seu nome?"<<endl;
    cin>>a;

    if (a[0] == 'a' || a[0] == 'A' ){
        cout<<"Seu nome é :"<<a<<endl;
    }
    else{
        cout<<"Seu nome não será impresso"<<endl;
    }

return 0;

}    