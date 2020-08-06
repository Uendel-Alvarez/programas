import java.util.Scanner;
public class ExercicioWhile2 {
    public static void main(String[] args){
        int homens=0, mulheres=0, cont=1;
        char sexo;//criou as variaveis
        Scanner ler = new Scanner(System.in);//cria o ojeto na class Scanner para ler dados do teclado
         while(cont<=20){
             System.out.println("Digite o sexo do aluno (m ou f):    ");
             sexo = ler.nextLine().charAt(0);/*os dois métodos que fazem entrar com a letra do sexo na var sexo */
             if(sexo=='m')
                  homens++;/*se letra do sexo for m comando = a conta mais um homem */
                  else
                  mulheres++;/* se não conta mais uma mulher*/
                  cont++;/*continua a contagem */
             
         }
         System.out.println("total de homens:   "+homens);
         System.out.println("total de mulheres:   "+mulheres);
         
    }

}
