import java.util.Scanner;
public class TresAlgarismos{
    public static void main(String[] args){
        int cent, dez, un, num;
        Scanner ler = new Scanner(System.in); 
        System.out.println("digite um numero com tres algarismos:   ");
        num = ler.nextInt();
        cent = num/100;
        dez = (num%100)/10;/*o resto da divisão do número  por 100 e dividido por 10
        resulta no numero de dezenas que conpoê o número*/
        un = num%10;/* o resto da divisão por 10 do número, indica o número de unidades
        que compõe o número */
        System.out.println("Centenas =   "+cent);
        System.out.println("Dezenas =   "+dez);
        System.out.println("Unidades =   "+un);
    }
}
