#include <iostream>
using namespace std;

int main(){

    int numero = 1 ;

    cout<<"Digite um numero?"<<endl;
    cin>>numero;

    for(int i =1; i<numero;i += 2){
        if(i % 2 != 0){
            cout<< i <<" ";
        }
    }
    return 0;
}