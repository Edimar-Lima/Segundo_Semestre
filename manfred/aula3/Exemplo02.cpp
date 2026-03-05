#include <stdio.h>
#include <stdlib.h>

#define TAM 3


typedef struct {
	char nome[50];
	int idade;
}Pessoa;

int main(void){
	Pessoa bd[TAM];
	
	for(int i=0;i<TAM;i++){
		printf("Digite o nome: ");
		gets(bd[i].nome);
		fflush(stdin);
		printf("Digite a idade: ");
		scanf("%i",&bd[i].idade);
		fflush(stdin);
	}
	
	for(int i=0;i<TAM;i++){
		printf("%s\t%i\n",bd[i].nome,bd[i].idade);
	}
	
	float m=0;
	for(int i=0;i<TAM;i++){
		m+=bd[i].idade;
	}
	printf("A media e %f\n",m/TAM);
	
	return 0;
}




