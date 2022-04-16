#include <iostream>
using namespace std;

int main(){

    string nome[3];
    double salario[3], reajustado[3];

    for(int m=0;m<3;m++){
        cout<<"Digite o "<<m<<"º nome de 3"<<endl;
        cin>>nome[m];
        cout<<"Digite o "<<m<<"º salario de 3"<<endl;
        cin>>salario[m];

        reajustado[m]= salario[m] + (salario[m] * 0.08);

    }

    for(int a=0;a<3;a++){
        cout<<a<<"- Nome: "<<nome[a]<<" - Salario reajustado: "<<reajustado[a]<<endl;
    }

}

