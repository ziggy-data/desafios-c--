#include <iostream>
using namespace std;

int main(){

    int valor,recebe = 1;

    cout<<"Digite um numero"<<endl;
    cin>>valor;

    for(int i = valor ; valor > 1 ; valor--){
        
        if(valor == 0){
            cout<<"O valor é : 1"<<endl;
        }

        recebe = recebe * valor ;
        cout<<recebe<<endl;
    }

    return 0;
}