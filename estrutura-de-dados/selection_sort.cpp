#include <iostream>
using namespace std;

void trocar(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}


void selection_sort(int *v){
    int i,j,min;
    for (int j = i+1; j < 5; j++){
        if(v[j] < v[min]){
            min = j;
        }
        trocar(&v[i], &v[i+1]);
    }    
}

void imprimir(int *v){
    for(int i = 0; i<5 ;i++){
        cout<<v[i]<<"\t";
    }
}

int main(){
    int v[5] = {5,4,3,2,1};
    selection_sort(v);
    imprimir(v);
    return 0;
}