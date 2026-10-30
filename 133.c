//Escreva um programa que leia o nome e o peso de 20 bois que participam de uma exposição e imprima o nome do boi mais leve e o nome do boi mais pesado. Para isso, suponha que todos os bois têm pesos distintos.

#include<stdio.h>
#include<string.h>
#define bois 20
#define letras 50

int main(){

    char boi[letras];
    char vencedor_leve[letras], vencedor_pesado[letras];
    float peso;
    float pesado, leve;

    printf("--Informe o nome e o peso do 1 boi--\n");

    printf("Nome: ");
    fgets(boi, sizeof(boi), stdin);
    boi[strcspn(boi, "\n")] = '\0';

    printf("Peso: ");
    scanf("%f", &peso);

    pesado = peso;
    strcpy(vencedor_pesado, boi);

    printf("\n--Informe o nome e o peso do 2 boi--\n");

    printf("Nome: ");
    while(getchar() != '\n');
    fgets(boi, sizeof(boi), stdin);
    boi[strcspn(boi, "\n")] = '\0';

    printf("Peso: ");
    scanf("%f", &peso);

    if(peso > pesado){
        strcpy(vencedor_leve, vencedor_pesado);
        strcpy(vencedor_pesado, boi);
        leve = pesado;
        pesado = peso;
    }

    else{
        leve = peso;
        strcpy(vencedor_leve, boi);
    }

    for(int k=3; k<=bois; k++){

        printf("\n--Informe o nome e o peso do %d boi--\n", k);

        printf("Nome: ");
        while(getchar() != '\n');
        fgets(boi, sizeof(boi), stdin);
        boi[strcspn(boi, "\n")] = '\0';

        printf("Peso: ");
        scanf("%f", &peso);

        if(peso > pesado){
            pesado = peso;
            strcpy(vencedor_pesado, boi);
        }

        if(peso < leve){
            leve = peso;
            strcpy(vencedor_leve, boi);
        }

    }

    printf("\n--Os bois vencedores foram--\n");
    printf("| Mais leve   | ---> %s com %.2f KG |\n", vencedor_leve, leve);
    printf("| Mais pesado | ---> %s com %.2f KG |\n", vencedor_pesado, pesado);

    return 0;

}