#include <stdio.h>
#include <stdlib.h>

// prototipo da função
int soma(int a, int b);

int main(void){
	int n1, n2;
	
	printf("Digite 1 numero: ");
	scanf("%i",&n1);
	printf("Digite 2 numero: ");
	scanf("%i",&n2);
	
	printf("A soma e %i\n",soma(n1,n2));
	
	return 0;
}

// função soma();
int soma(int a, int b){
	int r = a + b;
	return r;
}








