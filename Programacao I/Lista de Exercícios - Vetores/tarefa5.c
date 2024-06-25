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

    srand(time(NULL));

    //gerar numeros aleatorios, só pra nao ficar digitando
    for (int i = 0; i < size; i++) {
        int num = rand() * (i + 1) % 50;
        firstVector[i] = num * 4;
        secondVector[i] = num * 2.2;
    }

    // Junta vetores
    size = 20;
    int thirdVector[size];
    int count = 0;
    for(int i = 0; i<size; i++) {
        if (count < 10) { 
            thirdVector[i] = firstVector[count];
        }
        else { 
            thirdVector[i] = secondVector[count]; 
        }
        if(i % 2 == 0 && i != 0) count++;
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