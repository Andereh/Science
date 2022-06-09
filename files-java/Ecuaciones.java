import javax.swing.JOptionPane;

class Polinomio {
    private double result1, result2, innerSqrt;  // InnerSqrt se refiere a la parte internar de la raiz
                                                  // Lo hacemos asi para hacer el programa mas legible
    private int a, b, c;
    
    public void setValues(int _a, int _b, int _c)
    {
        a = _a;
        b = _b;
        c = _c;
    }

    public void getResults()
    {
        innerSqrt = Math.sqrt( Math.abs( Math.pow(b, 2) - 4*a*c) ); // utilizamos el valor absoluto de innerSqrt
                                                                    // para no trabajar con numeros imaginarios

        result1 = ( (-b) + innerSqrt) / (2*a);
        result2 = ( (-b) - innerSqrt) / (2*a);

        System.out.println("\nResultado 1: " + result1);
        System.out.println("Resultado 2: " + result2);

    }

}

public class Ecuaciones {

    public static void main(String[] args)
    {
        int a, b, c;
        Polinomio poli = new Polinomio();

        a = Integer.parseInt(JOptionPane.showInputDialog(null, "Valor de a"));
        b = Integer.parseInt(JOptionPane.showInputDialog(null, "Valor de b"));
        c = Integer.parseInt(JOptionPane.showInputDialog(null, "Valor de c"));

         /*
          * No utilizamos excepciones ya que cualquier valor no real sera correcto
          */


        poli.setValues(a, b, c);
        poli.getResults();


    }
}
