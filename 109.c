//Escreva um programa que leia dois números inteiros M e N e um número inteiro X e imprima todos os divisores exatos de X existentes no intervalo [M, N].

#include<stdio.h>

int main(){

    int num_inicio, num_fim, num;

    printf("Informe o termo inicial e o final\n");
    printf("Inicio: ");
    scanf("%d", &num_inicio);
    printf("Final: ");
    scanf("%d", &num_fim);

    printf("Informe um numero: ");
    scanf("%d", &num);

    printf("Os divisores exatos de %d dentro da sequencia [%d, %d] eh ", num, num_inicio, num_fim);

    for(int k=num_inicio; k<=num_fim; k++){

        if(num % k == 0){
            printf("%d ", k);
        }

    }

    return 0;

}