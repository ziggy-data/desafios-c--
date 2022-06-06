#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
#define TAMANHO 6

void insertion (int *v)
{
    int j, aux;
    for (int i=0; i< TAMANHO-1; i++)
    {
        j=i+1;
        while (v[j-1]>v[j] && j > 0)
        {
            aux = v[j-1];
            v[j-1]=v[j];
            v[j]=aux;
            j--;
        }
    }
}


void printArray(int vetor[]){
    for (int i = 0; i < TAMANHO; i++)
        cout<<"Item "<<i<<" : "<<vetor[i]<<endl;
}

int main(){
    int vetor[TAMANHO] = { 4,7,2,5,4,0 };

    insertion(vetor);

    printArray(vetor);

/*
    Funcionamento: Percorre um vetor de elementos da esquerda
    para a direita e à medida que avança vai ordenando os elementos
    à esquerda.

    Tempo de complexidade: O(n2), ou seja, o melhor caso de funcionamento
    é quando o vetor está ordenado e o contrário é o pior.

    Condição de funcionamento -> Array[j] > elemento 

    Passo a passo: É procurada a posição em que o valor deverá ficar(corresponde
    a procurar a primeira posição da array que tem um valor maior do que o que
    queremos ordenar no array)


    a partir de uma lista pequena inserir numeros de uma forma ordenada, de forma
     que essa lista vai crescendo e será inserida numeros de forma ordenada.
*/
    return 0;
}