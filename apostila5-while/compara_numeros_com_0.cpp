#include <iostream>
using namespace std;

void compara_numeros_positivo_negativo(float a ,float b){

    float contador_a = 0, contador_b = 0,guarda_a=a,guarda_b=b;

    if(a>0){
        while(a>0){
            a--;
            contador_a++;
        }
    }else{
        while(a<0){
        a++;
        contador_a++;
        }
    }

    if(b>0){
        while(b>0){
            b--;
            contador_b++;
        }
    }else{
        while(b<0){
            b++;
            contador_b++;
        }
    }

    a = guarda_a;
    b = guarda_b;

    if(contador_a>contador_b){
        cout<<"O maior valor é: "<<a<<endl;
    }else{
        cout<<"O maior valor é: "<<b<<endl;
    }
}

int main(){

    float a = 10, b =10.1;

    compara_numeros_positivo_negativo(a, b);

    return 0;
}

