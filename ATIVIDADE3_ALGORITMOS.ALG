Algoritmo "atividade3_Algoritmos"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Uendel
// Data atual  : 03/07/2021
Var
   // Seção de Declarações das variáveis
   notas: vetor [1..5] de real
   soma, media: real
   i: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   soma <- 0
   para i de 1 ate 5  faca
      escreval("digite a nota da ", i:1, "@ avaliacao:  ")
      leia(notas[i])
      soma <- soma + notas[i]
   fimpara
   media <- (soma/5)
   escreval("Valor da media: ", media )
   se media < 4.99 entao
      escreval("status: REPROVADO")
   senao
      se (media >= 5) e  (media <= 6.99) entao
         escreval("status: EM RECUPERACAO")
      senao
         se (media >= 7) e (media <= 10) entao
            escreval("status: APROVADO")
         fimse
      fimse
   fimse
Fimalgoritmo