import javax.swing.JOptionPane;


class Banquero 
{
    private int billetes [] = {100, 50, 20, 10, 5, 1};
    private int efectivo, resto, cantidadBilletes;

    public void hacerDeposito(int cantidad) 
    {
        efectivo = cantidad;
    }
    
    public void hacerRetiro() 
    {
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

public class Billetes {

    public static void main(String[] args) throws Exception
    {
        int dineroEnMano;
        
        Banquero banq = new Banquero();


        dineroEnMano = Integer.parseInt(JOptionPane.showInputDialog(null, "Cuanta plata tienes"));

        if (dineroEnMano < 1)
        {
            throw new Exception ("No puedes hacer un retiro si no tienes dinero\n");
        }

        banq.hacerDeposito(dineroEnMano);
        banq.hacerRetiro();
    }
}
