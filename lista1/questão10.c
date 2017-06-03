#include <stdio.h>

int main(void){
   
   int numero, i;
   printf("Neste exercício vamos buscar o maior e o menor número em uma lista\nPara isso você escolherá quantos números digitará e depois pressionará ENTER: ");
   scanf("%d", &numero);
  
   int lista[numero+2];

   for (i=1; i<=numero; i++){
	printf("\nDigite o %dº número da lista: ",i);
	scanf("%d", &lista[i]);
   }  

   lista[0]=0;  
      
   for (i=1; i<=numero; ++i){
	if (lista[0]<lista[i]){
		lista[0]=lista[i];
	}
	
   }
   
   lista[numero+1]=lista[0];

   for (i=numero; i>=1; i--){
	if (lista[numero+1]>lista[i]){
		lista[numero+1]=lista[i];
	}
   }

   printf("\nO maior número da lista é %d e o menor é %d", lista[0], lista[numero+1]);
   return 0;

}
