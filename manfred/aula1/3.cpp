/*3. Fazer um programa que possibilite várias opções de cálculos a partir de um menu. 
O programa chamará a função correspondente a cada cálculo.

[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50
[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10
[ c ] S = 1000/1 - 997/2 + 994/3.........
[ d ] S = 480/10 - 475/11 + 470/12 - .......
[ f ] FIM

Obs.: Nas opções [c] e [d] fazer os cálculos para os 20 primeiros termos.

R.:*/

#include <stdio.h>
#include <stdlib.h>

void funcaoA();
void funcaoB();
void funcaoC();
void funcaoD();

int main(void){
	char opcao;
	
	do{
		printf("Selecione a opcao abaixo \n\n");
		printf("[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50\n");
		printf("[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10\n");
		printf("[ c ] S = 1000/1 - 997/2 + 994/3.........\n");
		printf("[ d ] S = 480/10 - 475/11 + 470/12 - .......\n");
		printf("[ f ] Encerrar programa\n\n");
		scanf("%c",&opcao);
		fflush(stdin);
		
		switch(opcao){
			case 'a':
				system("cls");
				funcaoA();
				break;
			case 'b':
				system("cls");
				funcaoB();
				break;
			case 'c':
				system("cls");
				funcaoC();
				break;
			case 'd':
				system("cls");
				funcaoD();
				break;
			case 'f':
				printf("O programa foi encerrado.");
				break;
			default:
				system("cls");
				printf("Opcao invalida! Tente novamente.\n");
				break;
		}
	} while(opcao != 'f');
}

//[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50
void funcaoA(){
	float x = 1;
	float y = 1;
	float resultado = 0;
	
	for(int i = 0;i<50;i++){
		resultado += x/y;
		x+=2;
		y++;
	}
	
	printf("O resultado da funcao A e %.2f \n\n",resultado);
}

//[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10
void funcaoB(){
	float x = 1;
	float y = 1;
	float resultado = 0;
	
	for(int i = 0;i<10;i++){
		if (i%2 != 0){
			resultado += (x/y);
		} else{
			resultado -= (x/y);
		}
		x++;
		y++;
	}
	printf("O resultado da funcao B e %.2f \n\n",resultado);
}

// [ c ] S = 1000/1 - 997/2 + 994/3.........
void funcaoC(){
	float x = 1000;
	float y = 1;
	float resultado = 0;
	
	for(int i = 0;i<20;i++){
		if (i%2 == 0){
			resultado += (x/y);
		} else{
			resultado -= (x/y);
		}
		x-=3;
		y++;
	}
	printf("O resultado da funcao C e %.2f \n\n",resultado);
}

// [ d ] S = 480/10 - 475/11 + 470/12 - .......
void funcaoD(){
	float x = 480;
	float y = 10;
	float resultado = 0;
	
	for(int i = 0;i<20;i++){
		if (i%2 == 0){
			resultado += (x/y);
		} else{
			resultado -= (x/y);
		}
		x-=5;
		y++;
	}
	printf("O resultado da funcao D e %.2f \n\n",resultado);
}