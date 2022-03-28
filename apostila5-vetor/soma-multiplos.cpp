#include <iostream>
using namespace std;

int main(){

    int numero[10],soma;

    for(int m=0;m<10;m++){
        cout<<"Digite o "<<m<<"º nome de 10"<<endl;
        cin>>numero[m];
    }

    for(int a=0;a<10;a++){
        cout<<numero[a]<<endl;
        if(numero[a] % 6 == 0){
            soma += numero[a];
        }
    }

    cout<<"Soma:"<<soma<<endl;
}