/*
1) Desenvolva um programa em C que solicite ao usuário informar a temperatura média de todos os dias do mês de março
 e armazene estas temperaturas em um vetor de números reais.
 Após o programa em C deverá mostrar na tela a menor temperatura do mês de março, 
 a maior temperatura do mês de março, a temperatura média do mês de março,
 o número de dias no mês em que a temperatura foi inferior a média do mês e quais dias tiveram a temperatura menor que a media.*/
 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    int temperaturas[30];
    printf("Temperaturas registradas: ");
    for(int i=0; i < 30; i++) {
        int num = rand() % 100 * 0.5;
        temperaturas[i] = num;
        printf("Dia %d '%d C', ", i, num);
    }


    int highTemp = 0;
    int lessTemp = 0;
    int mediaTemp = 0;
    for (int i = 0; i < 30; i++)
    {
        int currentTemp = temperaturas[i];
        if (temperaturas[i] > highTemp) highTemp = currentTemp;
        if (temperaturas[i] < lessTemp) lessTemp = currentTemp;
        mediaTemp+=currentTemp;
    }

    mediaTemp /= 30;

    printf("\nMaior temperatura: %dC\n", highTemp);
    printf("Menor temperatura: %dC\n", lessTemp);
    printf("Media aritimetica das temperaturas: %dC", mediaTemp);
    


 }