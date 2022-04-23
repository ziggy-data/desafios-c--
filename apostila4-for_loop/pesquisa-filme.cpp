#include <iostream>
using namespace std;

int main() {
    double idade, opiniao = 0, media_idade = 0, conta_otimo=0,
        conta_regular=0, conta_bom=0,porcentual=0; 

    for (int i = 0; i < 4; i++){    
        cout<<"Digite sua opiniao: ótimo (3); bom (2); regular (1)"<<endl;
        cin>>opiniao;
        cout<<"Digite a sua idade"<<endl;
        cin>>idade;  

        if(opiniao == 1){
            conta_regular++;
        }if(opiniao == 2){
            conta_bom++;
            porcentual = conta_bom / 4;
        }if(opiniao == 3){
            conta_otimo++;
            media_idade = conta_otimo / 4;
        }
    }

    cout<<"Porcetagem de pessoas que responderam bom: "<<porcentual<<endl;
    cout<<"Quantidade de pessoas que responderam regular: "<<conta_regular<<endl;
    cout<<"Média de idades das pessoas que responderam otimo: "<<media_idade<<endl;

    return 0;
}