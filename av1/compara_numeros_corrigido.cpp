#include <iostream>
using namespace std;

void compara_numeros(int a , int b){
    if(a<0){
        a = a * -1;
    }
    if(b<0){
        b = b * -1;
    }

    if (a > b){
        cout<<a<<" é maior que "<<b<<endl;
    }else{
        cout<<b<<" é maior que "<<a<<endl;
    }
}



int main(){

    /*Condição da prova: os valores atribuidos 
    devem ser comparados e o método deve devolver o maior valor. 
    O método deve saber se o número é maior ou menor que 0 e comparar
    */

    int a = -10;
    int b = 2;

    compara_numeros(a,b);

    int a = 10;
    int b = 2;

    compara_numeros(a,b);

    return 0;

}