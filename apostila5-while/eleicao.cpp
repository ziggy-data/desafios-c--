#include <iostream>
using namespace std;

int main(){

    int contagem = 0,somaDePerdedores = 0,contaNulos=0, contaBranco =0,voto1=0,voto2=0,voto3=0,voto4=0,voto=0;
    int percentualAbstencao=0,totalAbstencao=0,totalVotos=0;

    while(contagem <= 11){

    cout<<"1-4 Para votar em candidatos, 5 é nulo e 6 como branco"<<endl;
    cin>>voto;

    if(voto==1){
        voto1++;
    }if(voto==2){
        voto2++;
    }if(voto==3){
        voto3++;
    }if(voto==4){
        voto4++;
    }if(voto==5){
        contaNulos++;
    }if(voto==6){
        contaBranco++;
    }

    contagem++;
    }

    totalVotos = voto1+voto2+voto3+voto4;
    totalAbstencao = contaBranco + contaNulos;

    percentualAbstencao = totalAbstencao / totalVotos;

    cout<<"Percentual de abstencao: "<<percentualAbstencao<<endl;


    if(voto1 > voto2 && voto1 > voto3 && voto1 > voto4){
        voto1++;
        somaDePerdedores = voto2+voto3+voto4;
        if(voto1 > somaDePerdedores){
            cout<<"O total dos votos dos outros candidatos não chegam no total do candidato 1 "<<endl;
        }
    }if(voto2 > voto1 && voto2 > voto3 && voto2 > voto4){
        voto2++;
        somaDePerdedores = voto1+voto3+voto4;
        if(voto2 > somaDePerdedores){
            cout<<"O total dos votos outros candidatos não chegam no total do candidato 2 "<<endl;
        }
    }if(voto3 > voto1 && voto3 > voto2 && voto3 > voto4){
        cout<<"O vencedor foi o canditado 3"<<endl;
        somaDePerdedores = voto2+voto1+voto4;
        if(voto3 > somaDePerdedores){
            cout<<"O total dos votos outros candidatos não chegam no total do candidato 3 "<<endl;
        }
    }if(voto4 > voto1 && voto4 > voto2 && voto4>voto3){
        voto4++;
        somaDePerdedores = voto2+voto3+voto1;
        if(voto4 > somaDePerdedores){
            cout<<"O total dos votos outros candidatos não chegam no total do candidato 4 "<<endl;
        }
    }


    return 0;
}