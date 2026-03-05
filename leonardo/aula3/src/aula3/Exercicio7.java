package aula3;
public class Exercicio7 {
    public static void main(String[] args) {
        int x = 13; // Valor inicial sugerido no exemplo
        System.out.print(x);
        
        while (x > 1) { // O programa deve parar quando atingir 1
            if (x % 2 == 0) {
                x = x / 2;
            } else {
                x = 3 * x + 1;
            }
            System.out.print(" -> " + x);
        }
        System.out.println();
    }
}