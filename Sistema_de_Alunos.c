#include <stdio.h>
#include <string.h>
#define qtd 5

struct Dados {

    int matricula [10];
    char nome [30];
    int nota1;
    int nota2;
    int nota3;
};

typedef struct Dados Dados;

int main (void) {
   
    int i,maior,media[qtd];
    int maior_media, menor_media;
    int maior_media_indice, menor_media_indice;
    int maior_nota1, aprovacao = 6;


    Dados lista_alunos[qtd];

    for(i=0;i<qtd;i++){
        printf("------------------------------------------------------------------------------------------\n");
        
        printf("Aluno %i\n", i+1);
        printf("Digite o seu nome: ");
        scanf("%s", &lista_alunos[i].nome);
        
        printf("Digite a sua matricula: ");
        scanf("%s", &lista_alunos[i].matricula);
        
        printf("Digite a primeira nota: ");
        scanf("%i", &lista_alunos[i].nota1);
        
        printf("Digite a segunda nota: ");
        scanf("%i", &lista_alunos[i].nota2);
        printf("Digite a terceira nota: ");
        scanf("%i", &lista_alunos[i].nota3);
        
    }
        printf("------------------------------------------------------------------------------------------\n");

    for(i=0;i<qtd;i++){
        if(i==0){
            maior = lista_alunos[i].nota1;
            maior_nota1 = i;            
       }
        
        if(lista_alunos[i].nota1 >= maior){
            maior = lista_alunos[i].nota1;
            maior_nota1 = i;            
         }

    }
    for(i=0;i<qtd;i++){
        media[i] = (lista_alunos[i].nota1 + lista_alunos[i].nota2 + lista_alunos[i].nota3)/3;
            if(i==0){
                maior_media = media[i];
                maior_media_indice = i;
            }

            if(media[i] > maior_media){
                maior_media = media[i];
                maior_media_indice = i;
            }
    }
    for(i=0;i<qtd;i++){
        media[i] = (lista_alunos[i].nota1 + lista_alunos[i].nota2 + lista_alunos[i].nota3)/3;
            if(i==0){
                menor_media = media[i];
                menor_media_indice = i;
            }

            if(media[i] < menor_media){
                menor_media = media[i];
                menor_media_indice = i;
            }

            if(media[i] >= aprovacao){
                printf("O aluno %s foi aprovado!\n", lista_alunos[i].nome);
                printf("------------------------------------------------------------------------------------------\n");
            }else{
                printf("O aluno %s foi reprovado!\n", lista_alunos[i].nome);
                printf("------------------------------------------------------------------------------------------\n");
            }

    }

    
    
    printf("O aluno de maior nota da primeira avaliacao foi %s e a sua nota foi %i \n",lista_alunos[maior_nota1].nome,maior);
    printf("------------------------------------------------------------------------------------------\n");
    printf("O Aluno de maior media eh: %s e a sua media foi %i\n", lista_alunos[maior_media_indice].nome, maior_media);
    printf("------------------------------------------------------------------------------------------\n");
    printf("O Aluno de menor media eh %s e a sua media foi %i\n", lista_alunos[menor_media_indice].nome, menor_media);
    
    
        return 0;
}