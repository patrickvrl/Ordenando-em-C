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

void merge(int* vetor, int esquerda, int meio, int direita, double* compara, double* troca);
void mergesort_rec(int* vetor, int esquerda, int direita, double* compara, double* troca);
void mergesort(int* vetor, int n);