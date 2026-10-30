//Escreva um programa que leia dois números inteiros M e N e calcule o valor de MN. A potenciação deve ser calculada através de um comando de repetição, sem a utilização de qualquer função oferecida pela linguagem de programação.

#include<stdio.h>

int main(){

    int num_M, num_N;

    printf("Informe o numero e o valor a ser potencializado: ");
    scanf("%d%d", &num_M, &num_N);

    int potencia = 1;

    for(int k=1; k<=num_N; k++){
        potencia = potencia * num_M;
    }

    printf("A potencia de %d^%d eh %d", num_M, num_N, potencia);

    return 0;

}