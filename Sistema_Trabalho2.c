//Utilizando uma estrutura, facca um programa que permita a entrada de nome, endereco e
//telefone de 5 pessoas e os imprima em ordem alfabetica. 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define qtd 5

struct estrutura_dados {
    char nome[100], endereco[100];
    int numero;
};

typedef struct estrutura_dados estrutura_dados;


int main() {
    
    estrutura_dados Dados[qtd];
    int i,j;
    char aux[100];

    for(i=0;i<qtd;i++){
        printf("Digite o nome do funcionario %i: ", i+1);
        scanf("%s", &Dados[i].nome);
        
        printf("Digite o endereco do funcionario %i: ", i+1);
        scanf("%s", &Dados[i].endereco);

        printf("Digite o numero do funcionario %i: ", i+1);
        scanf("%i", &Dados[i].numero);
        
    }

    for(i=1;i<qtd;i++){
        for(j=1;j<qtd;j++){
        if(strcmp(Dados[j-1].nome, Dados[j].nome) > 0) {
                strcpy(aux, Dados[j-1].nome);
                strcpy(Dados[j-1].nome, Dados[j].nome);
                strcpy(Dados[j].nome, aux);
            }
        
    }}

    for(i=0;i<qtd;i++){
        printf("-------------------------------------------------------\n");
        printf("O funcionario %s e seus dados: \n", Dados[i].nome);
        printf("O endereco do %s eh: %s\n", Dados[i].nome, Dados[i].endereco);
        printf("O numero do %s eh: %i \n",Dados[i].nome, Dados[i].numero);
    }

    return 0;
}