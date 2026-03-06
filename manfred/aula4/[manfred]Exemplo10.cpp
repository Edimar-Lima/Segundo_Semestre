/*
10.	Implemente um programa em C ANSI que leia um nome em uma 
string e crie uma função void primeiraMaiuscula(char *n) 
que altere o primeiro caractere para maiúsculo somente se 
for letra minúscula, recebendo a string por referência.
*/
#include <stdio.h>
#include <stdlib.h>

void primeiraMaiuscula(char *n);

int main(void){
	char nome[50];
	
	printf("Digite o nome: ");
	gets(nome);
	
	primeiraMaiuscula(&nome[0]);
	
	printf("Nome e %s\n",nome);

	return 0;
}

/*
void primeiraMaiuscula(char *n){
	if(n[0]>='a' && n[0]<='z'){
		n[0]-=32;
	}
	
}
*/
void primeiraMaiuscula(char *n){
	if(*n>='a' && *n<='z'){
		*n-=32;
	}
}