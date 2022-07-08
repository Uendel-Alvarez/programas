
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Constantes
#define E 0
#define D 1
#define R -1

//Tipo nó
typedef struct NO {
	int dado;
	struct NO *esq;
	struct NO *dir;
	struct NO *pai;
} NO;

//Tipo árvore
typedef struct ARVORE{
	NO *raiz;
}ARVORE;

//Declaração da árvore
ARVORE a;

//Protótipos das funções
void inicializaArvore(ARVORE arv);
void inicializaNo(NO* n, int val);
void insereNoArvoreOrdenada(int valor);
void preOrdem(NO* raiz);
void emOrdem(NO* raiz);
void posOrdem(NO* raiz);

//Função que sempre deve ser chamada ao se criar uma nova árvore
void inicializaArvore(ARVORE arv)
{
	arv.raiz = NULL;
}

//Função utilizada para inicializar um novo nó na árvore
void inicializaNo(NO* n, int val){
	if(!n)
	{
		printf("Falha de alocacao.\n");
		return;
	}
	n->pai = NULL;
	n->esq = NULL;
	n->dir = NULL;
	n->dado = val;
}

//Função que realiza a inserção de maneira ordenada
//Valores menores ou iguais vão à esquerda
//Valores maiores vão à direita
void insereNoArvoreOrdenada(int valor)
{
	NO* corrente = a.raiz;
	NO* pai;

	NO* novoNo = (NO*) malloc(sizeof(NO));
	inicializaNo(novoNo, valor);
	printf("Inserindo no %d. \n", novoNo->dado);
	
	if(corrente == NULL)
	{
		a.raiz = novoNo;
		printf("No inserido na raiz. \n");
		return;
	}
	
	while(corrente){
		pai = corrente;
		if(novoNo->dado < corrente->dado){
			corrente = corrente->esq;
			if(!corrente){
				printf("No inserido à esquerda do no %d. \n", pai->dado);
				pai->esq = novoNo;
				return;
			}
		}
		else{
			corrente = corrente->dir;
			if(!corrente){
				printf("No inserido à direita do no %d. \n", pai->dado);
				pai->dir = novoNo;
				return;
			}
		}
	}
}

//Executa o caminhamento pré-ordem a partir do nó indicado por "raiz"
void preOrdem(NO* raiz){
	if(raiz){
		printf("%d \t", raiz->dado);
		preOrdem(raiz->esq);
		preOrdem(raiz->dir);
	}
}

//Executa o caminhamento em-ordem a partir do nó indicado por "raiz"
void emOrdem(NO* raiz){
	if(raiz){
		emOrdem(raiz->esq);
		printf("%d \t", raiz->dado);
		emOrdem(raiz->dir);
	}
}

//Executa o caminhamento pos-ordem a partir do nó indicado por "raiz"
void posOrdem(NO* raiz){
	if(raiz){
		posOrdem(raiz->esq);
		posOrdem(raiz->dir);
		printf("%d \t", raiz->dado);
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	inicializaArvore(a);
	
	insereNoArvoreOrdenada(10);
	insereNoArvoreOrdenada(15);
	insereNoArvoreOrdenada(15);
	insereNoArvoreOrdenada(5);
	insereNoArvoreOrdenada(3);
	insereNoArvoreOrdenada(7);
	insereNoArvoreOrdenada(12);
	insereNoArvoreOrdenada(17);
	
	printf("\nBusca em ordem: \n");
	emOrdem(a.raiz);
	
	printf("\nBusca pre ordem: \n");
	preOrdem(a.raiz);
	
	printf("\nBusca pos ordem: \n");
	posOrdem(a.raiz);
}

