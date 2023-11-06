#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int troca = 1;
    int i = 0;
    int aux;

    while (troca == 1) {
        troca = 0;
        while (i < n - 1) {
            if (arr[i] > arr[i+1]) {
                aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                troca = 1;
            }
            i++;
        }
        i = 0;
    }
}

void printArr(int arr[], int n){
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
}

int main(){
    
    int arr[7] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Vetor antes da ordenacao\n");
    printArr(arr, n);
    bubbleSort(arr, n);
    
    printf("Vetor apos a ordenacao\n");
    printArr(arr, n);
    
    return 0;
}