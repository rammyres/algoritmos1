#include <stdio.h>

int main(void){
	
	int num, sobra, i;

	printf("Digite um numero inteiro: ");
	scanf("%d", &num);

	for (i=1; i < num; i++){
           sobra = num%i;
	   
           if (sobra == 0){
		printf("%d é divisível por %d\n", num, i);
	   }
	}

    return 0;
}
