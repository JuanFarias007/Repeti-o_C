//Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N é o número de elementos impressos na primeira linha.

#include<stdio.h>

int main(){

    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    for(int k=1; k<=num; k++){

        for(int j=k; j!=0; j--){
            printf("*");
        }

        printf("\n");
        
    }

    return 0;

}