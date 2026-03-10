#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int validaNumero(char *num, int baseOrigem);
int converteParaDecimal(char *num, int baseOrigem);
void imprimeConvertido(int val, int baseDestino);

int main(void){
    int baseOrigem = 0;
    int baseDestino = 0;
    char numero[50];
    int valorDecimal = 0;
    int numValido = 0;

    do {
        printf("--- CONVERSOR DE BASES (Com math.h e string.h) ---\n\n");
        printf("Selecione o Sistema de Origem:\n");
        printf("[ 1 ] Binario\n");
        printf("[ 2 ] Decimal\n");
        printf("[ 3 ] Hexadecimal\n");
        printf("Opcao: ");
        scanf("%i", &baseOrigem);
        fflush(stdin);

        if (baseOrigem < 1 || baseOrigem > 3) {
            system("cls");
            printf("Opcao invalida! Tente novamente.\n\n");
        }
    } while(baseOrigem < 1 || baseOrigem > 3);

    system("cls");

    do {
        printf("Selecione o Sistema de Destino:\n");
        printf("[ 1 ] Binario\n");
        printf("[ 2 ] Decimal\n");
        printf("[ 3 ] Hexadecimal\n");
        printf("Opcao: ");
        scanf("%i", &baseDestino);
        fflush(stdin);

        if (baseDestino < 1 || baseDestino > 3) {
            system("cls");
            printf("Opcao invalida! Tente novamente.\n\n");
        } else if (baseOrigem == baseDestino) {
            system("cls");
            printf("Erro: O sistema de destino nao pode ser igual ao de origem!\n\n");
            baseDestino = 0;
        }
    } while(baseDestino < 1 || baseDestino > 3 || baseOrigem == baseDestino);

    system("cls");

    do {
        printf("Digite o Numero de Origem: ");
        gets(numero);
        fflush(stdin);

        numValido = validaNumero(numero, baseOrigem);

        if(numValido == 0){
            printf("Numero invalido para a base escolhida! Digite apenas caracteres validos.\n\n");
        }
    } while(numValido == 0);


    valorDecimal = converteParaDecimal(numero, baseOrigem);


    printf("\nResultado da conversao: ");
    imprimeConvertido(valorDecimal, baseDestino);
    printf("\n");

    return 0;
}


int validaNumero(char *num, int baseOrigem){
    int tamanho = strlen(num);
    
    if(tamanho == 0){
        return 0;
    }

    for(int i = 0; i < tamanho; i++){
        if(num[i] >= 'a' && num[i] <= 'z'){
            num[i] = num[i] - 32; 
        }

        char c = num[i];

        if(baseOrigem == 1){
            if(c != '0' && c != '1') return 0;
        }else if(baseOrigem == 2){
            if(c < '0' || c > '9') return 0;
        }else if(baseOrigem == 3){
            if(!((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F'))) return 0;
        }
    }
    return 1;
}


int converteParaDecimal(char *num, int baseOrigem){
    int val = 0;
    int tamanho = strlen(num);
    int multiplicador_base = 0;

    if(baseOrigem == 1) multiplicador_base = 2;
    else if(baseOrigem == 2) multiplicador_base = 10;
    else if(baseOrigem == 3) multiplicador_base = 16;

    for(int i = 0; i < tamanho; i++){
        int digito = 0;

        if(num[i] >= '0' && num[i] <= '9'){
            digito = num[i] - '0';
        }else if(num[i] >= 'A' && num[i] <= 'F'){
            digito = num[i] - 'A' + 10;
        }

        int expoente = tamanho - 1 - i;
        val += digito * pow(multiplicador_base, expoente);
    }
    return val;
}


void imprimeConvertido(int val, int baseDestino){
    int restos[100];
    int count = 0;

    if(val == 0){
        printf("0");
        return;
    }

    if(baseDestino == 2){
        printf("%i", val);
    }
    else if(baseDestino == 1){
        while(val > 0){
            restos[count] = val % 2;
            val = val / 2;
            count++;
        }
        for(int i = count - 1; i >= 0; i--){
            printf("%i", restos[i]);
        }
    }
    else if(baseDestino == 3){
        while(val > 0){
            restos[count] = val % 16;
            val = val / 16;
            count++;
        }
        for(int i = count - 1; i >= 0; i--){
            if(restos[i] < 10){
                printf("%i", restos[i]);
            }else{
                printf("%c", restos[i] - 10 + 'A');
            }
        }
    }
}