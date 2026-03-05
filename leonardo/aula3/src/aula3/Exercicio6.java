package aula3;
public class Exercicio6 {
    public static void main(String[] args) {
        int anterior = 0;
        int atual = 1;
        
        System.out.println(anterior);
        System.out.println(atual);
        
        while (atual <= 100) {
            int proximo = anterior + atual;
            System.out.println(proximo);
            anterior = atual;
            atual = proximo;
        }
        System.out.println(atual);
    }
}