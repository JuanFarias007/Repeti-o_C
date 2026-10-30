//Escreva um programa que leia um número inteiro positivo e calcule o número de algarismos deste número. 

#include<stdio.h>

int main(){

    int num, contador=0;

    printf("Informe um numero interio: ");
    scanf("%d", &num);

    int valor = num;

    while(valor != 0){
        
        valor = valor / 10;
        contador++;

    }

    printf("O numero %d tem %d algarismos", num, contador);

    return 0;

}