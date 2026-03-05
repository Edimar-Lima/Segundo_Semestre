package aula2;

import java.util.Scanner;

public class Exercicio2 {
    public static void main(String[] args) {
        
        Scanner Leitor = new Scanner(System.in);
        System.out.print("Digite um numero: ");
        String nome = Leitor.nextLine();
        double tabuada = Double.parseDouble(nome);
        for (int i = 0; i <= 10; i++) {
            System.out.println(tabuada + " x " + i + " = " + (tabuada * i));
        }
        Leitor.close();
    }
}
