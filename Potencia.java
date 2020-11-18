package potencia;

import javax.swing.JOptionPane;

public class Potencia {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double base, expoente, resultado;
		String valorStr;
		
		try {
			valorStr = JOptionPane.showInputDialog(null, "Informe a base:  ");
			base = Double.parseDouble(valorStr);
			valorStr = JOptionPane.showInputDialog(null, "Informe o expoente: ");
			expoente = Double.parseDouble(valorStr);
		}catch (NumberFormatException ex) {
			JOptionPane.showInternalMessageDialog(null, "Valor inválido, fechando o programa...");
					return;
			// TODO: handle exception
		}
		resultado = Math.pow(base, expoente);
		JOptionPane.showMessageDialog(null, base + "  elevado a   " + expoente + "  é igual a  " + resultado);
		
	}

}
