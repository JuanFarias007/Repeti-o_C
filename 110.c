//Escreva um programa que leia um número natural N e calcule o seu fatorial.

#include<stdio.h>

int main(){

    int num, fatorial = 1;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    for(int k=num; k>=2; k--){
        fatorial = fatorial * k;
    }

    printf("%d! = %d", num, fatorial);

    return 0;
}