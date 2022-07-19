#include <stdio.h>

struct Dados{

    char nome[50];
    char sexo[5];
    int cpf, data_nascimento, codigo_setor, idade;
    char cargo[30];
    float salario;
};

typedef struct Dados Dados;

int main (void) { 

    int i;
    Dados funcionario;

    for(i=0;i<1;i++){
        
        printf("Digite o seu nome: ");
        scanf("%s", &funcionario.nome); 

        printf("Digite o seu sexo: ");
        scanf("%s", &funcionario.sexo);

        printf("Digite o seu cpf: ");
        scanf("%i", &funcionario.cpf);

        printf("Digite sua data de nascimento: ");
        scanf("%i", &funcionario.data_nascimento);

        printf("Digite o codigo do setor onde trabalha: ");
        scanf("%i", &funcionario.codigo_setor);
        if(funcionario.codigo_setor<0 || funcionario.codigo_setor>99){
            printf("Por favor, digite o codigo do setor corretamente(0-99): ");
                scanf("%i", &funcionario.codigo_setor);
        }


        printf("Digite sua idade: ");
        scanf("%i", &funcionario.idade);

        printf("Digite o seu cargo: ");
        scanf("%s", &funcionario.cargo);

        printf("Digite o seu salario: ");
        scanf("%f", &funcionario.salario);
     }    

   

    for(i=0;i<1;i++){
        printf("Os dados do funcionario: \n");
        printf("---------------------------------------------------------\n");
        printf("Nome: %s\n", funcionario.nome);
        printf("Sexo: %s\n", funcionario.sexo);
        printf("CPF: %i\n", funcionario.cpf);
        printf("Data de nascimento: %i\n", funcionario.data_nascimento);
        printf("Codigo do setor: %i\n", funcionario.codigo_setor);
        printf("Idade: %i\n", funcionario.idade);
        printf("Cargo: %s\n", funcionario.cargo);
        printf("Salario: %.2f\n", funcionario.salario);
    }


    
    return 0;
}