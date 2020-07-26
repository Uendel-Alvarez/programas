import java.util.Scanner;
public class ConversorCambial{
public static void main(String[] args){
    float reais, cotacao, dolares;
    Scanner valores = new Scanner(System.in);
    System.out.println("digitar vr em reais:   ");
    reais = valores.nextFloat();
    System.out.println("digitar cotacao do dolar hj:   ");
    cotacao = valores.nextFloat();
    dolares = reais / cotacao;
    System.out.println("valor em dolares: $  "+dolares);
 
}
}
