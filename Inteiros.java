import java.util.Scanner;
    public class Inteiros{
        public static void main(String[] args){
            int A, B, C;
            Scanner numeros = new Scanner(System.in);
            System.out.println("Digite um valor para A:  ");
            A = numeros.nextInt();
            System.out.println("Digite um valor para B:  ");
            B = numeros.nextInt();
            System.out.println("Valor de A:  "+A);
            System.out.println("Valor de B:  "+B);
            //tem que ter uma terceira variavel suporte ou intermediária: a C
            C = A;//o conteudo da A vai para dentro da C
            A = B;//o conteudo da B vai para dentro da A
            B = C;//o conteudo da C que era da A, aí sim vai para a B
            System.out.println("O valor de A ficou:  "+A);
                        System.out.println("O valor de B ficou:  "+B);

        }
    }
