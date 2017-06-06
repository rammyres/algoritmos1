/*

Lista avaliativa 
Questão 3

*/

# include <stdio.h>

int main(void){

	int entrada;

	printf("Digite um número inteiro, verificaremos se ele é multiplo de 3: ");
	scanf("%d", &entrada);

	if (entrada%3==0){

		printf("O número é multiplo de 3\n");

	} else {
		
		printf("O número não é multiplo de 3\n");
		
	}

}