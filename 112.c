//Escreva um programa que leia um texto e, em seguida, leia dois caracteres x e y e substitua, no texto informado, todas as ocorrências do caractere x pelo caractere y. Por exemplo, se o texto informado foi “banana”, o caractere x for “a” e o caractere y for “e”, o texto deve ser alterado para “benene”. 

#include<stdio.h>
#define tamanho 10

int main(){

    char texto[tamanho];

    printf("Informe um palavra: ");
    scanf("%s", texto);

    char letra_x, letra_y;

    printf("Informe duas letras que serao trocadas: ");
    scanf(" %c %c", &letra_x, &letra_y);

    for(int k=0; texto[k] != '\0'; k++){

        if(texto[k] == letra_x){
            texto[k] = letra_y;
        }
    }

    printf("O texto trocado eh %s", texto);
    return 0;
    
}