#include <stdio.h>

int main(void){
	
	int idade;

	printf("Vamos determinar se você pode votar, para isso digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade < 16){
	   printf("Eita, você tem menos de 16 e não pode votar");
	} else 
	if (idade >= 16 && idade <= 65){
	   printf("Tá lascado, você tem entre 16 e 65 anos e é obrigado a votar");
	} else
	if (idade > 65){
	   printf("Se vocẽ quiser até pode votar, já que tem mais de 65 e é eleitor facultativo");
	}
	

    return 0;
}
