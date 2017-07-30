#include <stdio.h>

int main(void){
	int numero, c, d, u;

	printf("Digite um número inteiro de 3 dígitos, vamos inverter sua ordem: ");
	scanf("%d", &numero);

	c = numero/100; //Como o tipo int só registra o que vier antes das casas decímais, dividimos o número por 100, a sobra é ignorada
	d = (numero%100)/10; /*Aqui usamos o %, que retorna a sobra de uma divisão, no caso as dezenas da divisão por 100, então usamos 
	                       o mesmo princípio acima e dividimos por 10, onde a variável só registrará a parte inteira */
	u = numero%10; // Aqui somente a sobra da divisão por 10 (que retornará somente a unidade) é usada
	printf("%d%d%d\n", u, d, c);


	return 0;
}