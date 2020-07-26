import java.util.Scanner;
public class ConversorTempo{
    public static void main(String[] args){
        int horas, minutos, segundos, totseg;
        Scanner entra = new Scanner(System.in);
        System.out.println("Digitar o total em segundos:    ");
        totseg = entra.nextInt();
        horas = totseg/3600;
        minutos = (totseg%3600)/60;//o resto da div por 3600 do vr em seg e div por 60
        segundos = totseg%60;//o resto da div por 60 do vr em seg


        System.out.println("São:  "+horas+"Horas:  "+minutos+"Minutos:  "+segundos+"Segundos");
       

 

    }
}
