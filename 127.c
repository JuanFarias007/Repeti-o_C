//Escreva um programa que leia um número inteiro N e verifique se ele pertence à série de Fibonacci. 

#include<stdio.h>

int main(){

    int num, sequencia, atual = 0, anterior = 1, contador = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    do{

        sequencia = atual + anterior; 
        anterior = atual; 
        atual = sequencia; 

        if(sequencia == num){
            contador++;
        }

    }
    while(sequencia <= num);
    
    if(contador == 1){
        printf("O numero %d pertece a serie de Fibonacci", num);
    }

    else{
        printf("O numero %d nao pertece a serie de Fibonacci", num);
    }

    return 0;

}