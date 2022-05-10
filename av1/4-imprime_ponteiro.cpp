#include <iostream>
using namespace std;

void imprime_ponteiro(int *a){

    cout<<"Valor da variavel: "<<*a<<endl;
    cout<<"Endereco da variavel apontada"<<a<<endl;

}

int main(){

    int b = 30;
    int *a = &b;

    imprime_ponteiro(a);

    return 0;
}