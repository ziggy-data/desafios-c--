#include <iostream>
using namespace std;

int main(){

    float celcius,resultado;

    cout<<"Qual é a temperatura em celcius"<<endl;
    cin>>celcius;

    resultado = ((9*celcius)+160)/5;

    cout<<"Temperatura em Fahrenheit : "<< resultado <<"ºF"<<endl;

    return 0;

}