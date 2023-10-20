#include <stdio.h>

void inicializa_vetor(int *vet, int n) {
    int i;
    for (i = 0; i < n; i++) {
        vet[i] = 0;
    }  
}

void imprime_vetor(int *vet, int n){
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
}

int main(void) {
    int vet[10], i;
    
    inicializa_vetor(vet, 10);
    printf("Impressao do vetor apos inicializacao\n");
    imprime_vetor(vet, 10);

    //Mudando os valores do vetor
    for (i = 0; i < 10; i++) {
        vet[i] = i;
    }
    
    printf("\n\nImpressao do vetor apos atribuicao de valores\n");
    imprime_vetor(vet, 10);

    return(0);

}
