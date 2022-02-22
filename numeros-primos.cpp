#include <iostream>
using namespace std;

int main(){
    int contador=0,i,valor;
    
    cout<<"Digite um valor : ";
    cin>>valor;

    for(int i=1;i<=valor;i++){
            
            if(valor%i == 0){
                contador++;
            }
        }
    if(contador == 2){
        cout<<"É primo"<<endl;
    }else{
        cout<<"Não é primo"<<endl;
    }
return 0;
}