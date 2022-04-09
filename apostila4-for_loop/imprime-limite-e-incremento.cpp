#include <iostream>
using namespace std;

int main(){

    int limite = 1, resultado;
    int incremento = 1 ;

    cout<<"Qual é o limite numérico?"<<endl;
    cin>>limite;
    cout<<"Qual é o incremento dos valores?"<<endl;
    cin>>incremento;
    

    for(int i = 0; i<limite; i += incremento){
        cout<<i<<" ";
    }

    return 0;
}