package aula2;

import java.util.Scanner;

public class Exercicio3 {
    public static void main(String[] args) {
        // Inicializa o Scanner para ler a entrada do usuário
        Scanner leitor = new Scanner(System.in);

        // 1. A variável nome1 armazenará o valor "mestre do universo"
        String nome1 = "mestre do universo";

        // 2. A variável nome2 receberá um valor informado pelo usuário
        System.out.print("Digite um valor para nome2: ");
        String nome2 = leitor.nextLine();

        System.out.println("\n--- Valores Originais ---");
        System.out.println("nome1: " + nome1);
        System.out.println("nome2: " + nome2);

        // 3. Altere (troque) os valores das variáveis
        // Usamos uma variável auxiliar para não perder o valor de nome1
        String aux = nome1; 
        nome1 = nome2;      // nome1 agora tem o valor que era de nome2
        nome2 = aux;        // nome2 agora tem o valor que estava salvo em aux (nome1 original)

        // 4. Exiba a soma (concatenação) da variável nome1 com o valor da variável nome2
        System.out.println("\n--- Valores Trocados ---");
        System.out.println("Resultado da soma (nome1 + nome2): " + nome1 + " " + nome2);

        // Fecha o leitor para evitar o aviso de "Resource leak" que você viu antes
        leitor.close();
    }
}
