//Escreva um programa que leia o nome, o sexo e a idade de um grupo de 20 pessoas e calcule o percentual de mulheres que tem entre 18 e 21 anos. 

#include<stdio.h>
#define grupo 5

int main(){

    char sexo;
    int idade, mulher = 0;

    for(int k=1; k<=grupo; k++){

        printf("Informe o genero (M ou F): ");
        scanf(" %c", &sexo);

        printf("Informe a idade: ");
        scanf("%d", &idade);

        if(sexo == 102 || sexo == 70){

            if(idade >= 18 && idade <= 21){
                mulher++;
            }
        }
        
    }

    float porcentagem = ((float)mulher / grupo) * 100;

    printf("O porcentual de mulheres entre 18 e 21 eh %.2f", porcentagem);

    return 0;

}