#include <iostream>
#include <string.h>
using namespace std;

int main() {
    
    int conta_a = 0,conta_e = 0,conta_i = 0,
    conta_o = 0,conta_u = 0;
    char nome[30];

    cout<<"Digite o nome para que seja criptografado"<<endl;
    cin>>nome;
        

    for (int i = 0; i < strlen(nome); i++){    
        nome[i] = nome[i] + 3;
    }

    cout<<"Nome criptografado : "<<nome<<endl;
    return 0;
}