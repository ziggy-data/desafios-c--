#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int a = 1, c, resultado, b = 1 ;

    cout<<"Qual é o cateto a?"<<endl;
    cin>>a;
    cout<<"Qual é o cateto b?"<<endl;
    cin>>b;
    
    c = (a*a)+(b*b);

    resultado =  sqrt(c);

    cout<<"Resultado : "<< resultado <<endl;

    return 0;
}