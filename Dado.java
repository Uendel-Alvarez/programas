package dado;

import java.util.Random;

import javax.swing.JOptionPane;

public class Jogada {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Random gerador = new Random();
JOptionPane.showMessageDialog(null, gerador.nextInt(6)+1);//sorteia um numero aleatorio

	}

}
