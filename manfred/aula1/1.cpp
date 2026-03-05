/*1. Faça um programa que leia um número, passe este número como parâmetro para uma função 
que retorne 0 se o número for par ou 1 se o número for ímpar.

R.*/

#include <stdio.h>
#include <stdlib.h>

int ImparPar(int a);

int main(void){
	int numero;
	
	printf("Digite o numero : ");
	scanf("%i",&numero);
	if(ImparPar(numero)==0){
		printf("O numero e par.");
	}else{
		printf("O numero e impar.");
	}
	
	return 0;
}

int ImparPar(int a){
	if(a%2==0){
		return 0;
	}else{
		return 1;
	}
}