//Escreva um programa que leia dois números inteiros M e N e calcule a média aritmética dos números primos do intervalo [M, N].

#include<stdio.h>

int main(){

    int num_inicio, num_fim, contador = 0, total = 0;

    printf("Informe o inicio e fim de uma sequencia\n");
    printf("Inicio: ");
    scanf("%d", &num_inicio);
    printf("Fim: ");
    scanf("%d", &num_fim);

    for(int k=num_inicio; k<=num_fim; k++){

        int primo = 0;

        for(int j=1; j<=k; j++){

            if(k % j == 0){
                primo++;
            }

        }

        if(primo == 2){
            contador = contador + k;
            total++;
        }

    }

    float media = contador / total;

    printf("A media dos numeros primos no intervalo [%d, %d] eh %2.f", num_inicio, num_fim, media);

    return 0;

}