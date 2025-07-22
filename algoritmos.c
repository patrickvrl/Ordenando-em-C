#include <stdio.h>
#include <stdlib.h>
#include "gera.h"
#include "algoritmos.h"

void bubblesort(int n, int* vetor){
    printf("Dados ordenados em Bubble Sort:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n - 1); j++){
            if(vetor[j] > vetor[j + 1]){
                int aux = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = aux;
            }
        }    
    }
    for(int i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }
}