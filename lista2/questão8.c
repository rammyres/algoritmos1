/*

Lista avaliativa 
Questão 8

*/

#include <stdio.h>


float calculaINSS(float sal){
	float tribINSS;

	if (sal<=600){

		tribINSS = 0;

	} else
	if (sal>600 && sal<=1200){

		tribINSS = sal*20/100;

	} else 
	if (sal>1200 && sal<=2000){

		tribINSS = sal*25/100;

	} else
	if (sal> 2000){

		tribINSS = sal*30/100;

	}


	return tribINSS;
}

int main(void){
	
	float salario[20];
	int i;

	printf("Neste exercício calcularemos a retenção de INSS de 20 salários distintos.\n");
	
		for (i = 0; i<20; i++){
			printf("Digite o %dº salário: ", i+1);
			scanf("%f", &salario[i]);
		}


	for(i = 0; i < 20; i++){
		if (salario[i] > 0){

			printf("Serão retidos R$ %.2f do %dº salário, de R$ %.2f\n", calculaINSS(salario[i]), i+1, salario[i]);

		}

	}
		


	return 0;
}