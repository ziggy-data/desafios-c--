#include <iostream>
#include <stdlib.h>
using namespace std;

void ordem_inversa(int vetor[5]){
    for (int i = 4; i >= 0; i--){
        cout<<vetor[i]<<endl;
    }
    
}


int main(){

    int a[5] = {0,1,2,3,4};

    ordem_inversa(a);

    return 0;

}