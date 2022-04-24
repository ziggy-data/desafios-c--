#include <iostream>
#include <stdlib.h>
using namespace std;

void imprime_ponteiro(float *p){
    cout<<"Valor: "<<*p<<endl;
    cout<<"Endereço: "<<p<<endl;
}

int main(){

    float a=10;
    float *p;

    p = &a;

    imprime_ponteiro(p);

    return 0;

}