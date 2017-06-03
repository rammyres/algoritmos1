#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
	srand(time(NULL));

	int i, par=0, impar=0;
	
	printf("Para evitar entrar os números vou gerar uma lista aleatória de 20 números: ");
	int lista[20];

	for (i = 0; i <= 19; i++){
	     lista[i]=rand()%10000;
	     printf("%d ", lista[i]);	
	}
	
	printf("\nVerificando a paridade: ");

	for (i = 0; i <= 19; i++){
	   if (lista[i]%2==0){
	      printf("O numero %d é par\n", lista[i]);
	      par++;
	   }
       else {
	      printf("O número %d é ímpar\n", lista[i]);
	     impar++;
	   }
    }

    printf("Existem %d números pares e %d números impares\n", par, impar);

	return 0;
}
