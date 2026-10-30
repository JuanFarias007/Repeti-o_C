//Escreva um programa que leia um número inteiro N e imprima todos os termos da série de Fibonacci que são menores ou iguais a N.

#include<stdio.h>

int main(){

    int num, sequencia, atual = 0, anteiror = 1; 

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    printf("Os %d termos sao: ", num);

    for(int k=1; k<=num; k++){

        printf("%d ", atual);

        sequencia = atual + anteiror;
        anteiror = atual;
        atual = sequencia;

    }

    return 0;

}