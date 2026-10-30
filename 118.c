//Escreva um programa que leia o peso e a altura de um grupo de 20 pessoas e calcule o percentual de pessoas abaixo do peso, o percentual de pessoas acima do peso e o percentual de pessoas que estão dentro da faixa de peso adequada.

#include<stdio.h>
#include<math.h>
#define GRUPO 20

int main(){

    float peso, altura;
    int abaixo = 0, acima = 0, ideal = 0;

    for(int k=1; k<=GRUPO; k++){

        printf("Informe o peso e a altura da %d pessoa: ", k);
        scanf("%f%f", &peso, &altura);

        float imc = peso / (pow(altura, 2));

        if(imc < 18.5){
            abaixo++;
        }
        else if(imc >= 18.5 && imc <= 24.9){
            ideal++;
        }
        else{
            acima++;
        }

    }

    float P_abaixo = ((float)abaixo / GRUPO) * 100;
    float P_ideal = ((float)ideal / GRUPO) * 100;
    float P_acima = ((float)acima / GRUPO) * 100;

    printf("\n--O porcentual eh--\nAcima = %.2f\nIdeal = %.2f\nAbaixo = %.2f", P_acima, P_ideal, P_abaixo);

    return 0;

}