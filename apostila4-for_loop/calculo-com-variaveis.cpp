#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int num1 = 1, num2 = 2,soma=0;

    
    cout<<"Método de soma sucessiva: "<<endl;
    cout<<"Qual é o primeiro numero?"<<endl;
    cin>>num1;
    cout<<"Qual é o segundo numero?"<<endl;
    cin>>num2;

    
    for(int i = 1; i < num1; i++){
        if(num1 > 0 && num2 >0){
        soma += num2;
        }else{
            cout<<"não poderá ser executado"<<endl;
        }
    }

    cout<<soma<<endl;

    return 0;
}