package aula2;

public class Exercicio7 {
    public static void main(String[] args) {
        // 1. Declarar as variáveis como double conforme solicitado
        double V, R, A;

        // 2. Definir valores quaisquer para altura (A) e raio (R)
        R = 5.0;  // Exemplo: raio de 5cm
        A = 10.0; // Exemplo: altura de 10cm

        // 3. Escrever a fórmula: V = 3.14159 * R * R * A
        V = 3.14159 * R * R * A;

        // 4. Exibir o resultado na tela
        System.out.println("--- Cálculo do Volume da Lata de Óleo ---");
        System.out.println("Raio definido: " + R);
        System.out.println("Altura definida: " + A);
        System.out.println("O volume encontrado é: " + V);
    }
}
