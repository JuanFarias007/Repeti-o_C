//Escreva um programa que leia vários números inteiros e calcule a média dos números pares e a média dos números ímpares. O processamento deverá ser encerrado quando for lido o valor 0, que não deverá ser processado. 

#include<stdio.h>

int main(){

    int num, soma_impar = 0, impar = 0, soma_par = 0, par = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    while(num != 0){

        if(num % 2 == 0){
            par++;
            soma_par = soma_par + num;
        }

        else if(num % 2 == 1){
            impar++;
            soma_impar = soma_impar + num;
        }

        printf("Informe outro numero inteiro: ");
        scanf("%d", &num);
        
    }

    float media_impar = soma_impar / impar;
    float media_par = soma_par / par;
    
    printf("A media dos numeros impares e par sao:\n");
    printf("| Impar | -----> %.2f |\n", media_impar);
    printf("| Par   | -----> %.2f |", media_par);
    
    return 0;

}