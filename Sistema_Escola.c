#include <stdio.h>
#define qtd 3

struct Dados {

    int matricula;
    char nome[50];
    int codigo_disciplina;
    float nota1;
    float nota2;
};

typedef struct Dados Dados;

int main () { 
    
    Dados Alunos[qtd];
    int i;
    float mediaP[qtd] = {0,0};


    for(i=0;i<qtd;i++){
        printf("-------------------------------------------------\n");  
        printf("Digite o nome do Aluno %i: ", i+1);
            scanf("%s", &Alunos[i].nome);
       
        printf("Digite a primeira nota do Aluno %i: ", i+1);
            scanf("%f", &Alunos[i].nota1);   

        printf("Digite a segunda nota do Aluno %i: ", i+1);
            scanf("%f", &Alunos[i].nota2);  

        mediaP[i] = (Alunos[i].nota1 + 2*Alunos[i].nota2)/3;       
    }


    for(i=0;i<qtd;i++){
          printf("-------------------------------------------------\n");  
          printf("O valor da media do %s: %.1f\n",Alunos[i].nome, mediaP[i]);
    }
    


    
    return 0;
}