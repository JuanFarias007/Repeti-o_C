//Escreva um programa que leia um número inteiro positivo N e imprima a maior quantidade possível de números inteiros positivos de forma que a soma de todos os números impressos seja menor ou igual a N.

#include<stdio.h>

int main(){

    int num, soma = 0, sequencia = 1;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    printf("Os numeros sao: ");

    while(soma < num){

        printf("%d ", sequencia);
        soma = soma + sequencia;
        sequencia++;

    }

    return 0;
    
}