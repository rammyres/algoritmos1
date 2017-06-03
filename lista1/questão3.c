#include <stdio.h>
int main(void){
	int entrada, modulo;

	printf("Digite um numero, verificaremos se le é divisível por 5 \n");
	scanf("%d", &entrada);
	modulo = entrada % 5;

	if (modulo == 0) {
		printf("O número é divisível por 5\n");
	} 
	else{
		printf("O número não é divisível por 5");
	}


	return 0;
}