#include <iostream>
using namespace std;

int main() {
    int vezes;

    cout<<"Quantas vezes você quer imprimir a palavra sol? "<<endl;
    cin>>vezes;
    for(int i=0; i<vezes ; i++){
        cout<<"Sol"<<endl;
    }
    return 0;
}