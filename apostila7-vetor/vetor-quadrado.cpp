#include <iostream>
using namespace std;

int main(){

    double vetor_a[5],vetor_b[5];
     
    for(int i=0;i<5;i++){
        cout<<"Digite o "<<i+1<<"º valor"<<endl;
        cin>>vetor_a[i];
    }

    for(int i=0;i<5;i++){
        vetor_b[i] = vetor_a[i] * vetor_a[i];
        cout<<"Quadrado do "<<i<<"º valor: "<< vetor_b[i]<<endl;
    }

    return 0;
}