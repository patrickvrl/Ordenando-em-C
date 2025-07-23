#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gera.h"
#include "algoritmos.h"

//Inicializando os valores do relógio fora das funções
clock_t inicio, fim;

//Algoritmo Bubble Sort
void bubblesort(int n, int* vetor){
    int compara = 0;
    int troca = 0;
    printf("Dados ordenados em Bubble Sort:\n");
    inicio = clock();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n - 1); j++){
            compara++;
            if(vetor[j] > vetor[j + 1]){
                int aux = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = aux;
                troca++;
            }
        }    
    }
    fim = clock();
    // for(int i = 0; i < n; i++){
    //     printf("%d\n", vetor[i]);
    // }
    printf("Numero de comparacoes: %d\n", compara);
    printf("Numero de trocas: %d\n", troca);
    printf("Tempo de execucao: %1.9f segundos.\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
}
//Algoritmo Bubble Sort com critério de parada
void bubblesortstop(int n, int* vetor){
    printf("Dados ordenados em Bubble Sort (com criterio de parada):\n");
    int compara = 0;
    int troca = 0;    
    int mudou = 1;
    int j;
    int tamanho = n;
    int indice = n - 1;
    inicio = clock();
    while(mudou == 1){
        j = 1;
        mudou = 0;
        while(j < tamanho){
            compara++;
            if(vetor[j - 1] > vetor[j]){
                int aux = vetor[j - 1];
                vetor[j - 1] = vetor[j];
                vetor[j] = aux;
                mudou = 1;
                troca++;
            }
            indice = j;
            j += 1;
         }
        tamanho = indice;
    }
    fim = clock();
    // for(int i = 0; i < n; i++){
    //     printf("%d\n", vetor[i]);
    // }

    printf("Numero de comparacoes: %d\n", compara);
    printf("Numero de trocas: %d\n", troca);
    printf("Tempo de execucao: %3.5f segundos.\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
}