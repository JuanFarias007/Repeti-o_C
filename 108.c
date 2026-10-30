//Escreva um programa que leia 20 números entre 10000 e 99999 referentes aos números dos deputados estaduais eleitos e identifique a quantidade de candidatos que cada partido elegeu. O número do partido do deputado pode ser identificado pelos dois primeiros algarismos do número do candidato. Por exemplo, um candidato com número 13457 concorre pelo PT, que é o partido de número 13, enquanto que um candidato com número 45879 concorre pelo PSDB, que é o partido de número 45. Neste programa, considere os seguintes números de partido: 13 (PT), 14 (PTB), 15 (PMDB), 25 (DEM), 45 (PSDB) e 65( PCdoB).

#include<stdio.h>
#define numero 20

int main(){

    int candidato;
    int pt = 0, ptb = 0, pmdb = 0, dem = 0, psdb = 0, pcdob = 0, invalido = 0;
    int voto = 0;

    for(int k=1; k<=numero; k++){

        voto = 0;

        printf("Informe o numero do candidato (10000, 99999): ");
        scanf("%d", &candidato);

        int dezena_milhar = candidato / 10000;
        int unidade_milhar = (candidato % 10000) / 1000;

        voto = (dezena_milhar * 10) + unidade_milhar;

        if(voto == 13){
            pt++;
        }
        else if(voto == 14){
            ptb++;
        }
        else if(voto == 15){
            pmdb++;
        }
        else if(voto == 25){
            dem++;
        }
        else if(voto == 45){
            psdb++;
        }
        else if(voto == 65){
            pcdob++;
        }
        else{
            invalido++;
        }

    }

    printf("\n|| A quantidade de candidatos eleitos em cada partido ||\n");
    printf(" \n");
    printf("|PT ------- %d|\n", pt);
    printf("|PTB ------ %d|\n", ptb);
    printf("|PMDB ----- %d|\n", pmdb);
    printf("|DEM ------ %d|\n", dem);
    printf("|PSDB ----- %d|\n", psdb);
    printf("|PCdoB ---- %d|\n", pcdob);
    printf("|Invalido - %d|", invalido);

    return 0;

}