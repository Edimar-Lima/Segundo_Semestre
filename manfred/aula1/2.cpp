/*2. Faça uma função que desenhe linhas de caracteres na tela, 
a função receberá como argumento o tipo de caractere e o número de linhas que deverá imprimir.

R.:*/

#include <stdio.h>
#include <stdlib.h>

void desenho(char a, int b);

int main(void){
	char caractere;
	int linha;
	
		printf("Digite o caractere: ");
		scanf("%c",&caractere);
		printf("Digite o numero de linhas: ");
		scanf("%i",&linha);
		
		desenho(caractere, linha);
	
		return 0;	
	}

void desenho(char a, int b){
	for(int i = 0;i<b;i++){
		for(int j = 0;j<80;j++){
			printf("%c",a);
		}
		printf("\n");
	}
}