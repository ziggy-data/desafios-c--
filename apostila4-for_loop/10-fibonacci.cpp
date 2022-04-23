#include <iostream>
using namespace std;

int main(){

    double serie, a = 0, b = 1, auxiliar;

    for(int i=0; i<=10 ; i++){
        if(serie <= 0){
            cout<<"Numero inválido"<<endl;
        }else{
            auxiliar = b + a;
            cout<<auxiliar<<endl;
            a = b;
            b = auxiliar;
        }

    }    

    return 0;

}

