//Escreva um programa que leia um número inteiro N e verifique se ele é um número primo. 

#include<stdio.h>

int main(){

    int num, contador = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    for(int k=1; k<=num; k++){

        if(num % k == 0){
            contador++;
        }

    }

    if(contador == 2){
        printf("O numero %d eh primo", num);
    }

    else{
        printf("O numero %d nao eh primo, ele tem %d divisores", num, contador);
    }

    return 0;
    
}