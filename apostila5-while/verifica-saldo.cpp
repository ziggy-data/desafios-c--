#include <iostream>
using namespace std;

int main(){

    int numero,contadorSaldoPositivo = 0,contadorSaldoNegativo = 0,totalClientes=0;
    float saldo = 0,percentualNegativos = 0;

    while(numero >= 0){

        totalClientes++;
        if(saldo>=0){
            contadorSaldoPositivo++;
            cout<<"Saldo Positivo: "<<saldo<<endl;
        }else{
            contadorSaldoNegativo++;
            cout<<"Saldo Negativo: "<<saldo<<endl;
        }
        cout<<"Digite o numero da conta, Para parar digite um numero negativo"<<endl;
        cin>>numero;
        cout<<"Digite o saldo da conta"<<endl;
        cin>>saldo;
    }

    percentualNegativos = contadorSaldoNegativo/contadorSaldoPositivo;

    cout<<"Total de clientes: "<<totalClientes<<endl;
    cout<<"Percentual de saldos negativos: "<<percentualNegativos<<endl;

    return 0;
}