//Escreva um programa que leia 10 números reais distintos e calcule o segundo maior número lido.

#include<stdio.h>
#define numero 5

int main(){

    int num, maior, segundo_maior;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    maior = num;

    printf("Informe outro numero inteiro: ");
    scanf("%d", &num);

    if(num > maior){
        segundo_maior = maior;
        maior = num;
    }

    else if(num > segundo_maior){
        segundo_maior = num;
    }

    for(int k=1; k<=numero - 2; k++){

        printf("Informe outro numero inteiro: ");
        scanf("%d", &num);

        if(num > maior){
            segundo_maior = maior;
            maior = num;
        }

        else if(num > segundo_maior){
            segundo_maior = num;
        }

    }

    printf("O segundo maior numero informado foi %d", segundo_maior);

    return 0;

}