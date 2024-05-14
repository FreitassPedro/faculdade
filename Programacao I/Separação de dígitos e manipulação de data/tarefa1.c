/*
Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer. 
O programa em C deve mostrar na tela os dígitos do número na ordem contrária que foram informados.

Exemplo: se o valor informado foi 32417, o programa em C deve mostrar na tela os números 7,1,4,2,3. 
*/

#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    int a, b;
    /*
     o '/ 10' irá remover o ultimo digito e manter o restante
     o '% 10' irá coletar ultimo numero e excluir o restante' 
    
    */

    a = numero % 10;
    b = numero / 10;

    printf("porcentagem %d\n", a);
    printf("barra %d\n", b);
    
    while (numero > 0) {
        int ultimoNumero = numero % 10;
        printf("%d", ultimoNumero);
        numero /= 10;
    }
}