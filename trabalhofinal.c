/* 
  UAB/UFPI
  Sistemas de Informação
  Alagoritmos 1
  Trabalho Final

  Este programa usa a biblioteca math, disponibilizada por diversos flavors de sistemas Unix-like, com a biblioteca GNU 
  e é compatível com o Ansi-C. Para compila-lo no GCC, no entanto, é necessário linkar a biblioteca math, usando o 
  argumento -lm. No Windows ele é compatível com a GCC (distribuido nos pacotes MinGW ou Cygwin). se ele for compilado 
  no Visual Studio a biblioteca math.h deve ser substituida pela cmath.h.
*/

#include <stdio.h>
#include <stdbool.h> //Adiciona os tipos booleanos
#include <math.h> //Adiciona algumas funcções matematicas
#include <locale.h> //Inclui a capacidade de adaptar a localização do programa, já que o programa pode ser testado em Windows

bool eh_inteiro(float numero){ //O objetivo desta função é verificar se um número, passado como argumento é inteiro 
	bool resultado; 

	if (ceilf(numero)==numero)  
		/* 
		  A função ceilf, da biblioteca math, retorna a parte inteira de um número real (float), assim se a parte 
		  inteira for igual ao número, ele é inteiro.
		*/
		resultado = true;
	else
		resultado = false;

	return resultado;
}


bool eh_primo(int numero){ //O objetivo desta função é verificar se o número inteiro passado como parâmetro é primo

	bool resultado = true; //Se nenhuma das situações abaixo for verdadeira o número é primo 
	int i;

	/* 
	A rigor números primos são inteiros positivos, cujos divisores inteiros positivos são ele mesmo e 1. 
	No desvio abaixo essas definições são testadas.
	*/

	if (numero <= 1 ) {// Primeiro é testado se o número é positivo e maior que 1 (já que o 1, a rigor, não é primo)
		resultado = false; 
	}
	else 
	if (numero > 2 && numero%2 == 0) // Depois testamos se o número, maior que 2, é divisível por 2
		resultado = false;
	else { 
		/* 
		  Por último testamos se o número tem divisores impares maiores que 3
		  (se o número tiver algum divisor par ele também é divisível por 2)
		*/
		for (i=3; i < numero/2; i+=2){
			if (numero%i==0)
				resultado = false;
		}
	}
	
	return resultado; 
}


int main(void){
	setlocale(LC_ALL,"Portuguese"); // 
	int i;
	float quantidade=1;

	printf("O objetivo deste programa é ler uma sequência de números, cuja extensão será fornecida pelo usuário e determinar quais deles são primos\n");
	printf("O programa repetirá até que a flag de encerramento seja digitada como quantidade (a flag é o número 0 ou negativo)\n");

	// Garante a execução do loop até a entrada de um numero menor ou igual a 0
	while (quantidade > 0){ 
		
		printf("\nIndique quantos números serão testados: ");
		scanf(" %f", &quantidade);
	
		if (quantidade <= 0){
			printf("Flag de encerramento encontrada, encerrando...\n");
			break;
		} else
		
		if (ceilf(quantidade) == quantidade) {
			if (quantidade > 0){
				float numeros[(int)quantidade];

				for (i=0; i<quantidade; i++){
					printf("Digite o %dº numero: ", i+1);
					getchar();
					scanf(" %f", &numeros[i]);
				}
				
				for (i=0; i<quantidade; i++){
					if (eh_inteiro(numeros[i])){
						if(eh_primo(numeros[i]))
						 	printf("\nO %dº número (%d) é primo", i+1, (int)numeros[i]);
						 else 
						 	printf("\nO %dº número (%d) não é primo", i+1, (int)numeros[i]);
					} else {
						printf("\nO %dº número (%.2f) não é inteiro e não será testado", i+1, numeros[i]);
					}
				}

			} 

		} else {
			printf("Opa, parace que você não digitou uma quantidade inteira, vamos tentar de novo\n");
		}
	}

	return 0;
}