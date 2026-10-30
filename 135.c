//Escreva um programa que leia o número de pessoas que irão participar de um evento, no qual será sorteado um prêmio, e, a seguir, leia o nome e o número do bilhete recebido por cada uma destas pessoas. O programa deve informar o nome do ganhador do prêmio, que é a pessoa cuja ordem de chegada é igual ao número do seu bilhete. Para isto, você poder supor que: a ordem de chegada de cada pessoa corresponde à ordem de leitura dos seus dados; sempre existe uma pessoa cujo número do bilhete é igual a sua ordem de chegada; este caso acontece para apenas uma pessoa. 

#include<stdio.h>
#include<string.h>
#define letras 50

int main(){

    int pessoas, bilhete;
    char nome[letras];
    char vencedor[letras];


    printf("Informe o numeros de pessoas que irao participar do evento: ");
    scanf("%d", &pessoas);

    for(int k=1; k<=pessoas; k++){

        printf("\n--Informe o nome da %d pessoa e o numero do bilhete--\n", k);

        printf("Nome: ");
        while(getchar() != '\n');
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        
        printf("Numero do bilhete: ");
        scanf("%d", &bilhete);

        if(bilhete == k){
            strcpy(vencedor, nome);
        }

    }

    printf("\nO vencedor(a) do premio foi %s", vencedor);
    return 0;

}