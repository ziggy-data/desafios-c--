#include <iostream>
#include <stdlib.h>
using namespace std;

float calcula_expressao(int a,int b, int c){
    float resultado = (a*a) + (6+b) + c;
    return resultado;
}


int main(){

    cout<<calcula_expressao(30,1,6)<<endl;

    return 0;

}