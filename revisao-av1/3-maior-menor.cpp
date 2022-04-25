#include <iostream>
#include <stdlib.h>
using namespace std;

void maior_menor(int a, int b){
    if(a>b){
        cout<<"Maior: "<<a<<endl;
        cout<<"Menor: "<<b<<endl;
    }else{
        cout<<"Maior: "<<b<<endl;
        cout<<"Menor: "<<a<<endl;
    }
}

int main(){

    maior_menor(3,2);

    return 0;

}