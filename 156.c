//Escreva um programa que leia o valor de uma precisão desejada pelo usuário e calcule o valor de Pi com esta precisão. A aproximação é calculada através da equação Pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ..., e assim sucessivamente. O processamento deve ser encerrado quando a variação entre os dois últimos valores calculados for inferior à precisão desejada pelo usuário (Por exemplo 0.0001). 

#include<stdio.h>
#include<math.h>

int main(){

    double num;
    int contador = 0;

    printf("Informe a precisao desejada: ");
    scanf("%lf", &num);

    double sinal = -1;
    double P;
    int progressao = 3;
    double anterior = 4, atual = sinal*((double)4 / (double)progressao);
    double comparar = 4;

    while(contador != 1){

        P = anterior + (atual);

        progressao = progressao + 2;
        sinal = sinal * (double)-1;
        atual = sinal*((double)4 / (double)progressao);;

        if(fabs(P - comparar) < num){
            contador++;
        }

        anterior = P;
        comparar = P;

    }

    printf("A aproximacao de PI do numero %g eh %f", num, P);

    return 0;
    
}