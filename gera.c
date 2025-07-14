#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void geraraleatorio(int n){
    srand(time(NULL));
    printf("%d numeros em ordem aleatoria:\n", n);
    for(int i = 0; i < n; i++){
    printf("%d\n", rand() % 100);}
}
void gerarcrescente(int n){
    printf("%d numeros em ordem crescente:\n", n);
    for(int i = 1; i < n + 1; i++){
        printf("%d\n", i);
    }
}
void gerardecrescente(int n){        
    printf("%d numeros em ordem descrescente:\n", n);
    
    for(int i = n; i > 0; i--){
        printf("%d\n", i);
        }
    }