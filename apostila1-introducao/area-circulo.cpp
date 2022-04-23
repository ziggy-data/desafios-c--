# include <iostream>
using namespace std;

int main(){

    //Calcula a área do circulo

    double pi = 3.14, r,resultado;

    cout<<"Indique o raio do circulo"<<endl;
    cin>>r;

    resultado = pi * (r * r);

    cout<<"A área do circulo é: "<< resultado <<endl;

    return 0;
}