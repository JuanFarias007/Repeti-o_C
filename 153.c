//Escreva um programa que permita que o usuário jogue o jogo do “arrochado”. Neste jogo, o programa gera um número aleatório entre 1 e 100 e o usuário deve “arrochar” o número gerado pelo computador. A cada jogada, os limites do jogo vão se estreitando de acordo com os valores digitados pelo usuário. O jogo acaba quando o usuário consegue imprensar o número gerado pelo computador (neste caso ele ganha) ou quando o usuário entra com o número gerado pelo computador (neste caso ele perde).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int secreto, palpite;
    int inferior = 0;    
    int superior = 101;  
    int jogadas = 0;

    srand((unsigned) time(NULL));
    secreto = rand() % 100 + 1; 

    printf("=== JOGO DO ARROCHADO ===\n");
    printf("Tente arrochar o número do computador sem acertá-lo!\n\n");

    while (1) {
        
        if (superior - inferior == 2) {
            printf("\nVocê arrochou o número %d em %d jogada(s). VOCÊ GANHOU!\n",
                   secreto, jogadas);
            break;
        }

        printf("Digite um número entre %d e %d (exclusive): ", inferior, superior);
        if (scanf("%d", &palpite) != 1) {
            printf("Entrada inválida!\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (palpite <= inferior || palpite >= superior) {
            printf("Número fora do intervalo permitido, tente de novo.\n");
            continue;
        }

        jogadas++;

        if (palpite == secreto) {
            printf("\nO número era %d. Você acertou em cheio e PERDEU!\n", secreto);
            break;
        } else if (palpite < secreto) {
            inferior = palpite;
        } else {
            superior = palpite;
        }
    }

    return 0;
}