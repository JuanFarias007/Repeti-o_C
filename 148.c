//Escreva um programa que leia dez números inteiros e calcule a diferença entre os dois maiores números digitados pelo usuário. 

#include<stdio.h>
#define ordem 5

int main(){

    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    int maior = num;
    int menor;
    
    printf("Informe outro numero inteiro: ");
    scanf("%d", &num);

    if(num > maior){
        menor = maior;
        maior = num;
    }

    else{
        menor = num;
    }

    for(int k=1; k<=ordem - 2; k++){

        printf("Informe outro numero inteiro: ");
        scanf("%d", &num);

        if(num > maior){
            menor = maior;
            maior = num;
        }

        else if(num > menor){
            menor = num;
        }

    }

    int diferenca = maior - menor;

    printf("A diferenca entre os dois maiores numeros (%d, %d) eh de %d", maior, menor, diferenca);

    return 0;

}