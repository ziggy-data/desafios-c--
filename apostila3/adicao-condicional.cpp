#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int a, b, resultado;

    cout<<"Os valores serão somados e se o valor for maior que 10 somará mais 5 senão subtrai 7 "<<endl;
    cout<<"Qual é o primeiro valor"<<endl;
    cin>>a;
    cout<<"Qual é o segundo valor"<<endl;
    cin>>b;

    resultado = a+b;

    if (resultado >= 10){
        resultado += 5;
        cout<<"O resultado final é "<<resultado<<endl;
    }else{
        resultado -= 7;
        cout<<"O resultado final é "<<resultado<<endl;
    }

    return 0;

}