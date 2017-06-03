#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n, i;
	
	printf("Para evitar entrar os números vou gerar uma lista aleatória de números: ");
	printf("Digite quantos números serão avaliados: ");
	scanf("%d", &n);
	int lista[n];

	for (i = 1; i <= n; i++){
	     lista[i]=rand()%10000;
	     printf("%d ", lista[i]);	
	}
	printf("\nVerificando a paridade: ");

	for (i = 1; i <= n; i++){
	   if (lista[i]%2==0){
	      printf("O numero %d é par\n", lista[i]);
	   }
           else {
	    printf("O número %d é ímpar\n", lista[i]);
	   }
        }

	return 0;
}
