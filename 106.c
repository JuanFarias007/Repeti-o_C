//Escreva um programa que leia dois números inteiros M e N e calcule a média aritmética dos números do intervalo [M, N].

#include<stdio.h>

int main(){

    int num_inicio, num_fim, contador = 0, total = 0;

    printf("Informe o inicio e fim de uma sequencia\n");
    printf("Inicio: ");
    scanf("%d", &num_inicio);
    printf("Fim: ");
    scanf("%d", &num_fim);

    for(int k=num_inicio; k<=num_fim; k++){
            
        contador = contador + k;
        total++;

    }

    float media = contador / total;

    printf("A media dos numeros no intervalo [%d, %d] eh %2.f", num_inicio, num_fim, media);

    return 0;

}