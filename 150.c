//Escreva um programa que leia um número inteiro N e, a seguir leia vários números inteiros. O processo de leitura deve ser encerrado quando a soma dos números digitados pelo usuário (excluindo-se o valor de N) for superior ao valor de N. 

#include<stdio.h>

int main(){

    int num, soma = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    while(soma <= num){

        int valor;

        printf("Informe um numero: ");
        scanf("%d", &valor);

        soma = soma + valor;

    }

    return 0;
    
}