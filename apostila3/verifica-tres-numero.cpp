#include <iostream>
using namespace std;


int main(){
    double a,b,c;

    cout<<"Imprime o maior número entre 3"<<endl;
    cout<<"Digite um numero: ";
    cin>>a;
    cout<<endl<<"Digite um numero: ";
    cin>>b;
    cout<<endl<<"Digite um numero: ";
    cin>>c;

    if(a > b && a > c){
        cout<<"O maior número é :"<<a;
    }else if(b > a && b > c){
        cout<<"O maior número é :"<<b;
    }else{
        cout<<"O maior número é :"<<c;
    }

return 0;

}    