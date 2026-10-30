//Escreva um programa que leia o termo inicial e a razão de uma PA e um número inteiro positivo N e imprima os N primeiros termos da progressão. 

#include<stdio.h>

int main(){

    int termo_inical, razao, num;

    printf("Informe o termo inicio e a razao de uma PA\n");
    printf("Termo inicial: ");
    scanf("%d", &termo_inical);
    printf("Razao: ");
    scanf("%d", &razao);
    printf("Informe um numero para a quantidade de numeros: ");
    scanf("%d", &num);

    int PA = termo_inical;
    printf("PA = ");

    for(int k=termo_inical; k<=num+1; k++){

        printf("%d ", PA);
        PA = PA + razao;

    }

    return 0;

}
