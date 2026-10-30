//Escreva um programa que leia dois números inteiros M e N e calcule os valores de M div N e M mod N. Os valores devem ser calculados sem o uso dos operadores div e mod. 

#include<stdio.h>

int main(){

    int dividendo, divisor;

    printf("Informe o dividendo e o divisor: ");
    scanf("%d%d", &dividendo, &divisor);

    int divisao = dividendo;
    int contador = 0;

    while(divisao > divisor){

        divisao = divisao - divisor;
        contador++;

    }

    printf("%d", contador);
    return 0;

}
