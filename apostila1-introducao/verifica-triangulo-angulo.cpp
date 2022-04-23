#include <iostream>
using namespace std;

int main (){

    //Testa a hipotese de existencia de um triangulo somando seus angulos

    int a1,a2,a3;

    cout<<"Indique o primeiro ângulo"<<endl;
    cin>>a1;
    cout<<"Indique o segunda ângulo"<<endl;
    cin>>a2;
    cout<<"Indique o terceiro ângulo"<<endl;
    cin>>a3;

    if(a1+a2+a3 == 180){
        cout<<"Este triângulo existe"<<endl;
    }else{
        cout<<"Este triângulo NÃO existe"<<endl;
    }

    return 0;
}