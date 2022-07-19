#include <stdio.h>

struct Vetor{
float x;
float y;
float z;
};

typedef struct Vetor Vetor;

int main(){

    Vetor VetorR3[2];
    float somaX = 0, somaY = 0, somaZ=0;
    int i,j;
    
    for(i=0;i<2;i++){
        printf("Digite o valor das coordenadas X do Vetor %i: ", i+1);
            scanf("%f", &VetorR3[i].x);
    }
    for(i=0;i<2;i++){
        printf("Digite o valor das coordenadas do Y Vetor %i: ", i+1);
            scanf("%f", &VetorR3[i].y);
    }
     for(i=0;i<2;i++){
        printf("Digite o valor das coordenadas Z do Vetor %i: ", i+1);
            scanf("%f", &VetorR3[i].z);
    }
    
    for(i=0;i<2;i++){
        printf("O vetor %i tem coordenadas: (%.1f,%.1f,%.1f) \n", i+1, VetorR3[i].x, VetorR3[i].y, VetorR3[i].z);
        
        
        for(j=i+1;j<2;j++){
        somaX = VetorR3[i].x + VetorR3[j].x;
        somaY = VetorR3[i].y + VetorR3[j].y;
        somaZ = VetorR3[i].z + VetorR3[j].z;
    }}
    
     
     printf("O somatorio das coordenadas dos vetores eh: (%.1f,%.1f,%.1f)", somaX, somaY, somaZ);

    return 0;
}