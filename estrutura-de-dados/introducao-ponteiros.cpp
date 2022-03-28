#include <iostream>
using namespace std;

int somar (int x, int y, int *z){
    // colocamos o return 1 pra sinalizar que a funcao funcionou
    // e um ponteiro ( *z ) pra enviar um valor a um endereco de variavel 
        *z = x+y;
        return 1;
    }

int main(){

    // * -> PONTEIRO ,  & -> ENDEREÇO DA VARIAVEL

    int a,b,c,ok,*n;
    a=20;
    b=10;
    ok = somar(a,b,&c);
    cout<<ok<<endl;
    cout<<c<<endl;
    n = &c;

    // endereco de n é diferente de c
    cout<<&n<<endl;
    cout<<&c<<endl;

    // ponteiro recebe o valor de c
    cout<<*n<<endl;
    cout<<c<<endl;

    //valor do ponteiro é o endereco de c pq colocamos isso em cima
    cout<<n<<endl;
    cout<<&c<<endl;
    

}