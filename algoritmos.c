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

void quicksort_rec_centro(int* vetor, int esquerda, int direita, double* compara, double* troca){
    if (esquerda < direita){
        int pivo = vetor[(esquerda + direita) / 2];
        int i = esquerda;
        int j = direita;

        while (i <= j){
            while (vetor[i] < pivo){
                i++;
                (*compara)++;
            }
            while (vetor[j] > pivo){
                j--;
                (*compara)++;
            }
            if (i <= j){
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
                (*troca)++;
                i++;
                j--;
            }
        }

        quicksort_rec_centro(vetor, esquerda, j, compara, troca);
        quicksort_rec_centro(vetor, i, direita, compara, troca);
    }
}

void quicksortcentro(int n, int* vetor){
    double compara = 0;
    double troca = 0;
    printf("Dados ordenados com Quick Sort (pivo central):\n");
    inicio = clock();

    quicksort_rec_centro(vetor, 0, n - 1, &compara, &troca);

    fim = clock();
    // for(int i = 0; i < n; i++) printf("%d\n", vetor[i]);

    printf("Numero de comparacoes: %.0f\n", compara);
    printf("Numero de trocas: %.0f\n", troca);
    printf("Tempo de execucao: %3.5f segundos.\n", ((double)(fim - inicio)) / CLOCKS_PER_SEC);
}

void quicksort_rec_fim(int* vetor, int esquerda, int direita, double* compara, double* troca){
    if (esquerda < direita){
        int pivo = vetor[direita];
        int i = esquerda;
        int j = direita;

        while (i <= j){
            while (vetor[i] < pivo){
                i++;
                (*compara)++;
            }
            while (vetor[j] > pivo){
                j--;
                (*compara)++;
            }
            if (i <= j){
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
                (*troca)++;
                i++;
                j--;
            }
        }

        quicksort_rec_fim(vetor, esquerda, j, compara, troca);
        quicksort_rec_fim(vetor, i, direita, compara, troca);
    }
}

void quicksortfim(int n, int* vetor){
    double compara = 0;
    double troca = 0;
    printf("Dados ordenados com Quick Sort (pivo fim):\n");
    inicio = clock();

    quicksort_rec_fim(vetor, 0, n - 1, &compara, &troca);

    fim = clock();
    // for(int i = 0; i < n; i++) printf("%d\n", vetor[i]);

    printf("Numero de comparacoes: %.0f\n", compara);
    printf("Numero de trocas: %.0f\n", troca);
    printf("Tempo de execucao: %3.5f segundos.\n", ((double)(fim - inicio)) / CLOCKS_PER_SEC);
}

void quicksort_rec_mediana(int* vetor, int esquerda, int direita, double* compara, double* troca){
    if (esquerda < direita){
        int meio = (esquerda + direita) / 2;
        int pivo = (vetor[esquerda] + vetor[meio] + vetor[direita]) / 3;
        int i = esquerda;
        int j = direita;

        while (i <= j){
            while (vetor[i] < pivo){
                i++;
                (*compara)++;
            }
            while (vetor[j] > pivo){
                j--;
                (*compara)++;
            }
            if (i <= j){
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
                (*troca)++;
                i++;
                j--;
            }
        }

        quicksort_rec_mediana(vetor, esquerda, j, compara, troca);
        quicksort_rec_mediana(vetor, i, direita, compara, troca);
    }
}

void quicksortmediana(int n, int* vetor){
    double compara = 0;
    double troca = 0;
    printf("Dados ordenados com Quick Sort (pivo mediana):\n");
    inicio = clock();
    
    quicksort_rec_mediana(vetor, 0, n - 1, &compara, &troca);
    
    fim = clock();
    // for(int i = 0; i < n; i++) printf("%d\n", vetor[i]);
    
    printf("Numero de comparacoes: %.0f\n", compara);
    printf("Numero de trocas: %.0f\n", troca);
    printf("Tempo de execucao: %3.5f segundos.\n", ((double)(fim - inicio)) / CLOCKS_PER_SEC);
}

void merge(int* vetor, int esquerda, int meio, int direita, double* compara, double* troca) {
    int i, j, k;
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;
    
    int* left = (int*)malloc(n1 * sizeof(int));
    int* right = (int*)malloc(n2 * sizeof(int));
    
    for (i = 0; i < n1; i++){
        left[i] = vetor[esquerda + i];
        (*troca)++;
    }

    for (j = 0; j < n2; j++){
        right[j] = vetor[meio + 1 + j];
        (*troca)++;
    }
    
    
    
    i = 0;
    j = 0;
    k = esquerda;
    while (i < n1 && j < n2) {
        (*compara)++;
        if (left[i] <= right[j]) {
            vetor[k] = left[i];
            i++;
        } else {
            vetor[k] = right[j];
            j++;
        }
        k++;
        (*troca)++;
    }
    
    while (i < n1) {
        vetor[k] = left[i];
        i++;
        k++;
        (*troca)++;
    }
    
    while (j < n2) {
        vetor[k] = right[j];
        j++;
        k++;
        (*troca)++;
    }
    
    free(left);
    free(right);
}

void mergesort_rec(int* vetor, int esquerda, int direita, double* compara, double* troca) {

    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        
        mergesort_rec(vetor, esquerda, meio, compara, troca);
        mergesort_rec(vetor, meio + 1, direita, compara, troca);
        
        merge(vetor, esquerda, meio, direita, compara, troca);
    }

}

void mergesort(int* vetor, int n) {
    double compara = 0;
    double troca = 0;

    printf("Dados ordenados com Merge Sort:\n");

    inicio = clock();
    mergesort_rec(vetor, 0, n - 1, &compara, &troca);
    fim = clock();


    printf("Total de comparacoes: %.0f\n", compara);
    printf("Total de trocas: %.0f\n", troca);
    printf("Tempo de execucao: %3.5f segundos.\n", ((double)(fim - inicio)) / CLOCKS_PER_SEC);
}