#include <iostream>
#include <stdlib.h>
#define tam 5
using namespace std;

void ordem_inversa(int vetor[tam]){
    for (int i = tam-1; i >= 0; i--){
        cout<<vetor[i]<<endl;
    }   
}

int main(){

    int a[tam] = {0,1,2,3,4};

    ordem_inversa(a);

    return 0;
}