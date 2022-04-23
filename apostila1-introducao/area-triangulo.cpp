#include <iostream>
using namespace std;

int main(){

    //Calcula a area do triangulo de forma simples, pode ser melhorado por cada tipo de lados
    //de triangulos (escaleno, equilatero, isoceles) 

    double base,altura,resultado;

    cout<<"Qual é a base do triângulo?"<<endl;
    cin>>base;
    cout<<"Qual é a altura do triângulo?"<<endl;
    cin>>altura;

    resultado = (base * altura) / 2;

    cout<<"Área do triângulo :"<<resultado<<endl;

    return 0;
}