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
            //Gerando dados aleatoriamente
            printf("Dados em ordem aleatoria:\n\n\n");
            geraraleatorio(n, vetor);
            
        //     memcpy(vetorcopia, vetor, n * sizeof(int)); insertionsort(n, vetorcopia);
            
        //     memcpy(vetorcopia, vetor, n * sizeof(int)); binarysort(n, vetorcopia);            
            
        //     memcpy(vetorcopia, vetor, n * sizeof(int)); shellsort(n, vetorcopia);
            
        //     memcpy(vetorcopia, vetor, n * sizeof(int)); selectionsort(n, vetorcopia);
            
        //     memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortcentro(n, vetorcopia);
            
             memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortfim(n, vetorcopia);
            
        //     memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortmediana(n, vetorcopia);
            
        //     memcpy(vetorcopia, vetor, n * sizeof(int)); mergesort(vetorcopia, n);
            
        //     memcpy(vetorcopia, vetor, n * sizeof(int)); heapsort(vetorcopia, n);
            
        //     memcpy(vetorcopia, vetor, n * sizeof(int)); radixsort(vetorcopia, n);
            
        //    memcpy(vetorcopia, vetor, n * sizeof(int)); bucketsort(vetorcopia, n);
            
        //     memcpy(vetorcopia, vetor, n * sizeof(int)); bubblesort(n, vetorcopia);

        //     memcpy(vetorcopia, vetor, n * sizeof(int)); bubblesortstop(n, vetorcopia);
            
            //Gerando dados em ordem decrescente
            printf("\n\nDados em ordem decrescente:\n\n\n");
            gerardecrescente(n, vetor);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); insertionsort(n, vetorcopia);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); binarysort(n, vetorcopia);            
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); shellsort(n, vetorcopia);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); selectionsort(n, vetorcopia);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortcentro(n, vetorcopia);
            
             memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortfim(n, vetorcopia);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortmediana(n, vetorcopia);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); mergesort(vetorcopia, n);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); heapsort(vetorcopia, n);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); radixsort(vetorcopia, n);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); bucketsort(vetorcopia, n);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); bubblesort(n, vetorcopia);

            // memcpy(vetorcopia, vetor, n * sizeof(int)); bubblesortstop(n, vetorcopia);

            //Gerando dados em ordem crescente
            printf("\n\nDados em ordem crescente:\n\n\n");
            gerarcrescente(n, vetor);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); insertionsort(n, vetorcopia);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); binarysort(n, vetorcopia);            
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); shellsort(n, vetorcopia);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); selectionsort(n, vetorcopia);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortcentro(n, vetorcopia);
            
             memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortfim(n, vetorcopia);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); quicksortmediana(n, vetorcopia);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); mergesort(vetorcopia, n);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); heapsort(vetorcopia, n);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); radixsort(vetorcopia, n);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); bucketsort(vetorcopia, n);
            
            // memcpy(vetorcopia, vetor, n * sizeof(int)); bubblesort(n, vetorcopia);

            // memcpy(vetorcopia, vetor, n * sizeof(int)); bubblesortstop(n, vetorcopia);

            free(vetor);
            break;
            default:
            printf("Opção inválida.");
            break;
    }

}