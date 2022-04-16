//10- Entrar com números reais para dois vetores A e B de 10 elementos cada. Gerar e imprimir
//o vetor diferença.
#include <iostream>
using namespace std;

int main(){

    double primeiro[5],segundo[5],resultado[5];

    cout<<"Diferencça entre 2 vetores"<<endl;

    for(int m=0;m<3;m++){
        cout<<"Digite o "<<m<<"º operador"<<endl;
        cin>>primeiro[m];
        cout<<"Digite o "<<m<<"º segundo"<<endl;
        cin>>segundo[m];

        resultado[m] = primeiro[m] - segundo[m];

    }

    for(int c=2;c>=0;c--){
        cout<<primeiro[c]<<" - "<<segundo[c]<<" = "<<resultado[c]<<endl;
    }

}