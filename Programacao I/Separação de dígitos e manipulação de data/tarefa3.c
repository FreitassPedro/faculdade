/*
Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer. 
O programa em C deve verificar se o número possui algum dígito repetido, mostrando na tela uma mensagem informando se o número contém ou não dígitos repetidos. 
*/

#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    
    while (numero > 0) 
    {
        int current = numero % 10;
        int aux = numero / 10;
        while (aux > 0) 
        {
            if (current == aux % 10) {
                printf("contem numero repetido");
            }
            aux /= 10;
        }
        numero /= 10;
        
    }
    
}


