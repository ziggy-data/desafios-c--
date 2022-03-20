#include <iostream>
using namespace std;

int main(){
    
    float a[10],b[10];
    cout<<"Insira o 10 numeros e veja o seus triplos"<<endl;

    for(int i =0;i<10;i++){

        cout<<"Insira o "<<i<<"º numero"<<endl;
        cin>>a[i];
        b[i] = a[i]*3;
    }

    for(int c =0;c<10;c++){

        cout<<"O triplo do "<<a[c]<<" é "<<b[c]<<endl;
    }

    return 0;
}