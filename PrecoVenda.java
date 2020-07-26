public class PrecoVenda{
    public static void  main(String[] args) {
        double precocusto=37.00, comissaovendedor, impostos, precovenda;

        comissaovendedor=((precocusto*12)/100);
        impostos=((precocusto*26.95)/100);
        precovenda= precocusto + comissaovendedor + impostos;
        
        System.out.println("O preço de Venda do Produto:   " + precovenda);
        
    }
}
