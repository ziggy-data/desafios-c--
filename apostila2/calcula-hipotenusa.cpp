#include <iostream>
#include <cmath>
using namespace std;


int main(){
    
    //Entrar com os valores dos catetos de um triângulo retângulo e imprimir a hipotenusa.


    float cateto_maior,cateto_menor,resultado;

    cout<<"Qual é a cateto menor"<<endl;
    cin>>cateto_menor;
    cout<<"Qual é a cateto maior"<<endl;
    cin>>cateto_maior;

    resultado = sqrt((cateto_maior*cateto_maior)+(cateto_menor*cateto_menor));

    cout<<"Comprimento da hipotenusa é : "<< resultado <<endl;

    return 0;

}

