#include <iostream>
using namespace std;

int main(){
    string nome;
    double nota1,nota2,media;

    cout<<"Verifica se 2 numeros são iguais ou diferentes comparando qual é o maior valor"<<endl;
    cout<<"Digite seu nome: "<<endl;
    cin>>nome;
    cout<<"Digite um nota da PR1: "<<endl;
    cin>>nota1;
    cout<<"Digite um nota da PR2: "<<endl;
    cin>>nota2;

    media = (nota1 + nota2) /2;

    if(media < 3){
        cout<<"Nome: "<<nome<<endl;
        cout<<"Nota 1: "<<nota1<<endl;
        cout<<"Nota 2: "<<nota2<<endl;
        cout<<"Média: "<<media<<endl;
        cout<<"Status: Reprovado"<<endl;
    }else if(media >3 && media < 7){
        cout<<"Nome: "<<nome<<endl;
        cout<<"Nota 1: "<<nota1<<endl;
        cout<<"Nota 2: "<<nota2<<endl;
        cout<<"Média: "<<media<<endl;
        cout<<"Status: Prova Final"<<endl;
    }else{
        cout<<"Nome: "<<nome<<endl;
        cout<<"Nota 1: "<<nota1<<endl;
        cout<<"Nota 2: "<<nota2<<endl;
        cout<<"Média: "<<media<<endl;
        cout<<"Status: Aprovado"<<endl;
    }

return 0;

}    