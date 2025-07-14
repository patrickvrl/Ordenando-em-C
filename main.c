#include <stdio.h>
#include "gera.h"

void main(){

    printf("Digite a quantidade de numeros a serem gerados:\n");
    int n;
    scanf("%d", &n);
    printf("Digite:\n1 para gerar aleatorio;\n2 para gerar em ordem crescente;\n3 para gerar em ordem decrescente\n");
    int op;
    scanf("%d", &op);

    switch(op){
        case 1:
            geraraleatorio(n);
            break;
        case 2:
            gerarcrescente(n);
            break;
        case 3:
            gerardecrescente(n);
            break;
        default:
            printf("Opção inválida.");
            break;
    }

}