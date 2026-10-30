//Escreva um programa que leia três números inteiros positivos e calcule o MMC dos números lidos. 

#include<stdio.h>

int main(){

    int num_um, num_dois, num_tres;

    printf("--Informe tres numeros inteiro--\n");
    printf("Primeiro numero: ");
    scanf("%d", &num_um);
    printf("Segundo numero: ");
    scanf("%d", &num_dois);
    printf("Terceiro numero: ");
    scanf("%d", &num_tres);

    printf("O MMC dos numeros %d, %d e %d eh ", num_um, num_dois, num_tres);

    int soma = 1, divisor = 2, mmc = 1;

    while(soma != 3){

        int div = 0;

        if(num_um % divisor == 0){
            num_um = num_um / divisor;
            div++;
        }

        if(num_dois % divisor == 0){
            num_dois = num_dois / divisor;
            div++;
        }

        if(num_tres % divisor == 0){
            num_tres = num_tres / divisor;
            div++;
        }

        if(div == 0){
            divisor++;
        }
        
        else{
            mmc = mmc * divisor;
        }

        soma = num_um + num_dois + num_tres;

    }

    printf("%d", mmc);

    return 0;

}