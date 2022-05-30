#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int size){
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int arr[] = { 50, 40, 30, 20, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    printArray(arr, size);
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
*/
    return 0;
}