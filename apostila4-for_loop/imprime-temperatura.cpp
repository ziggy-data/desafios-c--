#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int superior = 10, inferior = 0, decremento=1 ,c;

    cout<<"Conversão de temperatura de Fahrenheit para Celcius"<<endl;
    cout<<"Qual é o limite superior?"<<endl;
    cin>>superior;
    cout<<"Qual é o limite inferior?"<<endl;
    cin>>inferior;
    cout<<"Qual é o decremento?"<<endl;
    cin>>decremento;

    cout<< "Fahrenheit" <<" "<< "Celcius"<<endl;
    for(int i = superior; i > inferior; i -= decremento){
        c = 5 * (i -32)/9;
        cout<<"   "<< i <<"       "<< c<<endl;
    }

    return 0;
}