#include <stdio.h>

int main(void){

 const float Cmedio = 12; 
 float tempo, Vmedia, consumo, distancia; 
 
	printf("Entre com a velocidade média: ");
	scanf("%f", &Vmedia);
	printf("\nEntre com o tempo de percurso: ");
	scanf("%f", &tempo);
	distancia = Vmedia*tempo;
	consumo = distancia/Cmedio;
	printf("\nA viagem percorrerá %.2fkm e consumirá %.2fL de combustível\n", distancia, consumo);

return 0;
}