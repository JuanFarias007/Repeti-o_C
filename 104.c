//Escreva um programa que leia um número inteiro N e verifique se ele é um número perfeito. Um número é perfeito quando ele é igual à soma de todos os seus divisores exatos exceto ele mesmo. Por exemplo, o número 6 (1+2+3) é um número perfeito. 

#include<stdio.h>

int main(){

    int num, perfeito = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    for(int k=1; k<num; k++){
        
        if(num % k == 0){
            perfeito = perfeito + k;
        }

    }

    if(perfeito == num){
        printf("O numero %d eh perfeito", num);
    }

    else{
        printf("O numero %d nao eh perfeito, a soma de seus divisores eh %d", num, perfeito);
    }

    return 0;
}