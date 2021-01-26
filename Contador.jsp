<%@ page import="java.util.Date"%>
<%@ page import="java.text.SimpleDateFormat"%>

<html>
    <head>
        <title>Exemplo de uso de elementos sintaticos de JSP</title>
    </head>
    <body>
        <%! int intContaAcesso = 0; %>
        <%
        java.util.Date DataAtual = new java.util.Date();
            String strData = new SimpleDateFormat("dd/MM/yyyy").format(DataAtual);
            %>
        
        <h2>Data Atual: <%= strData %></h2><br>
        <%
        out.println("<h2>Contagem de atualizacoes de pagina</h2><br>");
        intContaAcesso++;
        %>
            <h2>Numero de vezes que voce acessou ou atualizou esta pagina: <%= intContaAcesso %>.</h2>

    </body>
</html>
