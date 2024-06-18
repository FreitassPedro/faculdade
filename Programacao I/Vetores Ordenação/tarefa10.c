#include <stdio.h>

/*
Desenvolva um programa em C leia dois vetores V(10) e W(10), ordenando cada um em ordem crescente. 
Gere, a seguir, um vetor Z(20) com os elementos de V e W, também em ordem crescente. Escreva o vetor Z.
*/
int main() {
    int vetorV[6] = {3, 5, 32, 12, 92, 18};
    int vetorW[6] = {23, 11, 71, 909, 8, 0};

    // Ordernar VetorV
    for (int i = 0; i < 6; i++) {
        for (int j = i; j < 6; j++) {
            if(vetorV[i] > vetorV[j] && j != i) {
                int aux = vetorV[i];
                vetorV[i] = vetorV[j];
                vetorV[j] = aux;
            }
        }
    }

    // Ordernar VetorW
    for (int i = 0; i < 6; i++) {
        for (int j = i; j < 6; j++) {
            if(vetorW[i] > vetorW[j] && j != i) {
                int aux = vetorW[i];
                vetorW[i] = vetorW[j];
                vetorW[j] = aux;
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        printf("vetor[%d] -> %d %d\n", i, vetorV[i], vetorW[i]);
    }
    


    printf("\n\nSeparador antes de imprimir lista final\n\n");


    int vetorSaida[12];
    int count = 0;
    // Ordernar variáveis dos vetores V & W
    for (int i = 0; i < 6; i++)
    {
        
        if (vetorV[i] < vetorW[i]) {
            vetorSaida[count] = vetorV[i];
            vetorSaida[count + 1] = vetorW[i];
        } else {
            vetorSaida[count] = vetorW[i];
            vetorSaida[count + 1] = vetorV[i];
        }
        count+=2;
    }

    printf("[");
    for (int i = 0; i < 12; i++)
    {
        if (i + 1 == 12) printf("%d]", vetorSaida[i]);
        else printf("%d, ", vetorSaida[i]);
    }
    return 0;


}