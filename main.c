#include <stdio.h>
#include <stdlib.h>
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
    
    switch(op){
        case 1:
            geraraleatorio(n, vetor);
            bubblesort(n, vetor);
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