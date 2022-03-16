#include <iostream>
using namespace std;

int main(){
    double a,b,c;

    cout<<"Verifica se 2 numeros são iguais ou diferentes comparando qual é o maior valor"<<endl;
    cout<<"Digite um numero: "<<endl;
    cin>>a;
    cout<<"Digite um numero: "<<endl;
    cin>>b;
    cout<<"Digite um numero: "<<endl;
    cin>>c;

    if(a>b){
        if(b > c){
            cout<<"Maior: "<<a<<" Intermediário: "<<b<<" Menor: "<<c<<endl;
        }
        else if(c > b){
            cout<<"Maior: "<<a<<" Intermediário: "<<c<<" Menor: "<<b<<endl;
        }else {
            cout<<"Maior: "<<c<<" Intermediário: "<<a<<" Menor: "<<b<<endl;
        }
    }else{
        if(b>c){
            if(c>a){
                cout<<"Maior: "<<b<<" Intermediário: "<<a<<" Menor: "<<c<<endl;
            }else{
                cout<<"Maior: "<<b<<" Intermediário: "<<c<<" Menor: "<<a<<endl;
                }
        }else{
                cout<<"Maior: "<<c<<" Intermediário: "<<b<<" Menor: "<<a<<endl;
        }
    }
return 0;

}    