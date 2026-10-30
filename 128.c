//Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros números primos maiores ou iguais a M.

#include<stdio.h>

int main(){

    int num_M, num_N;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num_M);

    printf("Informe a quantidade de numeros que deseja encontrar: ");
    scanf("%d", &num_N);

    int contador = num_N;

    while(contador != 0){

        int primo = 0;

        for(int k=1; k<=num_M; k++){

            if(num_M % k == 0){
                primo++;
            }
        }

        if(primo == 2){
            contador--;
            printf("%d ", num_M);
            num_M++;
        }

        else{
            num_M++;
        }

    }

    return 0;

}