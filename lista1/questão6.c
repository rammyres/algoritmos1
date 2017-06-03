#include <stdio.h>

int main(void){
	
	int a, b, c, tmp;
	
	printf("Digite três números inteiros, nós colocaremos ele em ordem para você: \n");
	printf("Após cada número pressione ENTER");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a > b){
	    tmp = b; 
	    b = a;
            a = tmp; 	    
	}
	
	if (a > c){
	    tmp = c; 
	    c = a;
            a = tmp; 	    
	}

	if (b > c){
	    tmp = c; 
	    c = b;
            b = tmp; 	    
	}

	printf("\nOs números em sequência são %d, %d e %d", a, b, c);	

	return 0;
}
