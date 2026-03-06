/*
2. Construa um programa em C ANSI que defina uma estrutura 
Animal com raça, cor, peso e sexo, armazene 10 animais em 
um vetor de estruturas, implemente uma função 
Animal lerAnimal(void) e outra void imprimirAnimal(Animal a), 
e ao final imprima todos os cadastros.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
	float peso;
	char raca[50], cor[50], sexo;
}Animal;

Animal lerAnimal(void);
void imprimirAnimal(Animal p);

int main(void){
	// variáveis
	char op;
	Animal bd[TAM];
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
					bd[c]=lerAnimal();
					c++;
				}else{
					printf("Erro!\n");
				}
				break;
			case '2':
				for(int i=0;i<c;i++) imprimirAnimal(bd[i]);
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

Animal lerAnimal(void){
	Animal a;
	
	printf("Digite o raca: ");
	fflush(stdin);
	gets(a.raca);
	
	printf("Digite o cor: ");
	fflush(stdin);
	gets(a.cor);
	
	do{
		printf("Digite o sexo (f/m): ");
		fflush(stdin);
		scanf("%c",&a.sexo);
		if(a.sexo != 'f' && a.sexo != 'm'){
			printf("Erro!\n");
			system("pause");
		}
	}while(a.sexo != 'f' && a.sexo != 'm');
	
	printf("Digite o peso: ");
	scanf("%f",&a.peso);
	
	return a;
}

void imprimirAnimal(Animal p){
	printf("Raca = %s\tCor = %s\tSexo = %c\tPeso = %f\n",p.raca,p.cor,p.sexo,p.peso);
}