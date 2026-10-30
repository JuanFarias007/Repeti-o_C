//Escreva um programa que leia dois números inteiros M e N e imprima todos os números primos existentes no intervalo [M, N].

#include<stdio.h>

int main(){

    int num_inicio, num_fim;

    printf("Informe o inicio e fim de uma sequencia [M, N]: ");
    scanf("%d%d", &num_inicio, &num_fim);

    printf("Na sequencia [%d, %d] existem esse(s) numeros primos: ", num_inicio, num_fim);

    for(int k=num_inicio; k<=num_fim; k++){

        int contador = 0;

        for(int j=1; j<=k; j++){

            if(k % j == 0){
                contador++;
            }
        }

        if(contador == 2){
            printf("%d ", k);
        }
    }

    return 0;

}