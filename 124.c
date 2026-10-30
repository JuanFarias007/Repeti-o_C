//Escreva um programa que leia dois números inteiros positivos M e N e imprima todos os termos da série de Fibonacci que pertencem ao intervalo [M, N].

#include<stdio.h>

int main(){

    int num_inicio, num_fim;
    int sequencia, atual = 0, anterior = 1;

    printf("--Informe o inicio e o fim da sequencia--\n");
    printf("Inicio: ");
    scanf("%d", &num_inicio);
    printf("Final: ");
    scanf("%d", &num_fim);

    printf("Os termos entre a sequencia [%d, %d] sao: ", num_inicio, num_fim);

    for(int k=1; k<=num_fim; k++){

        if(atual >= num_inicio && atual <= num_fim){
            printf("%d ", atual);
        }

        sequencia = atual + anterior;
        anterior = atual;
        atual = sequencia;

    }

    return 0;

}