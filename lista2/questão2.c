#include <stdio.h>
#include <math.h>

/*

Disciplina algoritmos 1
Lista 2 (avaliativa )
Questão 2

*/

float delta(float argA, float argB, float argC){

	float de;

	de = argB*argB-4*argA*argC;

	return de;

}

float f_de_x(float argX, float argA, float argB, float argC){

	float fx;

	fx = argA*pow(argX,2)+argX*argB+argC;

	return fx;
}

int main(void){

	float x, a, b, c, d, x1, x2;

	printf("O objetivo deste exercício é calcular a função f(x) = ax²+bx+c \nPasse os valores de a, b e c e retornaremos os valores de f(x)\n");
	printf("Digite o valor de a ");
	scanf("%f", &a);
	printf("\nDigite o valor de b ");
	scanf("%f", &b);
	printf("\nDigite o valor de c ");
	scanf("%f", &c);

	d = delta(a, b, c);

	printf("Primeiro vamos calcular delta (Delta = b²-4ac): %.2f \n", d);


	if (d<0) {

		printf("Hmm... Não existem raizes reais quando Delta é negativo\nEncerrando...\n");

	} else {

		printf("Agora vamos utilizar calcular as raízes da equação com a formula de Baskara: (x=-b+-raizde(Delta)/2a): \n");

		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);

		printf("X' é igual a %.2f e X\" é igual a %.2f \n", x1, x2);

		printf("O valor de f(x) para cada x real é de %.2f e %.2f, respectivamente\n", f_de_x(x1, a, b, c), f_de_x(x2, a, b, c));

	}

	return 0;
}