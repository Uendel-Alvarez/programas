package convtemperatura;

import javax.swing.JOptionPane;

public class ConvTemperatura {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double celsius = 0;
		double  fahr;
		
	try {
		String resp = JOptionPane.showInputDialog(null, "informar os graus em celsius:  ");
		celsius = Double.parseDouble(resp);
		
	}catch(NumberFormatException ex) {
		JOptionPane.showInternalMessageDialog(null, "valor inválido informado. Finalizado. ");
		return;
		
	}
	fahr = ((celsius * 9)/5)+32;
	JOptionPane.showInternalMessageDialog(null, celsius + " Celsius = " + fahr + "Fahrenheit");
	
	}

} 
