//Escreva um programa que leia um número inteiro N e imprima o enésimo termo da série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...). 

#include<stdio.h>

int main(){

    int num, sequencia, atual = 0, anterior = 1;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    for(int k=0; k<num-1; k++){

        sequencia = atual + anterior;
        anterior = atual;
        atual = sequencia;

    }

    printf("O %d termo da serie de Fibonacci (contando com 0) eh %d", num, atual);

    return 0;

}