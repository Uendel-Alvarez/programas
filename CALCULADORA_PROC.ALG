Algoritmo "calculadora"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Uendel
// Data atual  : 29/06/2021
procedimento soma
Var
A,B,Resultado: real //variáveis locais
Inicio
escreval("procedimento SOMA")
escreval("informar o valor de A:  ")
leia(A)
escreval("informar o vlaor de B:  ")
leia(B)
Resultado <- A+B
escreval("o resultado da soma eh:  ", Resultado)
fimprocedimento

procedimento subtracao
Var
A,B,Resultado: real  //variáveis locais
Inicio
escreval("procedimento SUBTRACAO")
escreval("informar o valor de A:  ")
leia(A)
escreval("informar o vlaor de B:  ")
leia(B)
Resultado <- A-B
escreval("o resultado da subtracao eh:  ", Resultado)
fimprocedimento


procedimento multiplicacao
Var
A,B,Resultado: real  //variáveis locais
Inicio
escreval("procedimento MULTIPLICACAO")
escreval("informar o valor de A:  ")
leia(A)
escreval("informar o vlaor de B:  ")
leia(B)
Resultado <- A*B
escreval("o resultado da MULTIPLICACAO eh:  ", Resultado)
fimprocedimento


procedimento divisao
Var
A,B,Resultado: real   //variáveis locais
Inicio
escreval("procedimento DIVISAO")
escreval("informar o valor de A:  ")
leia(A)
escreval("informar o valor de B:  ")
leia(B)
Resultado <- A/B
escreval("o resultado da divisao eh:  ", Resultado)
fimprocedimento


Var
// Seção de Declarações das variáveis 
opcao: inteiro

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
se (opcao = 1)entao
soma
fimse
se (opcao = 2)entao
subtracao
fimse
se (opcao = 3)entao
multiplicacao
fimse
se (opcao = 4)entao
divisao
fimse
se (opcao = 5)entao
escreval("saiu!")
fimse
fimenquanto

Fimalgoritmo