#include <stdio.h>

int main () {
	int fatorial (int numf);
	int num,resultado;
	
	printf("Digite um numero para calcular o fatorial:");
	scanf ("%i",&num );
	
	resultado = fatorial(num);
	
	printf("O valor do fatorial eh: %i\n", resultado);
		   
	 	

return 0;	

}


int fatorial (int numf){
	
	int resultado;
	
	if (numf == 0) {
		
		resultado = 1;
	
	}else{
		
		resultado = numf * fatorial (numf - 1);
		
	}	
	

return resultado;	
}