//Escreva um programa que leia o termo inicial e a razão de uma PA e, a seguir, leia um número N e verifique se o número N pertence à progressão.

#include<stdio.h>

int main(){

    int termo, razao, num, progressao = 0;

    printf("Informe o termo inicial e a razao de uma PA: ");
    scanf("%d%d", &termo, &razao);

    printf("Informe um numero para a verificar: ");
    scanf("%d", &num);

    do{

        if(termo == num){
            progressao++;
        }

        termo = termo + razao;

    }
    while(termo <= num);

    if(progressao == 1){
        printf("O numero %d pertence a PA", num);
    }

    else{
        printf("O numero %d nao pertence a PA", num);
    }

    return 0;
    
}