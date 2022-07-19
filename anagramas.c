#include<conio.h>
#include<stdio.h>
#include<string.h>

 
 int main ()
	 {
	    char palavra1[29];
	    char palavra2[29];
	    void Anagrama(char valor1, char valor2);
	   
	    
		
		printf ("Digite uma palavra: ");
	    gets (palavra1);
	    
	    printf("Digite outra palavra: ");
	    gets (palavra2);
	    
	    Anagrama(palavra1, palavra2);
	    
	  
	 return 0;
	 getch();
}

void Anagrama(const char valor1, const char valor2){
	
	
	int tamanho1, tamanho2;
	int i,j, cont=0;
	
	
	tamanho1 = strlen(valor1);
	tamanho2 = strlen(valor2);
	  
	  
	 if(tamanho1==tamanho2){   
	  for(i=0;i<tamanho1;i++){   
	   for(j=0;j<tamanho2;j++){    
	    if(valor1[i]==valor2[j]){   
	     cont++;
	     valor2[j]=0;    
	     break;
	    }
	   }
	  }
	  if(cont==tamanho1){ 
	   printf("As palavras sao anagramas.");
	  }
	  else{
	   printf("Nao sao anagramas.");
	  }
	 }
	 else{
	  printf("Nao sao anagramas.");
	 }
	
}
