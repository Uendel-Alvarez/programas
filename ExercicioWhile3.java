public class ExercicioWhile3{
    public static void main(String[] args){
        int num=1, soma=0;
        while(true){/*comando true provoca repetição infinita */
            soma += num;//soma-se a variavel soma o valor de num acumulando com soma
            ++num;//variavel num incrementa de 1 unidade
            if(num>100)
            break;/*ao executar o if o break interrompe a repetição infinita
            e a var soma vai para o valor correto */
             
        }
        System.out.println("soma dos números entre 1 e 100 ="  + soma);
    }
}
