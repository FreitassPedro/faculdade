/*
    Sequencia de Fibbonacci
*/
#include <stdio.h>

int main() {

    int termoN;
    scanf("%d", &termoN);
    

    int termoN2 = 0;
    int termoN1 = 1;
    for(int i = 0; i<=termoN; i++) {
    printf("teste");    
        if(i == 0 || i == 1) continue;
        int soma = termoN1 + termoN2;
        printf("Termo %d: %d\n", i, soma);
        termoN2 = termoN1;
        termoN1 = soma;       
    }
}