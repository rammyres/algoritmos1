#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int lista[50], i;
	
	printf("Para evitar entrar com 50 números vou gerar uma lista aleatória de números: ");

	for (i = 1; i < 51; i++){
	     lista[i]=rand()%10000;
	     printf("%d ", lista[i]);	
	}
	printf("\nExibindo a metade de cada número na lista: ");

	for (i = 1; i < 51; i++){
	     printf("A metade de %d é %.2f e a raiz cúbica é %.2f \n", lista[i], (float) lista[i]/2, pow((float)lista[i], 1.0/3.0));
        }

	return 0;
}
