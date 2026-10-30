//Escreva um programa que imprima os seis primeiros pares de números primos gêmeos. Dois números são chamados de primos gêmeos se eles forem primos e a diferença entre os dois for igual a 2. (Por exemplo, 11 e 13 são primos gêmeos). 

#include<stdio.h>
#define quantidade 6
int main(){

    int pares = quantidade;
    int valor = 3;
    int atual = 2, anterior = 0;

    printf("Os seis primeiros pares de numeros primos gemeos sao: ");

    while(pares != 0){

        int primo = 0;

        for(int k=1; k<=valor; k++){

            if(valor % k == 0){
                primo++;
            }

        }

        if(primo == 2){

            anterior = atual;
            atual = valor;

            if(atual - anterior == 2){
                printf("[%d, %d]", anterior, atual);
                pares--;
            }

            valor++;

        }

        else{
            valor++;
        }

    }
    
    return 0;
    
}