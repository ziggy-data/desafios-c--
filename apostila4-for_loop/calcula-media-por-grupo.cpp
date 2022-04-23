#include <iostream>
using namespace std;

int main() {
    int idade, entre_1_10 = 0, entre_11_20 = 0, entre_21_30 = 0, acima_31 = 0,peso = 0,
    peso_1_10 = 0,peso_11_20 = 0,peso_21_30 = 0,peso_31 = 0,media_1_10 = 0,media_11_20 = 0,
    media_21_30 = 0, media_31 = 0 ;

    for (int i = 0; i < 4; i++){    
        cout<<"Digite o seu peso"<<endl;
        cin>>peso;
        cout<<"Digite a sua idade"<<endl;
        cin>>idade;  

        if(idade > 1 && idade < 10){
            entre_1_10++;
            peso_1_10 += peso;
            media_1_10 = peso_1_10 / entre_1_10;
        }if(idade > 11 && idade < 20){
            entre_11_20++;
            peso_11_20 += peso;
            media_11_20 = peso_11_20 / entre_11_20;
        }if(idade > 21 && idade < 30){
            entre_21_30++;
            peso_21_30 += peso;
            media_21_30 = peso_21_30 / entre_21_30;
        }if(idade > 30){
            acima_31++;
            peso_31 += peso;
            media_31 = peso_31 / acima_31;
        }
    }

    cout<<"Media do peso entre 1 e 10 anos: "<<media_1_10<<endl;
    cout<<"Media do peso entre 11 e 20 anos: "<<media_11_20<<endl;
    cout<<"Media do peso entre 21 e 30 anos: "<<media_21_30<<endl;
    cout<<"Media do peso entre 31 anos: "<<media_31<<endl;

    return 0;
}