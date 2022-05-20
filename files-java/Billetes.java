import java.util.Scanner;

public class Billetes {

    public static void main(String[] args)
    {
        // Denominaciones de los billetes: 200, 100, 50, 20, 10 y 5. Lo demas seran monedas
        Scanner scan = new Scanner(System.in);
        int efectivo, resto, cantidadBilletes;
        int billetes [] = {100, 50, 20, 10, 5, 1};

        System.out.print("Cuanta plata tienes: ");
        efectivo = scan.nextInt();


        for (int i = 0; efectivo > 0; i++)
        {
            resto = efectivo%billetes[i];
            efectivo -= resto;
            cantidadBilletes = efectivo/billetes[i];

            if (cantidadBilletes > 0) System.out.println(billetes[i] + ": " + cantidadBilletes);

            efectivo = resto;
        }
    }
}
