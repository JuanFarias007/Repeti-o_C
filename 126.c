//Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e um número inteiro N e imprima todos os termos da progressão menores ou iguais a N (caso a razão seja positiva) ou todos os termos maiores ou iguais a N (caso a razão seja negativa). 

#include<stdio.h>

int main(){

    int inicio, razao, num, progressao;

    printf("Informe o termo inical e a razao de uma PA: ");
    scanf("%d%d", &inicio, &razao);
    progressao = inicio;

    printf("Informe a quantidade de termos: ");
    scanf("%d", &num);

    printf("Os %d sao: ", num);

    if(razao >= 0){

        while(progressao <= num){

            printf("%d ", progressao);
            progressao = progressao + razao;

        }

    }

    else if(razao < 0){
        
        while(progressao >= num){

            printf("%d ", progressao);
            progressao = progressao + razao;

        }

    }
    
    return 0;

}