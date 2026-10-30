//Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros números perfeitos. 

#include<stdio.h>

int main(){

    int num, perfeito = 6;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    printf("Os %d primeiros numeros perfeitos sao: ", num);

    while(num != 0){

        int soma = 0;

        for(int k=1; k<perfeito; k++){

            if(perfeito % k == 0){
                soma = soma + k;
            }

        }

        if(soma == perfeito){

            printf("%d ", perfeito);
            num--;

        }

        perfeito++;

    }

    return 0;

}