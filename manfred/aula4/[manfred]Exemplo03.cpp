/*
3.	Construa um programa em C ANSI que defina uma estrutura Peca 
com código, nome, cor, peso e preço, implemente lerPeca(Peca *p) 
e imprimirPeca(Peca *p).
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
	int codigo;
	float peso, preco;
	char nome[50], cor[50];
	
}Peca;

void lerPeca(Peca *p);
void imprimirPeca(Peca *p);

int main(void){
	// variáveis
	char op;
	Peca bd[TAM];
	
	do{
		system("cls");
		printf("1 - Adicionar\n");
		printf("2 - Listar\n");
		printf("3 - Sair\n");
		printf("Digite uma opcao: ");
		fflush(stdin);
		scanf("%c",&op);
		switch(op){
			case '1':
				lerPeca(bd);
				break;
			case '2':
				imprimirPeca(bd);
				break;
			case '3':
				break;
			default:
				printf("Erro!\n");
		}
		if(op!='3') system("pause");
		
	}while(op!='3');
	
	
	return 0;
}

void lerPeca(Peca *p){
	
	for(int i=0;i<TAM;i++){
		printf("Digite o codigo: ");
		scanf("%i",&p[i].codigo);
		printf("Digite o peso: ");
		scanf("%f",&p[i].peso);
		printf("Digite o preco: ");
		scanf("%f",&p[i].preco);
		printf("Digite o nome: ");
		fflush(stdin);
		gets(p[i].nome);
		printf("Digite o cor: ");
		fflush(stdin);
		gets(p[i].cor);
	}
}

void imprimirPeca(Peca *p){
	for(int i=0;i<TAM;i++){
		printf("Codigo = %i\tPeso = %f\tPreco = %f",p[i].codigo,p[i].peso,p[i].preco);
		printf("Nome = %s\tcor = %s\n",p[i].nome,p[i].cor);
	}
}