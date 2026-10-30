//Escreva um programa que leia um texto e imprima o seu valor correspondente em caixa alta. Por exemplo, se o texto informado foi “Eu amo programar”, o programa deve imprimir o texto “EU AMO PROGRAMAR”. 

#include<stdio.h>
#define ordem 50

int main(){

    char texto[ordem];

    printf("Informe uma palavras: ");
    fgets(texto, sizeof(texto), stdin);

    for(int k=0; texto[k] != '\0'; k++){

        if(texto[k] >= 91){
            texto[k] = texto[k] - 32;
        }

    }

    printf("\n--Texto em caixa alta--\n");
    printf("%s", texto);

    return 0;

}