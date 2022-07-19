#include <stdio.h>

int main () {
	
	float SomarNumeros (float num1, float num2);
	float a,b, soma;
	
	printf ("Digite dois numeros: \n");
	scanf ("%f", &a);
	scanf ("%f", &b);
	
	soma = SomarNumeros (a,b);
	
	printf("A soma abosluta eh: %f", soma);
		
	
	return 0;
}


float SomarNumeros (float num1, float num2) {
	
	float ValorAbsoluto (float x);
	
	if(num1 <0) {
		
	num1 = ValorAbsoluto(num1);
		
	}
	
	if(num2 <0) {
		
	num2 = ValorAbsoluto(num2);	
		
	}
			
	
	return num1 + num2;
}


float ValorAbsoluto (float x) {
	
	return x * -1;
}