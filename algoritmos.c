#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gera.h"
#include "algoritmos.h"

//Inicializando os valores do relógio fora das funções
clock_t inicio, fim;

//Algoritmo Bubble Sort
void bubblesort(int n, int* vetor){
    double compara = 0;
    double troca = 0;
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
    //  for(int i = 0; i < n; i++){
    //      printf("%d\n", vetor[i]);
    //  }
    printf("Numero de comparacoes: %.0f\n", compara);
    printf("Numero de trocas: %.0f\n", troca);
    printf("Tempo de execucao: %3.3f segundos.\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
}
//Algoritmo Bubble Sort com critério de parada
void bubblesortstop(int n, int* vetor){
    printf("Dados ordenados em Bubble Sort (com criterio de parada):\n");
    double compara = 0;
    double troca = 0;    
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
    //  for(int i = 0; i < n; i++){
    //      printf("%d\n", vetor[i]);
    //  }
    
    printf("Numero de comparacoes: %.0f\n", compara);
    printf("Numero de trocas: %.0f\n", troca);
    printf("Tempo de execucao: %3.5f segundos.\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
}

void insertionsort(int n, int* vetor){
    double compara = 0;
    double troca = 0;
    
    
    printf("Dados ordenados com Insertion Sort:\n");
    inicio = clock();
    for(int i = 1; i < n; i++){
        int aux = vetor[i];
        int j = i - 1;
        
        while(j >= 0 && aux < vetor[j]){
            vetor[j+1] = vetor [j];
            troca++;
            j--;
        }
        if(j != (i - 1)){
            compara++;
            vetor[j+1] = aux;
        }
    }
    fim = clock();
    
    // for(int i = 0; i < n; i++){
        //     printf("%d\n", vetor[i]);
        // }
        printf("Numero de comparacoes: %.0f\n", compara);
        printf("Numero de trocas: %.0f\n", troca);
        printf("Tempo de execucao: %3.5f segundos.\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
    }
    
    void binarysort(int n, int* vetor){
    double compara = 0;
    double troca = 0;
    printf("Dados ordenados com Binary Sort:\n");
    inicio = clock();
    
    for(int i = 1; i < n; i++){
        int aux = vetor[i];
        int esq = 0;
        int dir = i - 1;
        
        while (esq <= dir){
            compara++;
            int meio = (esq + dir) / 2;
            if(aux < vetor[meio]){
                dir = meio - 1;
            }
            else{
                esq = meio + 1;
            }
        }
        
        int j = i - 1;
        while(j >= esq){
            vetor[j+1] = vetor[j];
            troca++;
            j--;
        }
        
        vetor[esq] = aux;
        troca++;
    }
    fim = clock();
    
    // for(int i = 0; i < n; i++){
        //     printf("%d\n", vetor[i]);
        // }
        printf("Numero de comparacoes: %.0f\n", compara);
        printf("Numero de trocas: %.0f\n", troca);
        printf("Tempo de execucao: %3.5f segundos.\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
    }
    
    void shellsort(int n, int* vetor){
    double compara = 0;
    double troca = 0;

    printf("Dados ordenados com Shell Sort:\n");

    inicio = clock();
    
    int h = 1;
    while (h < n){
        h = 3 * h + 1; //não sei se adiciona parenteses
    }
    while (h > 1){
        h = h / 3;
        for (int i = h; i < n; i++){
            int aux = vetor[i];
            int j = i - h;
            
            while(j >= 0 && aux < vetor[j]){
                compara++;
                vetor[j+h] = vetor[j];
                troca++;
                j = j - h;
            }
            vetor[j+h] = aux;
            troca++;
        }
    }

    fim = clock();
    
    // for(int i = 0; i < n; i++){
        //     printf("%d\n", vetor[i]);
        // }
        
        printf("Numero de comparacoes: %.0f\n", compara);
        printf("Numero de trocas: %.0f\n", troca);
        printf("Tempo de execucao: %3.5f segundos.\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
    }
    
    void selectionsort(int n, int* vetor){
    double compara = 0;
    double troca = 0;
    
    printf("Dados ordenados com Selection Sort:\n");

    inicio = clock();

    for (int i = 0; i < n - 1; i++){
        int menor = i;
        for(int j = i + 1; j < n; j++){
            if(vetor[j] < vetor[menor]){
                compara++;
                menor = j;
            }
        }
        if(i != menor){
            int aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
            troca++;
        }
    }
    fim = clock();
    
    // for(int i = 0; i < n; i++){
    //         printf("%d\n", vetor[i]);
    //     }

    printf("Numero de comparacoes: %.0f\n", compara);
    printf("Numero de trocas: %.0f\n", troca);
    printf("Tempo de execucao: %3.5f segundos.\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
}