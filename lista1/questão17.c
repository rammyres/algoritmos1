#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

	srand(time(NULL));

	int n, i, par=0, impar=0;
	
	printf("Para evitar entrar os números vou gerar uma lista aleatória de números: ");
	printf("Digite quantos números serão avaliados: ");
	scanf("%d", &n);
	int lista[n];

	for (i = 1; i < n; i++){
	     lista[i]=rand()%10000;
	     printf("%d ", lista[i]);	
	}

	printf("\nVerificando a paridade: ");

	for (i = 0; i < n; i++){
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
