/*
2.	Faça uma função que desenhe linhas de caracteres na 
tela, a função receberá como argumento o tipo de caractere 
e o número de linhas que deverá imprimir.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

void desenhe(char c, int n);

int main(void){
	char caracter;
	int numero;
	
	printf("Digite o caracter: ");
	scanf("%c",&caracter);
	printf("Digite a quantidade de linhas: ");
	scanf("%i",&numero);
	
	desenhe(caracter, numero);
	
	return 0;
}

void desenhe(char c, int n){
	system("cls");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=78+5+12;j++){
			printf("%c",c);
		}
		printf("\n");
	}
}