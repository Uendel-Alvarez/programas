Algoritmo "calculafatorial"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : fun��o que retorna valor do fatorial
// Autor(a)    : Uendel
// Data atual  : 29/06/2021


Fun��o Fatorial(X: inteiro): inteiro
Var
i,fat: inteiro
Inicio

fat <- 1
para i de 1 ate X passo 1 faca
fat <- fat*1
fimpara
fimFun��o



Var
// Se��o de Declara��es das vari�veis 
n, resultado: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Escreva o numero do qual deseja calcular fatorial:  ")
leia(n)
resultado <- Fatorial(n)
escreval("o fatorial eh:  ", resultado)


Fimalgoritmo