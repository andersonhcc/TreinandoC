#include <stdio.h>

int main(){
    
    struct dados
    {
        char nome[50];
        char pedido[50];
        int idade;
        float troco;
    };

    struct dados cliente; 


    printf("Digite o seu nome: ");
    fgets(cliente.nome,50,stdin);

    printf("Digite o seu pedido: ");
    fgets(cliente.pedido,50,stdin);

    printf("Digite sua idade: ");
    scanf("%i", &cliente.idade);

    printf("Digite o valor do troco: ");
    scanf("%f", &cliente.troco);


    printf("-----------------------------------------------------\n");


    printf("O nome do cliente eh: %s \n", cliente.nome);
    printf("O pedido do cliente eh: %s \n", cliente.pedido);
    printf("A idade do cliente eh: %i \n", cliente.idade);
    printf("O valor do troco do cliente eh: %.2f \n", cliente.troco);   




    return 0;
}

