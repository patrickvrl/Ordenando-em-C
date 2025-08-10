#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gera.h"




int* geraraleatorio(int n, int* vetor){
    srand(time(NULL));
    //printf("%d numeros em ordem aleatoria:\n", n);
    for(int i = 0; i < n; i++){
        vetor[i] = rand() % 100000;
        //printf("%d\n", vetor[i]);
    }
    return vetor;
}

int* gerarcrescente(int n, int* vetor){
    //printf("%d numeros em ordem crescente:\n", n);
    for(int i = 0; i <= n; i++){
        vetor[i] = (i + 1) * 10;
        // printf("%d\n", vetor[i]);
    }
    return vetor;
}

int* gerardecrescente(int n, int* vetor){
    //printf("%d numeros em ordem descrescente:\n", n);
    
    for(int i = 0; i < n; i++){
        vetor[i] = (n - i) * 100;
        //printf("%d\n", vetor[i]);
    }
    return vetor;
}