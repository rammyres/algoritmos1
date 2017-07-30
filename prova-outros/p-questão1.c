#include <stdio.h>

int main(void){
	float preco_kw, consumo_kw, sal_min;

	printf("Para iniciarmos este programa, vamos primeiro apurar o valor do salário mínimo\n");
	printf("Digite o valor do salário mínimo atual (ex. 800.00): ");
	scanf("%f", &sal_min);
	printf("Digite agora o consumo registrado: ");
	scanf("%f", &consumo_kw);

	preco_kw = (sal_min/7)/100;

	printf("O valor do kw é %.2f\n", preco_kw);
	printf("Foram consumidos %.2fkw, num total de R$ %.2f, que pago com desconto será de R$ %.2f.\n", consumo_kw, consumo_kw*preco_kw,(consumo_kw*preco_kw)*0.9);

	return 0;
}