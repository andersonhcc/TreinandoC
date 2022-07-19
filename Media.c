int main(){
    void calcularMedia(float v[], int tam);
    
    float vet[400];
    float media;
    int i;
    printf("Digite os 400 numeros: ");
    for(i=0; i<400; i++)
    scanf("%f", &vet[i]);


    calcularMedia(vet, 400);


    return 0;
}

void calcularMedia(float v[], int tam) {

    float media = 0;
    float soma = 0;
    int i;

    for(i=0; i<tam; ++i) {
        soma += v[i];

    } 

    media = soma/tam; 

    printf("Media: %2.f\n", media); 
}