//Escreva um programa que leia um número inteiro N e calcule o primeiro número natural cujo fatorial é maior do que N.

#include<stdio.h>

int main(){

    int num, valor = 1, fatorial = 2;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    while(fatorial < num){

        for(int k=1; k<=valor; k++){
            fatorial = fatorial * k;
        }

         valor++;

    }

    printf("O numero natural cujo fatorial eh maior que %d eh %d, pois %d! = %d", num, valor, valor, fatorial);

    return 0;

}