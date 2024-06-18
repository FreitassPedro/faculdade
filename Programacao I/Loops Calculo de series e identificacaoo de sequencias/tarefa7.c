#include <stdio.h>

int main() {

    long a = 1;
    long b = 0;
    int nTermo = 2;


    printf("Os primeiros 10 numeros primos de Fibbonacci");
    int primosEncontrandos = 0;

    while (primosEncontrandos <= 10) { 
       int soma = a + b;
    
       int cout = 1;
        while (cout < nTermo) {
            int checker = (soma / cout) % 10;
            if (soma % 2 != 0) {
                if ((soma / cout) > checker) {
                    primosEncontrandos++;
                    printf("numero primo encontrado! %d\n", soma);
                    break;
                }
            }
            cout++;
        }
        nTermo++;
        b = a;
        a = soma;
    }

}