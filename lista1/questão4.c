#include <stdio.h>

int main(void){
	
	float salario, pv, pmt, pmt_max, n;

	printf("Vamos verificar se é permitido a concessão do empréstimo pretendido\n");
	printf("(utilize \".\" para separar os centavos)\n");
	printf("Digite o salário do servidor: ");
	scanf("%f", &salario);
	printf("\nDigite o valor do empréstimo pretendido: ");
	scanf("%f", &pv);
	printf("\nDigite a quantidade de parcelas: ");
	scanf("%f", &n);
	pmt_max = salario*30/100;
	pmt = pv/n;
	printf("Parcela máxima de %.2f, parcela contratada de %.2f\n", pmt_max, pmt);
	if (pmt<=pmt_max){

		printf("Empréstimo autorizado\n");
	}
	else {

		printf("Empréstimo recusado\n");
	}

	return 0;	
}