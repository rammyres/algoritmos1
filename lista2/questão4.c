/*
Lista avaliativa 
Questão 4
*/

#include <stdio.h>
#include <string.h>


// Struct com os dados básicos do paciente, seria útil pra exportar pra um arquivo no caso de controle 

struct p{
	float peso;
	float altura; 
	float imc;
	char* nome;
	char* risco;
};

int main(void){

	struct p paciente; // declara a variável pra usar o struct
	char tmp[50]; // entrada com dados temporários, já que é muito ruim lidar com string (char *)
	int i; 

	printf("O objetivo desse programa é registrar os dados de um paciente e retornar seu IMC e grau de risco associado\n");

	printf("Para começar digite o nome do paciente: ");
	fgets(tmp, 100, stdin);	 // recebe o nome do paciente, com no máximo 100 caracteres

	for (i=0; i<100; i++){
		// o objetivo aqui é eliminar a nova linha (\n), já que o fgets, ao contrário do scanf, armazena ela também
		// vamos percorrer todos os componentes do array até achar uma nova linha, se achar, vai substituir por um espaço vazio (\0)
		if (tmp[i] == '\n'){
			 tmp[i]='\0';
		}
		
	}
	
 	//scanf("%s", &tmp);
	paciente.nome = tmp;

	printf("Digite a altura do paciente, em metros, no formato 0.00 (ex. 1.74): ");
	scanf("%f", &paciente.altura);

	printf("Digite o peso do paciente, em kg, no formato 0.00 (ex. 58.50): ");
 	scanf("%f", &paciente.peso);

	paciente.imc = paciente.peso/(paciente.altura*paciente.altura);


	if (paciente.imc < 20){

		paciente.risco = "abaixo do peso";

	} else 
	if (paciente.imc > 20 && paciente.imc <= 25) {
		
		paciente.risco = "com peso normal";
	 	
	} else 
	if (paciente.imc > 25 && paciente.imc <= 30) {
		
		paciente.risco = "com excesso de peso";
	 	
	} else 
	if (paciente.imc > 23 && paciente.imc <= 35) {
		
		paciente.risco = "obeso(a)";
	 	
	} else 
	if (paciente.imc > 35) {
		
		paciente.risco = "morbidamente obeso(a)";
	 	
	} 

	printf("O paciente %s tem IMC igual a %.2f e está %s\n", paciente.nome, paciente.imc, paciente.risco);

	return 0;
}

    Contact GitHub API Training Shop Blog About 

    © 2017 GitHub, Inc. Terms Privacy Security Status Help 

