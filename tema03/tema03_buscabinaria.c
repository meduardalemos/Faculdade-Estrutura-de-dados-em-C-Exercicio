#include <stdio.h>

int buscaBinaria(int arr[], int tamanho, int elemento) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        // Se o elemento for encontrado no meio
        if (arr[meio] == elemento) {
            return meio;
        }

        // Se o elemento for maior do que o elemento do meio, descarte a metade à esquerda
        else if (arr[meio] < elemento) {
            inicio = meio + 1;
        }

        // Se o elemento for menor do que o elemento do meio, descarte a metade à direita
        else if (arr[meio] > elemento) {
            fim = meio - 1;
        }
    }

    // Se o elemento não for encontrado
    return -1;
}

int main(){
    int vetor[5] = {2, 5, 9, 13, 25};

int elemento = 25;
int tamanho = sizeof(vetor);

int resultado = buscaBinaria(vetor, tamanho, elemento);

printf("O elemento esta no indice: vetor[%d].", resultado);

return(0);    
}