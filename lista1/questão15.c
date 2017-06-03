#include <stdio.h>

int main(void){

   int numero, fatorial;

	printf("Digite um número positívo, vamos mostrar seu fatorial (N!)\n");

   scanf("%d", &numero);

	if (numero <= 0){
	   printf("Esse número é negativo ou 0, tente de novo\n");
	}
	else{
	 
	   for(fatorial = 1; numero > 1; numero--){
		fatorial = fatorial * numero;
	   }
           printf("O fatorial é %d", fatorial);
	} 	
	
   return 0;
}
