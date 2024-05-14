/*
02) Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer.
 O programa em C deverá verificar quantas vezes o dígito 2 aparece no número e mostrar esta informação na tela.

Exemplo: se o valor informado foi 32412, o programa em C deve mostrar na tela o dígito  2 ocorre 2 vezes no número. 
*/

#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);


     int aparicoesDoDois = 0;
    while (numero > 0) {
        int digito = numero % 10;
        if (digito == 2) aparicoesDoDois++;
        numero /= 10;
    }

    printf("%d", aparicoesDoDois);

}