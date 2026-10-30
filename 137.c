//Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N é o número de elementos impressos na primeira linha.

#include<stdio.h>

int main(){

    int num, valor = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    for(int k=1; k<=num; k++){

        for(int m=1; m<=valor; m++){
            printf(" ");
        }

            for(int j=num; j>=k; j--){
                printf("*");
            }
        
        printf("\n");
        valor++;
        
    }

    return 0;

}