#include <stdio.h>

int main(void){

    int vetor[10], razao,i,j;
    //Recebendo o valor inicial da P.G:
    printf("Digite o valor inicial da P.G: \n");
    scanf("%i", &vetor[0]);

    printf("Digite o valor da razao: \n");
    scanf("%i", &razao);

   for(i=0;i<10;++i){
        for(j=i+1;j<10;++j){
            vetor[i+1] = vetor[i] * razao;
        }
    }

    for(i=0;i<10;++i){
        printf("%i ", vetor[i]);

    }

    return 0;
}


