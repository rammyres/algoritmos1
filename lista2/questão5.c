/*
Lista avaliativa 
Questão 5
*/

#include <stdio.h>
#include <stdlib.h> 

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

int main(int argc, char *argv[] /*void*/){
	
	float salario;

/* 
Nesta abordagem os valores são passados como parametros e o resultado é escrito no stdout, ou invés de usar o prompt interativo.
*/ 


	if (argc>0 && argv[1] != NULL){
		
		salario=atof(argv[1]);

		if (salario > 0){

			printf("Serão retidos R$ %.2f do salário de R$ %.2f\n", calculaINSS(salario), salario);

		}

	} else {

		printf("Você deve passar como parâmentro um salário (ex. ./questão5 1100.10 ou questão5.exe 1200.66), o programa retornará o valor de desconto do INSS.\n");
	}

	return 0;
}