#include <iostream>
using namespace std;

int main(){

    int entrada;

    cout<<"Insira um valor e veja seus divisores até 100"<<endl;
    cin>>entrada;

    for(int a=1;a<100;a++){

        if(entrada%a == 0){
            cout<<a<<endl;
        }
    }
}
