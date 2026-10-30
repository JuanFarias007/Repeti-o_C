//Escreva um programa que leia dois números inteiros M e N e calcule a soma de todos os números do intervalo [M, N]. 

#include<stdio.h>

int main(){

    int num_inicio, num_fim, contador = 0;

    printf("Informe o inicio e fim de uma sequencia\n");
    printf("Inicio: ");
    scanf("%d", &num_inicio);
    printf("Fim: ");
    scanf("%d", &num_fim);

    for(int k=num_inicio; k<=num_fim; k++){
            
        contador = contador + k;
    }

    printf("A soma do intervalo [%d, %d] eh %d", num_inicio, num_fim, contador);

    return 0;

}