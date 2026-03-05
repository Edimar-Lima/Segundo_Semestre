#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int codigo;
    char nome[50];
    char cor[20];
    float peso;
    float preco;
} Peca;


void entrada(Peca *p);
void saida(Peca *p);

int main(void){
    Peca p; 
    
    printf("--- Cadastro de Peca ---\n");
    entrada(&p); 
    
    printf("\n--- Dados da Peca ---\n");
    saida(&p);   
    
    return 0;
}


void entrada(Peca *p){
    printf("Digite o codigo: ");
    scanf("%i", &p->codigo); 
    fflush(stdin); 
    
    printf("Digite o nome: ");
    gets(p->nome); 
    fflush(stdin);
    
    printf("Digite a cor: ");
    gets(p->cor);
    fflush(stdin);
    
    printf("Digite o peso: ");
    scanf("%f", &p->peso);
    fflush(stdin);
    
    printf("Digite o preco: ");
    scanf("%f", &p->preco);
    fflush(stdin);
}


void saida(Peca *p){
    
    printf("Codigo: %i\n", p->codigo);
    printf("Nome: %s\n", p->nome);
    printf("Cor: %s\n", p->cor);
    printf("Peso: %.2f\n", p->peso);
    printf("Preco: %.2f\n", p->preco);
}