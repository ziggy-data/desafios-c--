#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int ini = 1, f = 10 ;

    cout<<" Imprime os valores multiplos de 5"<<endl;
    cout<<"Qual é o começo?"<<endl;
    cin>>ini;
    cout<<"Qual é o fim?"<<endl;
    cin>>f;

    for(int i = ini; i < f; i++){
        if(i % 5 ==0)
            cout<< i <<" ";
    }

    return 0;
}