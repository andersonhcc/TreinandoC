#include <stdio.h>

int main () {
	float calcular (float notac, float qtdc);
	int qtd, i;
	float nota, media,media_total;
	nota = 0;
	media = 0;
	
	
	printf("--------- Programa de calcular a média dos alunos--------\n");
		
	printf("\n Digite a quantidade de alunos: ");

	
	scanf("%i", &qtd);
	
	for(i =0;i<qtd;i++) {
			  		
	
	printf("Digite o valor da nota do aluno %d\n", i+1);
	
    scanf("%f", &nota);
		
	printf("\n------------------\n");	
	
	media = calcular (nota, qtd);
	
	media_total += media;
	
	}
	
	printf ("A media eh: %f", media_total);
	
	
	return 0;
}




float calcular (float notac, float qtdc) {
	
		return notac/qtdc;
}