public class ExemploWhile{
    public static void main(String[] args){
        int num=1, soma=0;
        while(num<=100){
            soma += num;//soma-se a variavel soma o valor de num acumulando com soma
            num++;//variavel num incrementa de 1 unidade

             
        }
        System.out.println("soma dos números entre 1 e 100 ="  + soma);
    }
}
