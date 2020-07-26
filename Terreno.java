import java.util.Scanner;
public class Terreno{
    public static void main(String[] args){
        float larg, comp, area, per;
        Scanner ler = new Scanner(System.in);
        System.out.println("Digite a largura do terreno:  ");
        larg = ler.nextFloat();
        System.out.println("Digite o comprimento do terreno:  ");
        comp = ler.nextFloat();
        area = larg*comp;
        per = 2*(larg+comp);
        System.out.println("Area = "+area+"\nPerimetro = "+per);
        
        }
}
