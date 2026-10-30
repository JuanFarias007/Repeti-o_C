//Escreva um programa que leia várias palavras e, para cada palavra lida, determine o seu número de letras. O processamento deverá ser encerrado quando forem lidas duas palavras de cinco letras.

#include <stdio.h>
#include <string.h>
#define ordem 20

int main() {

    int contador = 0;
    char palavra[ordem];

    while(contador != 2){

        printf("Informe uma palavra: ");
        fgets(palavra, sizeof(palavra), stdin);
        
        palavra[strcspn(palavra, "\n")] = '\0';

        int letra = strlen(palavra);

        if(letra == 5){
            contador++;
        }

    }

    printf("Fim");

    return 0;

}