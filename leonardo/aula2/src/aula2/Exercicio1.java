package aula2;

public class Exercicio1 {

    public static void main(String[] args) {
        double gastoJaneiro = 15000;
        double gastoFevereiro = 23000;
        double gastoMarco = 17000;
        double gastoTotal = gastoJaneiro + gastoFevereiro + gastoMarco;
        double gastoMedio = gastoTotal / 3;
        System.out.println("Gasto total do trimestre: " + gastoTotal);
        System.out.println("Gasto médio mensal: " + gastoMedio);
    }
}