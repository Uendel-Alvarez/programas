import  java.util.Scanner;
public class ExercicioWhile1{
    public static void main(String[] args){
        int numlidos , soma=0, cont=1;
        Scanner ler= new Scanner(System.in);
       
             while(cont <= 10){
             System.out.println("digitar um numero:   ");
             numlidos = ler.nextInt();
             soma += numlidos;
             cont++;/*acrescenta uma unidade aos valores digitados no teclado*/

        }
        System.out.println("A soma dos dez primeiros valores:   "+soma);

    }
}
