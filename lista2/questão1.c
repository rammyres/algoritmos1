/*

Disciplina algoritmos 1
Lista 2 (avaliativa )
Questão 1

*/

#include <stdio.h>
#include <string.h>

int main(void){
	
	float sal_min, sal_pes;
	char selecao[1];

	sal_min = 937;

	printf("Este programa vai calcular quantos salários minimos uma certa pessoa recebe\n");
	printf("Para começar, precisamos confirmar se o salário atual ainda é %.2f. Confirma? (S/n) ", sal_min);
	scanf("%s[^\n]", &selecao);

	if (strcmp(selecao,"n") == 0 || strcmp(selecao,"N") == 0) {

		printf("Qual o valor atual do salário mínimo? (Preencha no formato 1000.00) ");
		scanf("%f", &sal_min);

	}

	printf("Qual o valor do salário que a pessoa recebe? ");
	scanf("%f", &sal_pes);

	printf("\nEsta pessoa recebe %.2f salário(s) mínimo(s)\n", sal_pes/sal_min);


	return 0;

}