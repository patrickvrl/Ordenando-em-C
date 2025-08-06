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
    printf("Digite:\n1 para gerar aleatorio;\n2 para gerar em ordem crescente;\n3 para gerar em ordem decrescente\n");
    int op;
    scanf("%d", &op);

    int* vetor = (int *) malloc(n * sizeof(int));
    
    int* vetorcopia = (int *) malloc(n * sizeof(int));

    switch(op){
        case 1:
            geraraleatorio(n, vetor);
            
            /*  
            memcpy(vetorcopia, vetor, n * sizeof(int));
            bubblesort(n, vetorcopia);
            memcpy(vetorcopia, vetor, n * sizeof(int));
            bubblesortstop(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            insertionsort(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            binarysort(n, vetorcopia);            

            memcpy(vetorcopia, vetor, n * sizeof(int));
            shellsort(n, vetorcopia);
            free(vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            selectionsort(n, vetorcopia);
            
            memcpy(vetorcopia, vetor, n * sizeof(int));
            quicksortcentro(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            quicksortfim(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            quicksortmediana(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            quicksortmediana(n, vetorcopia);
            
            memcpy(vetorcopia, vetor, n * sizeof(int));
            mergesort(vetorcopia, n);
            
            memcpy(vetorcopia, vetor, n * sizeof(int));
            heapsort(vetorcopia, n);
            */
            memcpy(vetorcopia, vetor, n * sizeof(int));
            radixsort(vetorcopia, n);

            break;

            case 2:
            gerarcrescente(n, vetor);
            /*
            memcpy(vetorcopia, vetor, n * sizeof(int));
            bubblesort(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            bubblesortstop(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            insertionsort(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            binarysort(n, vetorcopia);            

            memcpy(vetorcopia, vetor, n * sizeof(int));
            shellsort(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            selectionsort(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            quicksortcentro(n, vetorcopia);            
            */
            break;
            case 3:
            gerardecrescente(n, vetor);
            /*
            memcpy(vetorcopia, vetor, n * sizeof(int));
            bubblesort(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            bubblesortstop(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            insertionsort(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            binarysort(n, vetorcopia);            

            memcpy(vetorcopia, vetor, n * sizeof(int));
            shellsort(n, vetorcopia);

            memcpy(vetorcopia, vetor, n * sizeof(int));
            selectionsort(n, vetorcopia);
            */
            break;
            default:
            printf("Opção inválida.");
            break;
    }

}