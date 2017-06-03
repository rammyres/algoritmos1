#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n, i, par, impar;
	
	printf("Para evitar entrar os números vou gerar uma lista aleatória de 20 números: ");
	int lista[n];

	for (i = 1; i <= 20; i++){
	     lista[i]=rand()%10000;
	     printf("%d ", lista[i]);	
	}
	printf("\nVerificando a paridade: ");

	for (i = 1; i <= n; i++){
	   if (lista[i]%2==0){
	      printf("O numero %d é par\n", lista[i]);
	      par++;

	   }
           else {
	    printf("O número %d é ímpar\n", lista[i]);
	    impar++
	   }
    }

    printf("Existem %d números pares e %d números impares", par, impar);

	return 0;
}
