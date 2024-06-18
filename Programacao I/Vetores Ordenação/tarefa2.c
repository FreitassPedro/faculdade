#include <stdio.h>

int main() {
    int vetor[6] = {3, 5, 7, 9, 4, 1};

    for (int i = 0; i < 6; i++) {
        for (int j = i; j <= 6; j++) {
            
            if(vetor[i] > vetor[j] && j != i) {
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
        
    }
    
    printf("Lista Ordenada");
    for (int i = 0; i < 6; i++) {
        printf("%d, ", vetor[i]);
    }


}