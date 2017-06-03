#include <stdio.h>

int main(void){

   int numero=0, i;

   printf("Digite um número positívo, vamos mostrar a tabuada de multiplicar dele \n");

   scanf("%d", &numero);

	if (numero < 0){
	   printf("Esse número é negativo, tente de novo\n");
	}
	else{
	   for(i=1; i<10; i++){
	      printf("%d x %d = %d \n", numero, i, numero*i);
	   }
	} 	
	
   return 0;
}
