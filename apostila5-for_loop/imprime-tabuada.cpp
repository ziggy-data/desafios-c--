#include <iostream>
using namespace std;

int main() {
    double tabuada;

    cout<<"Digite um numero e verá a tabuada"<<endl;
    cin>>tabuada; 

    for (int i = 1; i <= 10; i++){
        cout<<tabuada<<" X "<<i<<" = "<<i*tabuada<<endl;
    }
    
    return 0;
}