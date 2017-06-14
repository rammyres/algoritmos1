/*

Lista avaliativa 
Questão 7

*/

#include <stdio.h>

int main(void){

	int i, n, tmp, soma=0;

	printf("O objetivo dessa questão é ler um número N de números inteiros e exibir sua soma\nPara começar indique quantos números (N) serão somandos: ");
	scanf("%d", &n);
	printf("\n");

	for (i=1; i<n+1; i++){

		printf("Digite o %dº número: ", i);
		scanf("%d", &tmp);
		soma += tmp;

	}

	printf("A soma dos numeros digitados é: %d\n", soma);

	return 0;
}