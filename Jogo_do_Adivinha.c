#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int i,j, vet[1], numero;
    int cont=0;
    
    srand(time(NULL));

    for(i=0;i<1;i++){
        vet[i] = rand() %20;
     }
    
    printf("------------------------JOGO DO ADIVINHA----------------------------\n");
    
    for(i=0;i<5;++i){
        printf("Digite um numero: ");
        scanf("%i", &numero);
        for(j=0;j<1;++j){
            if(vet[j]== numero){
                
                printf("Voce acertou o numero! \n");
                cont++;               
            }
            else{
                printf("Voce errou o numero! \n");
            }
        }
        
        if(vet[0] == numero){
            break;
        }
    }
    
    printf("O numero correto eh: %i\n", vet[0]);
    
    return 0;
}