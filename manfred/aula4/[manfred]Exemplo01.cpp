/*
1.	Construa um programa em C ANSI que defina uma estrutura 
Pessoa (ex.: nome, idade, peso) e implemente duas funções: 
Pessoa lerPessoa(void) para preencher os campos via teclado e 
void imprimirPessoa(Pessoa p) para exibir os dados na tela.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
	int idade;
	float peso;
	char nome[50];
}Pessoa;

Pessoa lerPessoa(void);
void imprimirPessoa(Pessoa p);

int main(void){
	// variáveis
	char op;
	Pessoa bd[TAM];
	int c=0;
	
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
				if(c<TAM){
					bd[c]=lerPessoa();
					c++;
				}else{
					printf("Erro!\n");
				}
				break;
			case '2':
				for(int i=0;i<c;i++) imprimirPessoa(bd[i]);
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

Pessoa lerPessoa(void){
	Pessoa a;
	printf("Digite o nome: ");
	fflush(stdin);
	gets(a.nome);
//	fflush(stdin);
	printf("Digite a idade: ");
	scanf("%i",&a.idade);
//	fflush(stdin);
	printf("Digite o peso: ");
	scanf("%f",&a.peso);
//	fflush(stdin);
	return a;
}

void imprimirPessoa(Pessoa p){
	printf("Nome = %s\tIdade = %i\tPeso = %f\n",p.nome,p.idade,p.peso);
}