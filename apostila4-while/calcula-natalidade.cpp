#include <iostream>
using namespace std;

int main(){

    int a = 5000000, b = 7000000, anos = 0, na = 0, nb = 0;

    while(b > a){
        na = a * 0.03;
        nb = b * 0.02;
        a = a + na ;
        b = b + nb;
        anos++;
    }

    cout<<"Levará "<<anos <<" para o país a passar o país b"<<endl;
    
}