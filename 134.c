//Escreva um programa que leia dois números inteiros M e N e imprima todos os pares (x, y) possíveis de forma que x e y pertençam ao intervalo [M, N] e y seja sempre maior ou igual a x. 

#include<stdio.h>

int main(){

    int num_M, num_N;

    printf("Informe dois numeros inteiros: ");
    scanf("%d%d", &num_M, &num_N);

    for(int k=num_M; k<=num_N; k++){

        for(int j=k; j<=num_N; j++){
            printf("(%d, %d) ", k, j);
        }

        printf("\n");

    }

    return 0;

}