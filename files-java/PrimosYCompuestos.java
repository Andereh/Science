import javax.swing.JOptionPane;

class NumChecker {
    private int n;

    public void setValue(int _n)
    {
        n = _n;
    }


	private boolean is_prime()
	{
        if (n == 2) return true;
		if (n%2 == 0) return false;

		for (int i = 3; i < n/2; i += 2) {
			if (n%i == 0) return false;
		}
		return true;
	}
    
    public void check()
    {
        if (is_prime())
        {
        	System.out.println("Es un numero primo");
        } else
        {
        	System.out.println("Es un numero compuesto");
        }

    }
}

public class PrimosYCompuestos {

    public static void main(String[] args) throws Exception
    {
        int num; 

        NumChecker checker = new NumChecker();

        num = Integer.parseInt(JOptionPane.showInputDialog(null, "Introduce el numero a verificar"));

        if (num <= 1)
        {
            throw new Exception("El numero no puede ser inferior a 2");
        }

        checker.setValue(num);
        checker.check();


    }
}
