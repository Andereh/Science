import javax.swing.JOptionPane;

class Calculadora {
    private int a, b;

    public void setValues(int _a, int _b)
    {
        a = _a;
        b = _b;
    }


    public void getResult()
    {
        for (int i = Math.min(a, b); i > 1; i--)
        {
            if (a%i == 0 && b%i == 0) 
            {
                System.out.print("Maximo comun divisor: " + i + "\n");
                return;
            }
        }

        System.out.println("Estos numeros no tienen un divisor comun\n");
    }
}

public class MaxComun {

    public static void main(String[] args) throws Exception
    {
        int a, b;

        Calculadora calc = new Calculadora();

        a = Integer.parseInt(JOptionPane.showInputDialog(null, "Valor #1"));
        b = Integer.parseInt(JOptionPane.showInputDialog(null, "Valor #2"));

        if (a < 2 || b < 2)
        {
            throw new Exception("Ninguno de los valores puede ser menor a 2");
        }

        calc.setValues(a, b);
        calc.getResult();
    }
}
