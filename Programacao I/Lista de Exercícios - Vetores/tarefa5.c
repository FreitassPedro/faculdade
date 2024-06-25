/*
5) Desenvolva um programa em C que solicite ao usuário informar 10 números inteiros e armazene estes números em um vetor de 10 posições.
 Após leia mais 10 números inteiros e armazene em um segundo vetor de 10 posições. 
 Ordene cada um dos vetores em ordem decrescente. 
 Gere, a seguir, um terceiro vetor de vinte posições com os elementos do primeiro e do segundo vetor, também em ordem decrescente.
 Mostre os elementos do terceiro vetor em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int size = 10;
    int firstVector[size];
    int secondVector[size];
    int valores_first[] = {3, 5, 32, 12, 92, 18, 21, 55, 21, 22};
    int valores_second[] = {23, 11, 71, 909, 8, 0, 25, 85, 33, 21};

    // Inetar valores no array
    for (int i = 0; i < size; i++) {
    firstVector[i] = valores_first[i];
    secondVector[i] = valores_second[i];
    }

    // Junta vetores
    size = 20;
    int thirdVector[size];
    int count = 0;
    for(int i = 0; i<size; i++) {
        if (i % 2 > 0) { 
            thirdVector[i] = firstVector[count];
            count++;
        }
        else { 
            thirdVector[i] = secondVector[count]; 
        }
    }


    //Ordenar vetor
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (i == j) continue;

            if (thirdVector[j] > thirdVector[i]) {
                int aux = thirdVector[i];
                thirdVector[i] = thirdVector[j];
                thirdVector[j] = aux;
            }
        }
    }

    // Array ordenado
    printf("\n\nArray ordenado: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", thirdVector[i]);
    }
    
    
    

}