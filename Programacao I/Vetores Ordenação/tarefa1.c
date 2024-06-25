/*
Desenvolva um programa em C que leia um vetor X(10). 
Compare a seguir cada elemento com o elemento da posição seguinte, 
trocando-os entre si se o elemento de maior valor estiver antes do de menor valor.
 Escreve o vetor no final.
*/

#include <stdio.h>

int main () {

    int qtdNumeros;
    scanf("%d", &qtdNumeros);

    printf("Insira os numeros: \n");
    int arrayN[qtdNumeros];
    for (int i = 0; i < qtdNumeros; i++) {
        scanf("%d", &arrayN[i]);
    }

    
    // Inverter ponteiros
    for (int i = 0; i < qtdNumeros; i++)    {
        if (arrayN[i] > arrayN[i + 1] && (i + 1) < qtdNumeros) {
            // Inverter ponteiros
            int aux = arrayN[i];
            arrayN[i] = arrayN[i + 1];
            arrayN[i + 1] = aux;
        }
    }

    for (int i = 0; i < qtdNumeros; i++) 
    {
        printf("%d, ", arrayN[i]);
    }

    return 0;
}
