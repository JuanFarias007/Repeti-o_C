//Escreva um programa que leia vários itens de uma compra feita pelo usuário. Para cada item, o usuário deve informar o seu nome, o seu preço unitário e a quantidade comprada. Após cada leitura, o programa deve perguntar ao usuário se ele deseja adicionar um novo item ou fechar a conta. O programa deve considerar que o usuário irá digitar pelo menos um item. Após terminar a leitura, o programa deve mostrar o valor da conta à vista e o valor da conta a prazo. O valor da conta a prazo corresponde à soma do valor total de cada item digitado pelo usuário. O valor da conta à vista corresponde ao valor da conta a prazo com um desconto de 15%. 

#include<stdio.h>

int main(){

    int continuar, valor, quantidade, valor_compra = 0;
    char produto [50];

    do{

        printf("Informe o nome do produto: ");
        fgets(produto, sizeof(produto), stdin);

        printf("Informe o valor: ");
        scanf("%d", &valor);

        printf("Informe a quantidade de produtos comprados: \n");
        scanf("%d", &quantidade);

        valor_compra = valor_compra + (valor * quantidade);

        printf("--Deseja continuar a compra?--\n");
        printf("[1] Sim\n[0] Nao\n");
        scanf("%d", &continuar);
        while(getchar() != '\n');

    }
    while(continuar != 0);

    int valor_vista = valor_compra - (valor_compra * 0.15);

    printf("\n--Valor final--\n");
    printf("| A prazo = %d RS |\n", valor_compra);
    printf("| A vista = %d RS |", valor_vista);
    
    return 0;

}