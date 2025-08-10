void bubblesort(int n, int* vetor);

void bubblesortstop(int n, int* vetor);

void insertionsort(int n, int* vetor);

void binarysort(int n, int* vetor);

void shellsort(int n, int* vetor);

void selectionsort(int n, int* vetor);

void quicksort_rec_centro(int* vetor, int esquerda, int direita, double* compara, double* troca);
void quicksortcentro(int n, int* vetor);
void quicksort_rec_fim(int* vetor, int esquerda, int direita, double* compara, double* troca);
void quicksortfim(int n, int* vetor);
void quicksort_rec_mediana(int* vetor, int esquerda, int direita, double* compara, double* troca);
void quicksortmediana(int n, int* vetor);

void heapsort(int* vetor, int n);
void criaheap(int* vetor, int in, int fin, double* compara, double* troca);

void countingSort(int* vetor, int size, int place);
void radixsort(int* vetor, int n);
int getMaxelem(int* vetor, int n);


void mergesort(int* vetor, int n);
void merge_sort_recursion(int* vetor, int l, int r);
void merge_sorted_arrays(int* vetor, int l, int m, int r);

void bucketsort(int* vetor, int n);