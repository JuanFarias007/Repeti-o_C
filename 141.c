//Escreva um programa que leia um número inteiro positivo N e calcule o seu valor correspondente em binário.

#include<stdio.h>
#define divisor 2
int main(){

    int num, binario = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    int valor = 1;

    while(num != 0){

        binario = binario + (num % divisor) * valor;
        num = num / divisor;

        valor = valor * 10;
    }

    printf("%d", binario);

    return 0;

}