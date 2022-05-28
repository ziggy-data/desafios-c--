#include <iostream>
using namespace std;

void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubble_sort(int *v){
    int houve_troca = 1;
    while(houve_troca == 1){
        houve_troca = 0;
        for (int i = 0; i < 5; i++){
            if(v[i] > v[i+1]){
                trocar(&v[i], &v[i+1]);
                houve_troca=1;
            }
        }
    }
}

void imprimir(int *v){
    for(int i = 0; i<5 ;i++){
        cout<<v[i]<<"\t";
    }
}

int main(){
    int v[5] = {5,4,3,2,1};
    bubble_sort(v);
    imprimir(v);
    return 0;
}
