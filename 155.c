//Escreva um programa que leia dois números inteiros positivos N e M e use o método das aproximações sucessivas de Newton para determinar a raiz enésima de M. De acordo com o método de Newton, são calculados diversos elementos xk, de acordo com as equações abaixo. Inicialmente, deve ser calculado o valor de x1. Se for necessário, devem ser calculados os valores de x2, x3 e assim sucessivamente. O cálculo dos números deve ser encerrado quando for gerado um valor xk de forma que o valor absoluto da diferença entre o valor de xk e o valor de xk-1 seja menor do que a precisão desejada. Quando isso acontece, o último xk gerado corresponde ao valor da raiz. Para calcular a raiz, considere x0 = 1 e a precisão de 0,0001.

#include<stdio.h>
#include<math.h>

int main(){

    int indice, raiz, contador = 0;

    printf("Informe o indice da raiz: ");
    scanf("%d", &indice);

    printf("Informe o numero do qual queremos extrair a raiz: ");
    scanf("%d", &raiz);

    float inicio = 1;
    float X2 = 1, X1;

    while(contador != 1){
        
        X1 = inicio - ((pow(inicio, indice) - raiz) / (indice * pow(inicio, indice - 1)));
        
        if(fabs(X1 - X2) < 0.0001){
            contador++;
        }

        inicio = X1;
        X2 = X1;

    }

    printf("A raiz aproximada de %d com o fato %d eh %f", raiz, indice, X1);
    
    return 0;

}