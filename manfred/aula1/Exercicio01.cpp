/*
1.	Faça um programa que leia um número, passe este número 
como parâmetro para uma função que retorne 0 se o número 
for par ou 1 se o número for ímpar.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int valida(int n);

int main(void){
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i",&numero);
	printf("Re: %i - ", valida(numero));
	if(valida(numero)==0){
		printf("par\n");
	}else{
		printf("impar\n");
	}
	return 0;
}

int valida(int n){
	return n%2;
}
	
	
	
	







