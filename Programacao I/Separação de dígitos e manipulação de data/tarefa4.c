/*
Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer que possua 
no máximo 5 casas e que não seja maior que 99999.
 O programa em C deverá verificar quantas vezes cada dígito, de 0 a 9, aparece no número e mostrar esta informação na tela.

Exemplo: se o valor informado foi 32412, o programa em C deve mostrar na tela o dígito '2' aparece 2 vezes no número e 
que os dígitos 3, 4 e 1 aparecem apenas uma vez.
*/

#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    int frequencia_1 = 0, frequencia_2 = 0, frequencia_3 = 0, frequencia_4 = 0,
     frequencia_5 = 0, frequencia_6 = 0, frequencia_7 = 0, frequencia_8 = 0, frequencia_9 = 0, frequencia_0 =0;


    while (numero > 0) {
        int digitoAtual = numero % 10;
        
        if(digitoAtual == 0) frequencia_0++;
        if(digitoAtual == 1) frequencia_1++;
        if(digitoAtual == 2) frequencia_2++;
        if(digitoAtual == 3) frequencia_3++;
        if(digitoAtual == 4) frequencia_4++;
        if(digitoAtual == 5) frequencia_5++;
        if(digitoAtual == 6) frequencia_6++;
        if(digitoAtual == 7) frequencia_7++;
        if(digitoAtual == 8) frequencia_8++;
        if(digitoAtual == 9) frequencia_9++;
        
        numero /= 10;
    }

    printf("Frequncia do 0: %d\n", frequencia_0);
    printf("Frequncia do 1: %d\n", frequencia_1);
    printf("Frequncia do 2: %d\n", frequencia_2);
    printf("Frequncia do 3: %d\n", frequencia_3);
    printf("Frequncia do 4: %d\n", frequencia_4);
    printf("Frequncia do 5: %d\n", frequencia_5);
    printf("Frequncia do 6: %d\n", frequencia_6);
    printf("Frequncia do 7: %d\n", frequencia_7);
    printf("Frequncia do 8: %d\n", frequencia_8);
    printf("Frequncia do 9: %d\n", frequencia_9);

}