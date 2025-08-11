#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "gera.h"
#include "algoritmos.h"

void main(){
    printf("Digite a quantidade de numeros a serem gerados:\n");
    int n;
    scanf("%d", &n);
    
    printf("Digite 1 para iniciar o programa.\n");
    int op;
    scanf("%d", &op);

    int* vetor = (int *) malloc(n * sizeof(int));
    
    int* vetorcopia = (int *) malloc(n * sizeof(int));

    switch(op){
        case 1:
            printf("\n\n\nOrdenacao em ordem aleatoria:\n\n\n");
            geraraleatorio(n, vetor);
            
            memcpy(vetorcopia, vetor, n * sizeof(int)); bubblesort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); bubblesortstop(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); insertionsort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); binarysort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); shellsort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); selectionsort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortcentro(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortfim(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortmediana(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); heapsort(vetor, n);
            memcpy(vetorcopia, vetor, n * sizeof(int)); radixsort(vetor, n);
            memcpy(vetorcopia, vetor, n * sizeof(int)); mergesort(vetor, n);
            memcpy(vetorcopia, vetor, n * sizeof(int)); bucketsort(vetor, n);
            
            printf("\n\n\nOrdenacao em ordem crescente:\n\n\n");
            gerarcrescente(n, vetor);
            
            memcpy(vetorcopia, vetor, n * sizeof(int)); bubblesort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); bubblesortstop(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); insertionsort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); binarysort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); shellsort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); selectionsort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortcentro(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortfim(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortmediana(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); heapsort(vetor, n);
            memcpy(vetorcopia, vetor, n * sizeof(int)); radixsort(vetor, n);
            memcpy(vetorcopia, vetor, n * sizeof(int)); mergesort(vetor, n);
            memcpy(vetorcopia, vetor, n * sizeof(int)); bucketsort(vetor, n);
            
            printf("\n\n\nOrdenacao em ordem decrescente:\n\n\n");
            gerardecrescente(n, vetor);
            
            memcpy(vetorcopia, vetor, n * sizeof(int)); bubblesort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); bubblesortstop(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); insertionsort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); binarysort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); shellsort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); selectionsort(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortcentro(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortfim(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortmediana(n, vetor);
            memcpy(vetorcopia, vetor, n * sizeof(int)); heapsort(vetor, n);
            memcpy(vetorcopia, vetor, n * sizeof(int)); radixsort(vetor, n);
            memcpy(vetorcopia, vetor, n * sizeof(int)); mergesort(vetor, n);
            memcpy(vetorcopia, vetor, n * sizeof(int)); bucketsort(vetor, n);
            free(vetor);
            free(vetorcopia);
            break;
        default:
            printf("Opção inválida.");
            break;
        }
}
