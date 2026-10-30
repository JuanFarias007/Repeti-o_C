//Escreva um programa que leia 10 números inteiros e, para cada número lido, calcule o seu fatorial. 

#include<stdio.h>
#define quantidade 5

int main(){

    int num, fatorial;

    for(int k=1; k<=quantidade; k++){

        printf("Informe um numero inteiro: ");
        scanf("%d", &num);
        fatorial = 1;

        for(int j=num; j>=2; j--){
            fatorial = fatorial * j;
        }

        printf("%d! = %d\n", num, fatorial);

    }

    return 0;

}