import java.util.Scanner;
public class Desconto{
    public static void main(String[] args){
    double valorReal, novoPreco;
    Scanner valor = new Scanner(System.in);
    System.out.println("Entre com o Valor Real:   ");
    valorReal = valor.nextDouble();
    novoPreco = valorReal - ((valorReal*10)/100);
    System.out.println("O novo preco vai ser:"    +novoPreco);
    
    }

}
