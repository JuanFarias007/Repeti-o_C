//Escreva um programa que leia um número inteiro positivo N e informe o primeiro termo da série de Fibonacci que é maior do que N.

#include<stdio.h>

int main(){

    int num, sequencia, atual = 0, anterior = 1;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    for(int k=1; k<=num; k++){

        sequencia = atual + anterior;
        anterior = atual;
        atual = sequencia;

    }

    printf("O primeiro termo maior que %d eh %d", num, atual);

    return 0;

}