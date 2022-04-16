#include <iostream>
using namespace std;

int main(){

    int numero[10];

    for(int m=0;m<10;m++){
        cout<<"Digite o "<<m<<"º nome de 10"<<endl;
        cin>>numero[m];
    }

    for(int a=0;a<10;a++){
        if(numero[a] % 2 == 0){
            cout<<numero[a]<<" é par"<<endl;
        }else{
            cout<<numero[a]<<" é impar"<<endl;
        }
    }
}