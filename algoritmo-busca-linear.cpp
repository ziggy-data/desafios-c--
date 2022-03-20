#include <iostream>
using namespace std;

int main(){


    //Algoritmo de busca linear verifica se uma variável de busca está
    // na lista percorrendo ela por completo e imprime se existe ou nao na busca

    int itemBusca, vetor[10], contador;

    cout<<"Qual a variável de busca: ";
    cin>>itemBusca;

    cout<<"Insira 10 numeros para preencher o vetor"<<endl;

    //Preenchimento do vetor
    for(int i =0;i<10;i++){
        cout<<"Insira o "<<i<<"º numero"<<endl;
        cin>>vetor[i];
    }

    //verificação dos indices com a busca
    for(int a =0;a<10;a++){
        if(vetor[a] == itemBusca){
            contador++;
        }
    }

    //Contagem de vezes que aparece ou se não aparece
    if(contador >=1){
        cout<<"A variável de busca existe "<<contador<<endl;
    }else{
        cout<<"A variável de busca não existe "<<endl;
    }

    return 0;
}

