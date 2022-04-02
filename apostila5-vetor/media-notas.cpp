#include <iostream>
using namespace std;

int main(){

    double pr1[3],pr2[3],media[3];
    string situacao[3];

    cout<<"Armazenamento de notas PR1 e PR2 de 3 alunos e fazendo a media e imprimindo:"<<endl;
    for(int i=0;i<3;i++){
        cout<<"insira nota PR1 do aluno "<<i<<" :"<<endl;
        cin>>pr1[i];
        cout<<"insira nota PR2 do aluno "<<i<<" :"<<endl;
        cin>>pr2[i];
    }

    for(int i=0;i<3;i++){
        media[i] = (pr1[i] + pr2[i])/2;
        if (media[i]>=7){
            situacao[i]="Aprovado";
        }else{
            situacao[i]="Reprovado";
        }
    }

    for(int i=0;i<3;i++){
        cout<<"Nota PR1 do aluno "<<i<<" :"<<endl;
        cout<<"PR1: "<<pr1[i]<<"  PR2: "<<pr2[i]<<
        "  Média: "<<media[i]<<"  Situação: "<<situacao[i]<<endl;
    }
    
    return 0;
}