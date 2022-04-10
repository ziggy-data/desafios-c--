#include <iostream>
#include <math.h>
using namespace std;

int main(){

    double valor,cubo,raiz_cubica;

    for(int i=0; i<=4 ; i++){
        cout<<"Digite um valor : "<<endl;
        cin>>valor;
        cubo = valor*valor*valor;
        cout<<"Cubo: "<<cubo<<"   Raiz cubica: "<<cbrt(cubo)<<endl;

    }    

    return 0;

}

