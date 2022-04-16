#include <iostream>
using namespace std;

int main(){

    double vetor_a[5],media=0,contador_igual_media=0,contador_30=0,contador_maior_media=0;
     
    for(int i=0;i<5;i++){
        cout<<"Digite o "<<i+1<<"º valor"<<endl;
        cin>>vetor_a[i];
    }

    for(int i=0;i<5;i++){
    media = media + vetor_a[i];
    }

    media = media/5;

    cout<<"valor média: "<<media<<endl;

    for(int i=0;i<5;i++){
        if(vetor_a[i]== 30){
            contador_30++;
        }
        if(vetor_a[i] > media){
            contador_maior_media++;
        }
        if(vetor_a[i]== media){
            contador_igual_media++;
        }
        
    }

    cout<<"Numeros maiores que media no vetor: "<<contador_maior_media<<endl;
    cout<<"Numeros igual a media no vetor: "<<contador_igual_media<<endl;
    cout<<"Numeros igual a 30 no vetor: "<<contador_30<<endl;

    return 0;
}