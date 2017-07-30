#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
	int i, idade[100], maior = 0;

	printf("O objetivo deste progama é ler a idade de 100 pessoas e, depois disso, retornar a maior\n");

	/* for (i=0; i<10; i++){
		printf("Digite a %dª idade: ", i+1);
		scanf("%d", &idade[i]);
	} */

	srand(time(NULL));
	// O procedimento a seguir vai gerar uma lista de 100 núemros aleatórios entre 1 e 10000
	for (i=0; i<100; i++){
		idade[i]= rand()%10000;
		printf("%dº número aleatório gerado: %d\n", i, idade[i]);
	}

	for (i=0; i<100; i++){
		if (maior < idade[i])
			maior = idade[i];
	}

	printf("A maior idade digitada foi: %d\n", maior);

	return 0;
}