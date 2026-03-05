package aula3;

public class Exercicio8 {
    public static void main(String[] args) {
        int limite = 5; // Escolhendo um número 'n' arbitrário para a tabela
        
        for (int linha = 1; linha <= limite; linha++) {
            for (int coluna = 1; coluna <= linha; coluna++) {
                System.out.print((linha * coluna) + " ");
            }
            System.out.println(); // Pula para a próxima linha
        }
    }
}