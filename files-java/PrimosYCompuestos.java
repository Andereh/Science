import java.util.Scanner;

public class PrimosYCompuestos {
	public static boolean is_prime(int n)
	{
		if (n%2 == 0) return false;

		for (int i = 3; i < n/2; i += 2) {
			if (n%i == 0) return false;
		}
		return true;
	}

    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int num; 
        System.out.print("Introduce un numero: ");

        num = scan.nextInt();
        if (is_prime(num))
        {
        	System.out.println("Es un numero primo");
        } else
        {
        	System.out.println("Es un numero compuesto");
        }
    }
}
