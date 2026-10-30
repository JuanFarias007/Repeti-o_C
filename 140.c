//Escreva um programa que simule uma votação. O programa deve computar o voto de 20 eleitores e depois deve imprimir a quantidade e o percentual de votos recebidos por cada candidato, bem como a quantidade e o percentual de votos nulos.

#include<stdio.h>
#define eleitores 5

int main(){

    int voto;
    int joao=0, ze=0, maria=0, ana=0, nulo=0;

    for(int k=1; k<=eleitores; k++){

        printf("\n--Escolha um dos candidatos a seguir--\n");

        printf("[1] Joao Borracheiro\n");
        printf("[2] Ze do caminhao\n");
        printf("[3] Maria da bodega\n");
        printf("[4] Ana\n");
        printf("[5] Nulo\n");

        printf("Digite numero do canditado de sua escolha: ");
        scanf("%d", &voto);

        if(voto == 1){
            joao++;
        }

        else if(voto == 2){
            ze++;
        }
        
        else if(voto == 3){
            maria++;
        }

        else if(voto == 4){
            ana++;
        }

        else{
            nulo++;
        }

    }

    float porcentagem_joao = ((float)joao / eleitores) * 100;
    float porcentagem_ze = ((float)ze / eleitores) * 100;
    float porcentagem_maria = ((float)maria / eleitores) * 100;
    float porcentagem_ana = ((float)ana / eleitores) * 100;
    float porcentagem_nulo = ((float)nulo / eleitores) * 100;

    printf("\n---O porcentual de votos foi---\n");
    printf("| Joao Borracheiro | ---> %.2f\n", porcentagem_joao);
    printf("| Ze do caminhao   | ---> %.2f\n", porcentagem_ze);
    printf("| Maria da bodega  | ---> %.2f\n", porcentagem_maria);
    printf("| Ana              | ---> %.2f\n", porcentagem_ana);
    printf("| Nulo             | ---> %.2f", porcentagem_nulo);

    return 0;

}