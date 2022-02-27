#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int a;

    cout<<"Testa se o valor é positivo e imprime a raiz quadrada senão imprime o quadrado"<<endl;
    cout<<"Qual é o valor"<<endl;
    cin>>a;
    

    if (a >= 0){
        cout<<"É positivo e sua raiz quadrada é:"<<sqrt(a)<<endl;
    }
    else{
        cout<<"É negativo e o quadrado é:"<<a * a<<endl;
    }

return 0;

}    