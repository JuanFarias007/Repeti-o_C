//A matemática prova que números inteiros podem ser representados de maneira única como um produto de potências de números primos distintos. 
//Este produto é chamado de decomposição em fatores primos do número e os expoentes são chamados de multiplicidade do primo respectivo. 
//Por exemplo, 360 = 23x32x5 e 21 = 3X7. Com base nessas informações, escreva um programa em C que obtenha a decomposição em fatores primos de um número 
//inteiro positivo informado pelo usuário.

#include<stdio.h>

int main(){

    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    int dividir = num;
    int primo = 2;
    int elevado = 0;
    int verificar;

    while(dividir != 1){

        int divisao = dividir % primo;

        if(divisao == 0){

            elevado++;
            verificar = dividir / primo;
            dividir = verificar;

        }

        else{

            if(elevado > 0){
                
                if(elevado > 1){
                    printf("%d^%d ", primo, elevado);
                }

                else{
                    printf("%d ", primo);
                }
                  
            }

            primo++;
            elevado = 0;

        }

    }

    if(elevado > 0){
                
        if(elevado > 1){
            printf("%d^%d ", primo, elevado);
        }

        else{
         printf("%d ", primo);
        }

    }

    return 0;

}
