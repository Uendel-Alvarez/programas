Algoritmo "calculafatorial"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : função que retorna valor do fatorial
// Autor(a)    : Uendel
// Data atual  : 29/06/2021


Função Fatorial(X: inteiro): inteiro
Var
i,fat: inteiro
Inicio

fat <- 1
para i de 1 ate X passo 1 faca
fat <- fat*1
fimpara
fimFunção



Var
// Seção de Declarações das variáveis 
n, resultado: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Escreva o numero do qual deseja calcular fatorial:  ")
leia(n)
resultado <- Fatorial(n)
escreval("o fatorial eh:  ", resultado)


Fimalgoritmo