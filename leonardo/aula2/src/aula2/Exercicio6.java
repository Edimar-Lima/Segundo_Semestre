package aula2;

import java.util.Scanner;

public class Exercicio6 {
    public static void main(String[] args) {
        // Scanner configurado para ler entrada do teclado
        Scanner leitor = new Scanner(System.in);

        // 1. Entrada da temperatura em Celsius
        System.out.print("Digite a temperatura em graus Celsius (C): ");
        double C = leitor.nextDouble();

        // 2. Aplicação das fórmulas de conversão
        double F = C * 1.8 + 32;               // Fahrenheit
        double K = C + 273.15;                 // Kelvin
        double Re = C * 0.8;                   // Réaumur
        double Ra = C * 1.8 + 32 + 459.67;     // Rankine

        // 3. Exibição dos resultados
        System.out.println("\n--- Conversões de Temperatura ---");
        System.out.println("Celsius: " + C + " °C");
        System.out.println("Fahrenheit: " + F + " F");
        System.out.println("Kelvin: " + K + " K");
        System.out.println("Réaumur: " + Re + " Re");
        System.out.println("Rankine: " + Ra + " Ra");

        // Fecha o leitor para liberar recursos do sistema
        leitor.close();
    }
}
