/*
5.	Construa um programa em C ANSI que leia o raio r e calcule a 
área do círculo em uma função void areaCirculo(float r, float 
*area) que grave o resultado em *area (usar pi = 3.141592), e no 
main imprima a área com duas casas decimais.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void areaCirculo(float r, float *area);

int main(void){
	float raio, area;
	
	printf("Digite o raio: ");
	scanf("%f",&raio);
	areaCirculo(raio, &area);
	printf("A area e %.2f\n",area);
	
	return 0;
}

void areaCirculo(float r, float *area){
	*area=M_PI*pow(r,2);
}