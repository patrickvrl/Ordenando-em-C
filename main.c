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

            // memcpy(vetorcopia, vetor, n * sizeof(int));
            // bubblesort(n, vetorcopia);

            // free(vetorcopia);
            // memcpy(vetorcopia, vetor, n * sizeof(int));

            // bubblesortstop(n, vetorcopia);
            // free(vetorcopia);

            // memcpy(vetorcopia, vetor, n * sizeof(int));
            // insertionsort(n, vetor);
            binarysort(n, vetor);
            // free(vetorcopia);

            break;
        case 2:
            gerarcrescente(n, vetor);
            break;
        case 3:
            gerardecrescente(n, vetor);
            break;
        default:
            printf("Opção inválida.");
            break;
    }

}