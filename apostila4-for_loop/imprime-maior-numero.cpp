#include <iostream>
using namespace std;

int main(){

    double maior=0,a;

    for(int a=0;a<100;a++){
        if(maior<a){
            maior = a;

        }
    }

    cout<<"O maior valor é: "<<maior<<endl;

}