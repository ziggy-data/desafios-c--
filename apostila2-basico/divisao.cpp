#include <iostream>
using namespace std;

int main() {
    double quociente,resto;
    int dividendo,divisor;

    cout<<"Esse código fará a troca dos valores das variáveis"<<endl;
    cout<<"Digite o dividendo"<<endl;
    cin>>dividendo;
    cout<<"Digite o divisor"<<endl;
    cin>>divisor;

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    cout<<"Dividendo "<<dividendo<<"   Divisor: "<<divisor<<endl
    <<"Resto: "<<resto<<"   Quociente: "<<quociente; 
    
    return 0;
}