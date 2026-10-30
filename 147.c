//O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele financia qualquer valor em até 240 prestações. O valor da primeira prestação corresponde ao valor do empréstimo dividido pelo número de parcelas. Os valores das demais prestações correspondem ao valor da parcela anterior acrescido de uma taxa de juros de 7%. Escreva um programa que leia o valor a ser financiado por um cliente e o número de prestações desejadas e calcule: o valor de cada prestação, o valor total que o cliente vai pagar pelo empréstimo e a diferença entre o valor a ser pago e o valor financiado.  

#include<stdio.h>
#define JUROS 0.07

int main(){

    int valor, prestacao, acumulo = 0, soma = 0, diferenca;

    printf("Informe o valor do emprestimo e quantas prestacoes: ");
    scanf("%d%d", &valor, &prestacao);

    float primeira_prestacao = valor/prestacao;
    acumulo = primeira_prestacao;

    for(int k=1; k<=prestacao; k++){

        soma = soma + acumulo;
        printf("%d prestacao = %d \n", k, acumulo);
        acumulo = acumulo + (acumulo * JUROS);

    }

    printf("\nO valor final a ser pago eh de %d RS", soma);
    diferenca = soma - valor;
    printf("\nA diferenca eh de %d RS", diferenca);

    return 0;
    
}