#include <stdio.h>

char* ehEleitor(int argI){
	
	char* status; 

	if (argI < 16){
	   status = "tem menos de 16 e não pode votar";
	} else 
	if (argI >= 16 && argI <= 65){
	   status = "tem entre 16 e 65 anos e é obrigado a votar";
	} else
	if (argI > 65){
	   status = "pode votar se quiser, já que tem mais de 65 e é eleitor facultativo";
	}
	
   return status;
}


int main(void){

	int num, i;
        printf("Vamos determinar se a lista de eleitores que você passar pode votar\nPara começar indique quantos eleitores analisaremos: ");
	scanf("%d", &num);
	
	int idade[num];

	for (i=1; i<=num; i++){
            printf("\nDigite a idade do %dº eleitor e aperte ENTER: ", i);
	    scanf("%d", &idade[i]);
        }

	for (i=1; i<=num; i++){
	
	    printf("O %dº eleitor tem idade de %d, %s\n", i, idade[i], ehEleitor(idade[i]));

	}  

  return 0;
}
