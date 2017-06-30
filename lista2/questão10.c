/*

Lista avaliativa 
Questão 10

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

struct p  inclui_paciente(char* nome, float peso, float altura, float imc){
	struct p tmp_paciente;
	tmp_paciente.peso = peso;
	tmp_paciente.altura = altura;
	tmp_paciente.imc = imc;
	tmp_paciente.nome = nome;
	
	if (tmp_paciente.imc < 20){

		tmp_paciente.risco = "abaixo do peso";

	} else 
	if (tmp_paciente.imc > 20 && tmp_paciente.imc <= 25) {
		
		tmp_paciente.risco = "com peso normal";
	 	
	} else 
	if (tmp_paciente.imc > 25 && tmp_paciente.imc <= 30) {
		
		tmp_paciente.risco = "com excesso de peso";
	 	
	} else 
	if (tmp_paciente.imc > 23 && tmp_paciente.imc <= 35) {
		
		tmp_paciente.risco = "obeso(a)";
	 	
	} else 
	if (tmp_paciente.imc > 35) {
		
		tmp_paciente.risco = "morbidamente obeso(a)";
	 	
	} 

	return tmp_paciente;
}


int imprime_paciente(struct p tmp_paciente){
	
	printf("O paciente %s tem IMC igual a %.2f e está %s\n", tmp_paciente.nome, tmp_paciente.imc, tmp_paciente.risco);

}

int main(void){

	
	struct p paciente[50] = { 0 }; // declara a variável pra usar o struct
	int i, p_qtd=1, escolha;
	float tmp_alt, tmp_peso, tmp_imc; 
	char tmp_nome[100]; // entrada com dados temporários, já que é muito ruim lidar com string (char *)

	printf("O objetivo desse programa é registrar os dados de vários pacientes e retornar os IMCs e graus de risco associados\n");
	
	escolha = 3;
	
	do {
		printf("O que você deseja fazer?\nDigite 1 para incluir novo paciente\nDigite 2 para listar os pacientes e seus graus de risco\nDigite 0 para sair do programa\n");
		printf("Escolha: ");
		scanf(" %d",&escolha);
		getchar();

		if (escolha==1){

			printf("Para começar digite o nome do paciente: ");
						
			fgets(tmp_nome, 100, stdin);	 // recebe o nome do paciente, com no máximo 100 caracteres

			for (i=0; i<100; i++){
			// o objetivo aqui é eliminar a nova linha (\n), já que o fgets, ao contrário do scanf, armazena ela também
			// vamos percorrer todos os componentes do array até achar uma nova linha, se achar, vai substituir por um espaço vazio (\0)
			if (tmp_nome[i] == '\n')
			 	tmp_nome[i]='\0';
			}
	 	
			printf("Digite a altura do paciente, em metros, no formato 0.00 (ex. 1.74): ");
			scanf(" %f", &tmp_alt);

			printf("Digite o peso do paciente, em kg, no formato 0.00 (ex. 58.50): ");
 			scanf(" %f", &tmp_peso);

			tmp_imc = tmp_peso/(tmp_alt*tmp_alt);

		 	paciente[p_qtd-1]=inclui_paciente(tmp_nome, tmp_peso, tmp_alt, tmp_imc);
		 	p_qtd++;
		 	printf("Paciente incluido\n");

		}else
		if (escolha==2){
			if (paciente[0].nome != ""){

				for (i=0;i<p_qtd-1;i++){

					imprime_paciente(paciente[i]);

				}
			}else{
				printf("Você ainda não incluiu nenhum paciente, tente novamente\n");
			}

		}else
		if (escolha == 0) {

			printf("0 escolhido, o programa será encerrado \n");
			break;

		} else {

			printf("Você não escolheu uma opção válida, tente novamente\n");

		}


	} while (escolha > 0);	

	return 0;
}
