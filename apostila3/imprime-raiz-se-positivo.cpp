#include <iostream>
#include <math.h>
using namespace std;


int main(){

    int a,resultado;

    cout<<"Se o valor for positivo será calculado sua raiz quadrada e se for negativo será elevado ao quadrado"<<endl;
    cout<<"Qual é o valor"<<endl;
    cin>>a;
    

    if (a > 0){
        resultado = sqrt(a);
        cout<<resultado<<endl;
    }
    else{
        resultado = a*a;
        cout<<resultado<<endl;
    }

return 0;

}    