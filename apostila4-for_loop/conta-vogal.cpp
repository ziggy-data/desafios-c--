#include <iostream>
#include <string.h>
using namespace std;

int main() {
    
    int conta_a = 0,conta_e = 0,conta_i = 0,
    conta_o = 0,conta_u = 0;
    char nome[30];

    cout<<"Digite o nome para que as vogais sejam contadas"<<endl;
    cin>>nome;
        

    for (int i = 0; i < strlen(nome); i++){    
        if(nome[i] == 'A' || nome[i] == 'a'){
            conta_a++;
        }if(nome[i] == 'E' || nome[i] =='e'){
            conta_e++;
        }if(nome[i] == 'I' || nome[i] == 'i'){
            conta_i++;
        }if(nome[i] == 'O' || nome[i] == 'o'){
            conta_o++;
        }if(nome[i] == 'U' || nome[i] == 'u'){
            conta_u++;
        }
    }

    cout<<"Quantidade de A:"<<conta_a<<endl;
    cout<<"Quantidade de E:"<<conta_e<<endl;
    cout<<"Quantidade de I:"<<conta_i<<endl;
    cout<<"Quantidade de O:"<<conta_o<<endl;
    cout<<"Quantidade de U:"<<conta_u<<endl;
    return 0;
}