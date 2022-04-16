#include <iostream>
using namespace std;

int main(){

    string nome[10];

    for(int m=0;m<10;m++){
        cout<<"Digite o "<<m<<"º nome"<<endl;
        cin>>nome[m];
    }

    for(int a=0;a<10;a++){
        cout<<a<<"º "<<nome[a]<<endl;
    }
}