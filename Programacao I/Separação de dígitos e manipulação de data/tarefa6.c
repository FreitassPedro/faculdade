/*
Desenvolva um programa em C que solicite ao usuário informar um número N inteiro até 9 dígitos. 

O programa em C deverá retirar os dígitos ímpares do número e mostrar na tela número resultante.
 Caso o número só possua dígitos ímpares, o programa em C deve apenas mostrar na tela uma mensagem sinalizando
 que o número só é formado por dígitos ímpares. 
*/

#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);
 
 int numeroFinal = 0;
 int casaUnidade = 1;
    while (numero > 0) {
        
        int ultimoDigito = numero % 10;
 
        if (ultimoDigito % 2 == 0 && ultimoDigito != 0) {
            numeroFinal += casaUnidade * ultimoDigito;
            casaUnidade *= 10;
        }

        numero /= 10; 
    }

    if (numeroFinal == 0) {
        printf("Existem apenas digitos impares");
    } else {
        printf("Numero sem impares: %d", numeroFinal);
    }
}
