/* 
Construa um programa em C ANSI que leia a, b e c (com a != 0) e calcule as raízes da equação do 2º grau usando uma função 
bhaskara(float a, float b, float c, float *x1, float *x2) que grave os valores em *x1 e *x2, tratando delta < 0 com uma mensagem “sem raízes reais”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bhaskara(float a, float b, float c, float *x1, float *x2);

int main(void){
	float a, b, c;
	float x1, x2;
	
	do {
		printf("Digite o valor de A:");
		scanf("%f", &a);
	}while (a==0);
	printf("Digite o valor de B:");
	scanf("%f", &b);
	printf("digite o valor de C:");
	scanf("%f", &c);
	
	bhaskara(a, b, c, &x1, &x2);
	printf("x1 = %f\n", x1);
	printf("x2 = %f\n", x2);
	
	return 0;
}

void bhaskara(float a, float b, float c, float *x1, float *x2){
	float delta = b*b - 4*a*c;
	if (delta < 0){
	printf("Sem raizes reais\n");
	return;
	
	}
	*x1 = (-b + sqrt(delta)) / (2*a);
	*x2 = (-b - sqrt(delta)) / (2*a);
	
}