//Escreva um programa que leia um número N e imprima os N primeiros números primos positivos. 

#include <stdio.h>

int main() {

    int num, contador = 0, valor = 2;

    printf("Informe a quantidade de numeros primos: ");
    scanf("%d", &num);

    while(contador != num) {

        int primo = 0;

        for (int k = 1; k <= valor; k++){

            if(valor % k == 0) {
                primo++;
            }

        }

        if(primo == 2){
            printf("%d ", valor);
            valor++;
            contador++;
        }

        else{
            valor++;
        }

    }

    return 0;
}