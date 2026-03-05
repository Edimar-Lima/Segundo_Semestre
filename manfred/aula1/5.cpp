/*5. Faça um programa que leia uma data, passe para uma função que reajuste esta data em cinco dias.

R.:*/

#include <stdio.h>
#include <stdlib.h>

int ValidaData(int d, int m, int a);
void AvancaTempo(int d, int m, int a);
void VoltaTempo(int d, int m, int a);

int main (void){
	int D,M,A;
	char opcao;
	
	printf("Digite a data (DD/MM/AAAA): ");
	scanf("%i%*c%i%*c%i",&D,&M,&A);
	
	if (ValidaData(D,M,A) == 0){
		printf("\nData Original: %i/%i/%i\n",D,M,A);
		printf("Selecione uma opcao: \n");
		printf("[ a ] Avancar 5 dias\n");
		printf("[ b ] Voltar 5 dias\n\n");
		fflush(stdin);
		scanf("%c", &opcao);
	
		switch(opcao){
			case 'a':
				AvancaTempo(D,M,A);
			break;
			case 'b':
				VoltaTempo(D,M,A);
			break;
			default:
				printf("Opcao Invalida");
			break;
		}
	}else{
		printf("Data invalida\n");
	}

	return 0;

}


int ValidaData(int d, int m, int a){

	if (a >= 0){
		if (m >= 1 && m <= 12) {
			if (d >= 1 && d <= 31){
				return 0;
			}else{
				return 1;
			}
		}else{
			return 1;
		}
	}else{
		return 1;
	}
}

void AvancaTempo(int d, int m, int a){
	d = d + 5;
		if(d>31){
			d = d - 31;
			m = m + 1;
			if(m>12){
				m = 1;
				a = a + 1;
		}
	}
	printf("Data futura: %i/%i/%i",d,m,a);
}

void VoltaTempo(int d, int m, int a){
	d = d - 5;
		if(d<=0){
			d = d + 31;
			m = m - 1;
			if(m<=0){
				m = 12;
				a = a - 1;
		}
	}
	printf("Data passada: %i/%i/%i",d,m,a);
}