#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int *p, a;
    a=10;
    p = &a;

    cout<<"Impressão do endereço: "<<p<<endl;
    cout<<"Impressão do valor: "<<*p<<endl;

    return 0;
}
