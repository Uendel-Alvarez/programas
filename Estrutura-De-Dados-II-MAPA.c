#include <stdio.h>
#include <stdlib.h>



/*Código fonte montado com funções pesquisadas na Internet e no livro da Disciplina.
   Foram alteradas e adaptadas para atender aos requisitos da Atividade */


// estrututa nó
typedef struct no {
    int conteudo;
    struct no *esquerda, *direita;
} No;

// estrutura árvore com um ponteiro para um nó
typedef struct {
    No *raiz;
    int tam;
   
} ArvB;


int indice = 0;

void inserirDireita(No *no, int valor);

// procedimento para inserir um elemento na subárvore esquerda
void inserirEsquerda(No *no, int valor) {
    if(no->esquerda == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        no->esquerda = novo;
    } else {
        if(valor < no->esquerda->conteudo)
            inserirEsquerda(no->esquerda, valor);
        if(valor > no->esquerda->conteudo)
            inserirDireita(no->esquerda, valor);
    }
}

// procedimento para inserir um elemento na subárvore direita
void inserirDireita(No *no, int valor) {
    if(no->direita == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        no->direita = novo;
    } else {
        if(valor > no->direita->conteudo)
            inserirDireita(no->direita, valor);
        if(valor < no->direita->conteudo)
            inserirEsquerda(no->direita, valor);
    }
}

//função para inserir nos da árvore
No* inserir(No *raiz, int valor) {
    if(raiz == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        return novo;
    } else {
        if(valor < raiz->conteudo)
            raiz->esquerda = inserir(raiz->esquerda, valor);
        if(valor > raiz->conteudo)
            raiz->direita = inserir(raiz->direita, valor);
        return raiz;
    }
}


// Procedimento para imprimir uma árvore binária
void imprimir(No *raiz){
    if(raiz){
        printf("%d ", raiz->conteudo);
        imprimir(raiz->esquerda);
        imprimir(raiz->direita);
    }
}

//realiza o caminhamento préOrdem
void preOrdem(No* raiz){
if(raiz){
printf("%d \t", raiz->conteudo);
preOrdem(raiz->esquerda);
preOrdem(raiz->direita);
}
}


// ffunção principal
int main() {
    int op, valor;
    ArvB arv;
    arv.raiz = NULL;

    No *raiz = NULL;

    do {
       
        printf("\n0 - sair do programa\n1 - inserir os nos\n2 - mostrar resultados\n");
        scanf("%d", &op);

        switch(op) {
        case 0:
            printf("\nSaindo...\n");
            break;
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            raiz = inserir(raiz, valor);
            break;
        case 2:
        	printf("\n**Meu RA: 20134547-5**\n");
        	printf("\n");
        	printf("\nArvore Binaria:\n");
            imprimir(raiz);
       		printf("\n");
            printf("\nBusca preOrdem:\n");
            preOrdem(raiz);
            break;
       
        }
    } while(op != 0);
   
   
}