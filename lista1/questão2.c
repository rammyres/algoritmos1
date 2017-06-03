#include <stdio.h>

int main(void){

	int entrada, dia, mes, ano;
	
	printf("Digite uma data no formato DDMMAA: ");
	scanf("%d", &entrada);
	dia = entrada / 10000;
	mes = (entrada / 100) % 100;
	ano = entrada % 100;
	printf("\nDia %d, mês %d, ano %d\n", dia, mes, ano);    
	
return 0;	
}