#include <stdio.h>
#include <stdlib.h>


void converteNome(char *nome);

int main(void){
    char nome[50]; 
    
    
    converteNome(nome); 
    
    printf("Nome ajustado: %s\n", nome);
    
    return 0;
}


void converteNome(char *nome){
    printf("Digite um nome: ");
    gets(nome); 
    fflush(stdin);
    
    
    if(nome[0] >= 'a' && nome[0] <= 'z'){
        nome[0] = nome[0] - 32;
    }
}