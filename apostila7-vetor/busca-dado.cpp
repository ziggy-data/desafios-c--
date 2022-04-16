#include <iostream>
using namespace std;

int main(){

    string nome[3],endereco[3],telefone[3],nome_busca;

    for(int i=0;i<3;i++){
        cout<<"Digite o nome "<<i+1<<" :"<<endl;
        cin>>nome[i];
        cout<<"Digite o endereco "<<i+1<<" :"<<endl;
        cin>>endereco[i];
        cout<<"Digite o telefone "<<i+1<<" :"<<endl;
        cin>>telefone[i];
    }

    cout<<"Insira o nome de busca :"<<endl;
    cin>>nome_busca;

    for (int i = 0; i < 3; i++){
        if(nome_busca == nome[i]){
            cout<<"Nome: "<<nome[i]<<endl;
            cout<<"Endereco: "<<endereco[i]<<endl;
            cout<<"Telefone: "<<telefone[i]<<endl;
        }
    }

    return 0;
}