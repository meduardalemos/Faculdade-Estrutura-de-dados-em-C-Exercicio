#include <stdio.h>
#include <stdlib.h>

// Função para encontrar o valor máximo do vetor
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Função de ordenação do bucket sort
void bucketSort(int arr[], int n) {
    // Encontrar o valor máximo do vetor
    int max = findMax(arr, n);

    // Criar baldes
    int *buckets = (int *) malloc ((max + 1) * sizeof(int));
    for (int i = 0; i <= max; i++) {
        buckets[i] = 0;
    }

    // Colocar os elementos nos baldes
    for (int i = 0; i < n; i++) {
        buckets[arr[i]]++;
    }
    
    // Coloque os elementos de volta no vetor na ordem correta
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (buckets[i] > 0) {
            arr[index] = i;
            index++;
            buckets[i]--;
        }
    }

    // Libere a memória alocada para os baldes
    free(buckets);
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {6, 105, 97, 114, 116, 350, 301, 12, 85, 75};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Vetor original:\n");
    printArr(arr, n);

    bucketSort(arr, n);

    printf("Vetor ordenado:\n");
    printArr(arr, n);
    
    return 0;
}

