#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int ini = 1, f = 10 ;

    cout<<"Neste algoritmo você digita o inicio da contagem e o fim apenas de numero naturais "<<endl;
    cout<<"Qual é o começo?"<<endl;
    cin>>ini;
    cout<<"Qual é o fim?"<<endl;
    cin>>f;

    for(int i = ini; i < f; i++){
        cout<< i <<" ";
    }

    return 0;
}