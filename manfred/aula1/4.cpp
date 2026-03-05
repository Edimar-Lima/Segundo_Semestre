 /*4. Faça uma função que receba como argumento os valores dos lados de um triângulo, 
a função deverá retornar 0 se triângulo for equilátero, 1 se for isósceles ou 2 se for escaleno.

R.:*/

#include <stdio.h>
#include <stdlib.h>

int Triangulo(int a,int b, int c);

int main(void){
	int lado1, lado2, lado3, tipo;
	
	printf("Insira as dimensoes do triangulo: ");
	scanf("%i %i %i", &lado1, &lado2, &lado3);
	
	tipo = Triangulo(lado1, lado2, lado3);
	
	if(tipo == 0){
		printf("R %i : Equilatero\n",tipo); // Todos os lados iguais.
	}else if(tipo == 1){
		printf("R %i : Isosceles\n",tipo); // Dois lados iguais.
	}else if(tipo == 2){
		printf("R %i : Escaleno\n",tipo); // Todos os lados diferentes.
	}else{
		printf("Dados invalidos. Programa encerrado.\n");
	}
	
	return 0;
}

int Triangulo(int a, int b, int c){
	if (a == b && b == c){
		return 0; // Equilatero
	} else if (a == b || b == c || c == a){
		return 1; // Isosceles
	} else {
		return 2; // Escaleno
	}
}