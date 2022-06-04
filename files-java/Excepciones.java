import javax.swing.*;

public class Excepciones
{
    public static int mes, dia_mes;

    public static void comprobar(int mes, int dia_mes) throws Exception
    {
        if (mes < 1 || mes > 12)
        {
            throw new Exception("El mes se sale del rango 1-12");
        }
        if ( dia_mes < 1 || dia_mes > 31 )
        {
            throw new Exception("El dia se sale de rango 1-31");
        }
    }

    public static void main(String[] args) throws Exception
    {
        mes = Integer.parseInt(JOptionPane.showInputDialog(null, "Introduce un mes"));

        dia_mes = Integer.parseInt(JOptionPane.showInputDialog(null, "Introduce un dia"));

        comprobar(mes, dia_mes);
    }
}
