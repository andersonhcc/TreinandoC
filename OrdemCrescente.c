#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeros[5];
    int i = 0;
    int j = 0;
    int aux = 0;

    srand(time(NULL));

    for(i=0; i<5; ++i) {

        numeros[i] = rand();

    }

    /*for(i =0; i<5; ++i) {
        printf("Digite 5 numeros: ");
        scanf("%i", &numeros[i]);
    }
    */



    for(i=0; i<5; ++i) {
        for(j=i+1; j<5; ++j){
            if(numeros[i] > numeros[j]){
                aux = numeros[i]; 
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }

        }
        
        printf("os vetores em ordem crescente: %i \n", numeros[i]);
    }

 


   return 0; 
}