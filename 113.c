//Escreva um programa que leia um texto e verifique a quantidade de letras maiúsculas, a quantidade de letras minúsculas, a quantidade de numerais e a quantidade de demais caracteres. 

#include<stdio.h>
#define ordem 10

int main(){

    char texto[ordem];
    int  letra_maiuscula = 0, letra_minuscula = 0, numerais = 0, outros = 0;

    printf("Informe uma palavra: ");
    scanf("%s", texto);
    
    for(int k=0; texto[k] != '\0'; k++){

        if(texto[k] >= 65 && texto[k] <= 90){
            letra_maiuscula++;
        }

        else if(texto[k] >= 97 && texto[k] <= 122){
            letra_minuscula++;
        }

        else if(texto[k] >= 48 && texto[k] <= 57){
            numerais++;
        }

        else{
            outros++;
        }

    }

    printf("\n-- No texto possui --\n");
    printf("Letras maiusculas: %d\n", letra_maiuscula);
    printf("Letras minusculas: %d\n", letra_minuscula);
    printf("Numerais: %d\n", numerais);
    printf("Outros caracteres: %d\n", outros);

    return 0;

}