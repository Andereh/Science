import java.util.Scanner;

public class MaxComun {
    public static int getMCM(int _a, int _b)
    {
        for (int i = Math.min(_a, _b); i > 1; i--)
        {
            if (_a%i == 0 && _b%i == 0) return i;

        }

        System.out.println("Estos numeros no tienen un divisor comun\n");
        return 0;
    }

    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int a, b, result;

        System.out.print("Valor #1: ");
        a = scan.nextInt();

        System.out.print("Valor #2: ");
        b = scan.nextInt();

        result = getMCM(a, b);

        System.out.print("Maximo comun divisor: " + result + "\n");

    }
}
