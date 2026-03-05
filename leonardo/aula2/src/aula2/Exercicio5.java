package aula2;

import java.util.Scanner;

public class Exercicio5 {
    public static void main(String[] args) {
        // Criando o leitor dentro de um try-with-resources para fechar automaticamente
        try (Scanner leitor = new Scanner(System.in)) {
            
            // 1. O aluno informa seu nome
            System.out.print("Digite o nome do aluno: ");
            String nome = leitor.nextLine();
            
            // 2. O aluno informa as quatro notas
            System.out.print("Digite a nota 1: ");
            double nota1 = leitor.nextDouble();
            
            System.out.print("Digite a nota 2: ");
            double nota2 = leitor.nextDouble();
            
            System.out.print("Digite a nota 3: ");
            double nota3 = leitor.nextDouble();
            
            System.out.print("Digite a nota 4: ");
            double nota4 = leitor.nextDouble();
            
            // 3. Calcula a média (soma das notas dividida pela quantidade)
            double media = (nota1 + nota2 + nota3 + nota4) / 4;
            
            // 4. Exibe o resultado final
            System.out.println("\n--- Boletim Escolar ---");
            System.out.println("Aluno: " + nome);
            System.out.println("Média final em Matemática: " + media);
            
            // Opcional: Adiciona uma mensagem de aprovação
            if (media >= 7.0) {
                System.out.println("Status: Aprovado!");
            } else {
                System.out.println("Status: Reprovado.");
            }
        }
    }
}
