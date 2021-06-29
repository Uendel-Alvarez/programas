Algoritmo "calculadora2"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : passagens de parâmetros
// Autor(a)    : Uendel
// Data atual  : 29/06/2021
procedimento soma(A,B: real)//parametros formais
Var
   Resultado: real //variáveis locais
Inicio

   Resultado <- A+B
   escreval("o resultado da soma eh:  ", Resultado)
fimprocedimento

procedimento subtracao(A,B,:real)//parametros formais
Var
   Resultado: real  //variáveis locais
Inicio

   Resultado <- A-B
   escreval("o resultado da subtracao eh:  ", Resultado)
fimprocedimento


procedimento multiplicacao(A,B:real) //parametros formais
Var
   Resultado: real  //variáveis locais
Inicio

   Resultado <- A*B
   escreval("o resultado da MULTIPLICACAO eh:  ", Resultado)
fimprocedimento


procedimento divisao(A,B:real)//parametros formais
Var
   Resultado: real   //variáveis locais
Inicio

   Resultado <- A/B
   escreval("o resultado da divisao eh:  ", Resultado)
fimprocedimento


Var
   // Seção de Declarações das variáveis globais
   opcao: inteiro
   X,Y: real  //parametros reais
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   opcao <- 0
   enquanto  (opcao <> 5)faca
      escreval("1 - soma")
      escreval("2 - subtracao")
      escreval("3 - multiplicacao")
      escreval("4 - divisao")
      escreval("5 - sair")
      escreval("escreva a opcao:  ")
      leia(opcao)
      se(opcao <> 5)entao
      escreval("informe o valor de X: ")
      leia(X)
      escreval("informe o valor de Y: ")
      leia(Y)
      fimse
      se (opcao = 1)entao
         soma(X,Y)
      fimse
      se (opcao = 2)entao
         subtracao(X,Y)
      fimse
      se (opcao = 3)entao
         multiplicacao(X,Y)
      fimse
      se (opcao = 4)entao
         divisao(X,Y)
      fimse
      se (opcao = 5)entao
         escreval("saiu!")
      fimse
   fimenquanto

Fimalgoritmo