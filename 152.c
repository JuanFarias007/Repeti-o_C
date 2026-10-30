//Escreva um programa que imprima todos os palíndromos existentes no intervalo [1000, 9999]. Um número é palíndromo quando o seu valor lido da esquerda para a direita é idêntico ao valor lido da direita para a esquerda. Exemplos: 1001, 2002, 1221, 8888. 

#include<stdio.h>

int main(){

    for(int k=1000; k<= 9999; k++){

        int unidade_milhar = k / 1000;
        int centena = (k % 1000) / 100;
        int dezena = (k % 100) / 10;
        int unidade = (k % 10) / 1;

        if(unidade_milhar == unidade && centena == dezena){
            printf("[%d] ", k);
        }
    }

    return 0;

}