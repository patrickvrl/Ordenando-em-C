#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
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
    printf("Numero de comparacoes: %.0f\t", compara);
    printf("Numero de trocas: %.0f\t", troca);
    printf("Tempo de execucao: %3.5f segundos.\n\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
    
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
    // for(int i = 0; i < n; i++){
    //      printf("%d\n", vetor[i]);
    // }
    
    printf("Numero de comparacoes: %.0f\t", compara);
    printf("Numero de trocas: %.0f\t", troca);
    printf("Tempo de execucao:%3.5f segundos.\n\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
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
    //         printf("%d\n", vetor[i]);
    //     }
        printf("Numero de comparacoes: %.0f\t", compara);
        printf("Numero de trocas: %.0f\t", troca);
        printf("Tempo de execucao: %3.5f segundos.\n\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
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
    //         printf("%d\n", vetor[i]);
    //     }
        printf("Numero de comparacoes: %.0f\t", compara);
        printf("Numero de trocas: %.0f\t", troca);
        printf("Tempo de execucao: %3.5f segundos.\n\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
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
    //         printf("%d\n", vetor[i]);
    //     }
        
        printf("Numero de comparacoes: %.0f\t", compara);
        printf("Numero de trocas: %.0f\t", troca);
        printf("Tempo de execucao: %3.5f segundos.\n\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
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

    printf("Numero de comparacoes: %.0f\t", compara);
    printf("Numero de trocas: %.0f\t", troca);
    printf("Tempo de execucao: %3.5f segundos.\n\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
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

    printf("Numero de comparacoes: %.0f\t", compara);
    printf("Numero de trocas: %.0f\t", troca);
    printf("Tempo de execucao: %3.5f segundos.\n\n", ((double)(fim - inicio)) / CLOCKS_PER_SEC);
}

int particiona_lomuto(int* vetor, int esquerda, int direita, double* compara, double* troca){
    int pivo = vetor[direita];
    int i = esquerda - 1;

    for (int j = esquerda; j < direita; j++) {
        (*compara)++;  
        if (vetor[j] <= pivo) {  
            i++;
            int aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            (*troca)++;
        }
    }

    
    int aux = vetor[i + 1];
    vetor[i + 1] = vetor[direita];
    vetor[direita] = aux;
    (*troca)++;

    return i + 1;
}

void quicksort_rec_fim(int* vetor, int esquerda, int direita, double* compara, double* troca){
    if (esquerda < direita){
        int p = particiona_lomuto(vetor, esquerda, direita, compara, troca);
        quicksort_rec_fim(vetor, esquerda, p - 1, compara, troca);
        quicksort_rec_fim(vetor, p + 1, direita, compara, troca);
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

    printf("Numero de comparacoes: %.0f\t", compara);
    printf("Numero de trocas: %.0f\t", troca);
    printf("Tempo de execucao: %3.5f segundos.\n\n", ((double)(fim - inicio)) / CLOCKS_PER_SEC);
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
    
    printf("Numero de comparacoes: %.0f\t", compara);
    printf("Numero de trocas: %.0f\t", troca);
    printf("Tempo de execucao: %3.5f segundos.\n\n", ((double)(fim - inicio)) / CLOCKS_PER_SEC);
}


//HeapSort
void heapsort(int* vetor, int n){
    printf("Dados ordenados com Heap Sort:\n");
    double compara = 0;
    double troca = 0;
    int i, aux;
    inicio = clock();
    for(i = (n-1)/2; i>=0; i--){ //Cria a heap(max) a partir dos dados
        criaheap(vetor, i, n-1, &compara, &troca);
    }
    for(i=n-1; i>=1; i--){       //Reconstruir a heap
        aux = vetor[0];         
        vetor[0] = vetor[i];    
        vetor[i] = aux;         
        criaheap(vetor, 0, i-1, &compara, &troca);
    }
    fim = clock();

    // for(int i = 0; i < n; i++){
    //         printf("%d\n", vetor[i]);
    //     }
        
        printf("Numero de comparacoes: %.0f\t", compara);
        printf("Numero de trocas: %.0f\t", troca);
        printf("Tempo de execucao: %3.5f segundos.\n\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
    }
    
    void criaheap(int* vetor, int in, int fin, double* compara, double* troca){
        int aux = vetor[in];
        int j = in * 2 + 1;
        while(j <= fin){
            if(j < fin){                   //Pai tem 2 filos?
                if(vetor[j] < vetor[j+1]){ //Qual eh maior?
                    j = j+1;               //    
                }
            }
            
            if(aux < vetor[j]){       //Filho eh maior que o pai?
                (*compara)++;
                vetor[in] = vetor[j]; //Filho se torna pai!
                (*troca)++;
                in = j;               // Repetir processo
                j = 2 * in + 1;       //
            }
            else{
                (*troca)++;
                j = fin + 1; //Antigo pai ocupa lugar do ultimo filho analisado
            }
        }
        vetor[in] = aux;
        
    }
    
    double radix_trocas = 0;
    double radix_compara = 0;
    
    int getMaxelem(int* vetor, int n){
        int i;
        int max_ele = vetor[0];
        for(i = 1; i < n; i++){
            radix_compara++;
            if(vetor[i] > max_ele){
                max_ele = vetor[i];
            }
        }
        return max_ele;
    }
    
    void countingSort(int* vetor, int size, int place) {
    int output[size];
    int count[10] = {0};

    // Contagem de ocorrências
    for (int i = 0; i < size; i++) {
        int digito = (vetor[i] / place) % 10;
        count[digito]++;
    }

    // Acumula posições
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Monta o output em ordem estável
    for (int i = size - 1; i >= 0; i--) {
        int digito = (vetor[i] / place) % 10;
        output[count[digito] - 1] = vetor[i];
        radix_trocas++;
        count[digito]--;
    }

    // Copia de volta
    for (int i = 0; i < size; i++) {
        vetor[i] = output[i];
        radix_trocas++;
    }
}
    
    void radixsort(int* vetor, int n){
        printf("Dados ordenados com Radix Sort:\n");
        int place;
        int max = getMaxelem(vetor, n);
        
        inicio = clock();
        for(place = 1; max / place > 0; place *= 10){
            countingSort(vetor, n, place);
        }
        fim = clock();
        
        // for(int i = 0; i < n; i++){
        //      printf("%d\n", vetor[i]);
        // }

        printf("Numero de comparacoes: %.0f\t", radix_compara);
        printf("Numero de trocas: %.0f\t", radix_trocas);
        printf("Tempo de execucao: %3.5f segundos.\n\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);

    }
    
double contador_copias = 0;
double contador_comparacoes = 0;

void mergesort(int* vetor, int n){
    printf("Dados ordenados com Merge Sort:\n");
    inicio = clock();
    merge_sort_recursion(vetor, 0, n - 1);
    fim = clock();

    // for(int i = 0; i < n; i++){
    //      printf("%d\n", vetor[i]);
    //  }
    
    printf("Numero de comparacoes: %.0f\t", contador_copias);
    printf("Numero de trocas: %.0f\t", contador_comparacoes);
    printf("Tempo de execucao: %3.5f segundos.\n\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);
}

void merge_sort_recursion(int* vetor, int l, int r){
    if(l < r){
        int m = l + (r - l) / 2;
    
        merge_sort_recursion(vetor, l, m);
        merge_sort_recursion(vetor, m + 1, r);

        merge_sorted_arrays(vetor, l, m, r);
    }
}

void merge_sorted_arrays(int* vetor, int l, int m, int r){
    int left_length = m - l + 1;
    int right_length = r - m;

    int temp_left[left_length];
    int temp_right[right_length];

    int i, j, k;

    for(int i = 0; i < left_length; i++){
        temp_left[i] = vetor[l + i];
        contador_copias++;
    }

    for(int i = 0; i < right_length; i++){
        temp_right[i] = vetor[m + 1 + i];
        contador_copias++;
    }

    for(i = 0, j = 0, k = l; k <= r; k++){
        contador_comparacoes++;
        if ((i < left_length) && ((j >= right_length) || (temp_left[i] <= temp_right[j]))){
            vetor[k] = temp_left[i];
            i++;
            contador_copias++;
        }
        else{
            vetor[k] = temp_right[j];
            j++;
            contador_copias++;
        }
    }
}

double bucketcompara = 0;
double buckettroca = 0;

void insertionSort(int* vetor, int n) {
    for (int i = 1; i < n; i++) {
        int chave = vetor[i];
        int j = i - 1;
        while (j >= 0 && vetor[j] > chave) {
            bucketcompara++;
            vetor[j + 1] = vetor[j];
            buckettroca++;
            j--;
        }
        vetor[j + 1] = chave;
       buckettroca++;
    }
}


void bucketsort(int* vetor, int n) {
    printf("Dados ordenados em Bucket Sort:\n");
    if (n <= 1) return;

    int numbuckets = (int) sqrt(n);
    if (numbuckets < 1) numbuckets = 1;

    inicio = clock();
    /* achar min e max */
    int min = vetor[0], max = vetor[0];
    for (int i = 1; i < n; i++) {
        bucketcompara++;
        if (vetor[i] < min) min = vetor[i];
        bucketcompara++;
        if (vetor[i] > max) max = vetor[i];
    }
    int range = max - min + 1; /* >= 1 */

    /* alocar buckets dinamicamente para não encher a stack */
    int **buckets = malloc(numbuckets * sizeof(int*));
    if (!buckets) { perror("malloc"); exit(EXIT_FAILURE); }
    for (int i = 0; i < numbuckets; i++) {
        buckets[i] = malloc(n * sizeof(int)); /* cada bucket pode, no pior caso, receber n elementos */
        if (!buckets[i]) { perror("malloc"); exit(EXIT_FAILURE); }
    }

    int *contar = calloc(numbuckets, sizeof(int)); /* já vem zerado */
    if (!contar) { perror("calloc"); exit(EXIT_FAILURE); }

    /* distribuir elementos: normaliza entre 0..numbuckets-1 */
    for (int i = 0; i < n; i++) {
        long long normalized = (long long)(vetor[i] - min) * numbuckets;
        int idx = (int)(normalized / range);
        if (idx < 0) idx = 0;
        if (idx >= numbuckets) idx = numbuckets - 1;
        buckets[idx][contar[idx]++] = vetor[i];
    }

    /* ordenar cada bucket e concatenar */
    int k = 0;
    for (int i = 0; i < numbuckets; i++) {
        insertionSort(buckets[i], contar[i]);
        for (int j = 0; j < contar[i]; j++) {
            vetor[k++] = buckets[i][j];
        }
    }

    /* liberar memória */
    for (int i = 0; i < numbuckets; i++) free(buckets[i]);
    free(buckets);
    free(contar);
    fim = clock();

    // for(int i = 0; i < n; i++){
    //      printf("%d\n", vetor[i]);
    //  }

    printf("Numero de comparacoes: %.0f\t", bucketcompara);
    printf("Numero de trocas: %.0f\t", buckettroca);
    printf("Tempo de execucao: %3.5f segundos.\n\n", ((double) (fim - inicio)) / CLOCKS_PER_SEC);

}
