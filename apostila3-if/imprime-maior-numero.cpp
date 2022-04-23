#include <iostream>
using namespace std;

int main(){
    double a,b;

    cout<<"Verifica se 2 numeros são iguais ou diferentes"<<endl;
    cout<<"Digite um numero: "<<endl;
    cin>>a;
    cout<<"Digite um numero: "<<endl;
    cin>>b;

    if(a > b){
        cout<<"O maior é "<<a;
    }else if(a < b){
        cout<<"O maior é "<< b;
    }

return 0;

}    