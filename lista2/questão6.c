/*

Lista avaliativa 
Questão 6

*/

#include <stdio.h>

int main(void){

	float valor;

	printf("Nesta questão determinaremos o valor de venda de um produto, de acordo com certas condições, a partir do seu valor de aquisição.\n");
	printf("Entre com o valor de venda (ex: 10.00): ");
	scanf("%f", &valor);
	printf("\n");

	if (valor < 20){

		printf("Para o produto com valor %.2f o valor de venda deve ser 45%% maior, totalizando %.2f\n", valor, valor+valor*0.45);

	} else {

		printf("Para o produto com valor %.2f o valor de venda deve ser 30%% maior, totalizando %.2f\n", valor, valor+valor*0.30);

	}


	return 0;
}