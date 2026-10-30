//Escreva um programa que leia um número inteiro N e um número inteiro K e identifique o k-ésimo algarismo (da direita para a esquerda) do número N. Caso o valor de k seja maior do que a quantidade de algarismos de N, a resposta do programa deve ser 0.

#include<stdio.h>

int main(){

    int num_N, num_K;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num_N);

    printf("Agora informe o k-esimo que deseja ser encontrado (direita pra esquerda): ");
    scanf("%d", &num_K);

    int resto;

    int valor = num_N, contador = 0;

    while(valor != 0){
        
        valor = valor / 10;
        contador++;

    }

    if(contador < num_K){
        printf("Numero invalido, ultrapassa a quantidade de algarismos");
    }

    else{

        for(int k=1; k<=num_K; k++){

            resto = num_N;
            num_N = num_N / 10;
            resto = resto % 10;

        }

        printf("O numero eh %d", resto);
        
    }

    return 0;

}