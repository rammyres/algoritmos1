#include <stdio.h>

int main(void){

   int numero=0;

   printf("Digite um número positívo, vamos verificar se ele é par ou ímpar\nDigite -1 para encerrar\n");

   while (numero != -1){
	printf("Digite o número: ");
	scanf("%d", &numero);

	if (numero < 0 && numero != -1){
	   printf("Esse número é negativo, tente de novo\n");
	}
	else 	
	if (numero%2==0){
	    printf("O numero é par\n");
	}
	else
	if (numero == -1){
	    printf("-1 encontrado, encerrando.");
	    break;
	} 
	else 
	{
	    printf("O número é ímpar\n");
	}

   }

   return 0;
}
