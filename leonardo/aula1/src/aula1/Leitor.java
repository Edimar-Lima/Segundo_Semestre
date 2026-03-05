package aula1;

import java.util.Scanner;

public class Leitor {

    public static void main(String[] args) {
        Scanner Leitor = new Scanner(System.in);
        System.out.print("Digite seu nome: ");
        String nome = Leitor.nextLine();
        System.out.println("Seja bem-vindo," + nome);

    }

}