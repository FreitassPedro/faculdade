/*
Desenvolva um programa em C que solicite ao usuário informar 20 números inteiros. 
O programa em C deverá verificar se os números informados formam alguma sequência estritamente crescente, mostrando na tela o primeiro e último valor da sequência. O programa em C deverá se preocupar em encontrar apenas uma sequência estritamente crescente, mesmo que os dados informados pelo usuário formem mais de uma sequência estritamente crescente.
*/

#include <stdio.h>

int main() {
     int digito;

    int numeroAnterior = 0;
    int maiorDigito = 0;
    int menorDigito = 0;
    for (int i = 1; i < 5; i++) {
        scanf("%d", &digito);
        if (i == 1) menorDigito = digito;
        if (digito >= numeroAnterior) { 
            numeroAnterior = digito; }
            else { continue; }
        if (digito > maiorDigito) maiorDigito = digito;
        if (digito < menorDigito) menorDigito = digito;
        }
        
    printf("Maior digito: %d\n", maiorDigito);
    printf("Menor digito %d", menorDigito);
}
