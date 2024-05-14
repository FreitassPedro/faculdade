/*
Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer. 
O programa em C deve verificar se o número possui algum dígito repetido, mostrando na tela uma mensagem informando se o número contém ou não dígitos repetidos. 
*/

#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    
    int numeroRepetido = 0;
    while (numero > 0) {
        int digitoAtual = numero % 10;
        int auxNumero = numero / 10;
        while (auxNumero > 0) {
            if (digitoAtual == auxNumero % 10) numeroRepetido++;
            auxNumero /= 10;
        }
        numero /= 10;
    }

    if (numeroRepetido > 0) printf("Possui numero repetido");
}


