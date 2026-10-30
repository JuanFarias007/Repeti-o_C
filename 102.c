//Escreva um programa que leia um número inteiro N e imprima todos os seus divisores exatos.

#include<stdio.h>

int main(){

    int num;

    printf("Informe um numero interio: ");
    scanf("%d", &num);

    printf("Os divisores exatos de %d sao: ", num);

    for(int k=1; k<=num; k++){

        if(num % k == 0){
            printf("%d ", k);
        }
        
    }

    return 0;
}