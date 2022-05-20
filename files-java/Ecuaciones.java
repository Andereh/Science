import java.util.Scanner;

public class Ecuaciones {

    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        double a, b, c, result1, result2, innerSqrt;  // InnerSqrt se refiere a la parte internar de la raiz
                                                    // Lo hacemos haci para hacer el programa mas legible

        System.out.print("Valor de a: ");
        a = scan.nextFloat();

        System.out.print("Valor de b: ");
        b = scan.nextInt();

        System.out.print("Valor de c: ");
        c = scan.nextInt();

        innerSqrt = Math.sqrt( Math.abs( Math.pow(b, 2) - 4*a*c) ); // utilizamos el valor absoluto de innerSqrt
                                                                    // para no trabajar con numeros imaginarios

        result1 = ( (-b) + innerSqrt) / (2*a);
        result2 = ( (-b) - innerSqrt) / (2*a);

        System.out.println("\nResultado 1: " + result1);
        System.out.println("Resultado 2: " + result2);

    }
}