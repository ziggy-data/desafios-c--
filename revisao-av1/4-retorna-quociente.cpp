#include <iostream>
#include <stdlib.h>
using namespace std;

float retorna_quociente(int a, int b){
    float resultado = a % b;
    return resultado;
}

int main(){

    cout<<retorna_quociente(30,4)<<endl;

    return 0;

}