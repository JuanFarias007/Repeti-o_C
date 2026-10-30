//Escreva um programa que leia um número inteiro positivo e calcule a soma de todos os seus algarismos

#include<stdio.h>

int main(){

    int num, soma=0;

    printf("Informe um numero interio: ");
    scanf("%d", &num);

    int valor = num;
    int resto;

    do{
        
        resto = valor;
        valor = valor / 10;
        resto = resto % 10;

        soma = soma + resto;

    }
    while(valor != 0);

    printf("A soma de todos os algarismos do numero %d eh %d", num, soma);

    return 0;

}