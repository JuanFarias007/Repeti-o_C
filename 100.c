//Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros números pares positivos. 

#include<stdio.h>

int main(){

    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    for(int k=1; k<=num; k++){
        printf("%d ", k*2);
    }

    return 0;
}