#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//variaveis
int destino, origem, vertices = 0;
int custo, *custos = NULL;

//prototipação
void dijkstra(int vertices, int origem, int destino, int *custos);
void menu_mostrar(void);
void grafo_procurar(void);
void grafo_criar(void);


//função principal
int main(int argc, char *argv[]) {
	int opt = -1;
	//laço principal do menu
	do{
		//desenha o menu na tela
		menu_mostrar();
			scanf("%d", &opt);
			switch(opt){
				case 1:
					//cria um novo grafo
					grafo_criar();
					break;
					case 2:
						//procura os caminhos
						if(vertices > 0){
							grafo_procurar();
						}
						break;
			}
		
	}while(opt != 0);
	printf("\nAlgoritmo de Dijkstra finalizado...\n\n");
	system("pause");
		return 0;
}

//implementando o Algoritmo de Dijktra
void dijkstra(int vertices, int origem, int destino, int *custos)
{
	int i, v, cont = 0;
	int *ant, *tmp;
	int *z; /*vertices para os quais se conhece o caminho minimo*/
	double min;
	double dist[vertices];/*vetor com os custos dos caminhos*/
	/*aloca as linhas da matriz*/
	ant = (int*) calloc (vertices, sizeof(int *));
	if(ant == NULL){
		system("color fc");
		printf("**erro da memoria insuficiente**");
		exit(-1);	
	}
	tmp = (int *) calloc (vertices, sizeof(int *));
	if(tmp == NULL){
		system("color fc");
		printf("**erro de memoria insuficiente**");
		exit(-1);
	}
	z = (int *) calloc (vertices, sizeof(int *));
	if(z == NULL){
		system("color fc");
		printf("**erro memoria insuficente**");
		exit(-1);
	}
	for(i = 0; i < vertices; i++){
		if(custos[(origem -1) * vertices + i] !=-1){
			ant[i] = origem -1;
			dist[i] = custos[(origem-1)*vertices+i];
		}
		else{
			ant[i]= -1;
			dist[i]= HUGE_VAL;
		}
		z[i]=0;
	}
	z[origem-1]=1;
	dist[origem-1]=0;
	/*Laco principal*/
	do{
		/*encontrando um vertice que deve entrar em z*/
		min = HUGE_VAL;
		for(i=0;i<vertices;i++){
			if(!z[i]){
				if(dist[i]>=0 && dist[i]<min){
					min=dist[i];v=i;
				}
			}
		}
		/*calculando as distancias dos novos vizinhos de z*/
		if(min != HUGE_VAL && v!= destino -1){
			z[v]=1;
			for(i=0;i<vertices;i++){
				if(!z[i]){
					if(custos[v*vertices+i] != -1 && dist[v]
					+ custos[v*vertices+1] < dist[i]){
						dist[i] = dist[v] + custos[v*vertices+i];
						ant[i]=v;
					}
				}
			}
		}
	}while(v != destino - 1 && min != HUGE_VAL);
	
	/*mostra o resultado da busca*/
	printf("\tDe %d para %d: \t", origem, destino);
	if(min == HUGE_VAL){
		printf("nao existe\n");
		printf("\tcusto: \t- \n");
	}	
	else{
		i = destino;
		i = ant[i-1];
		while(i != -1){
			tmp[cont] = i+1;
			cont++;
			i= ant[i];
		}
		for(i = cont; i>0; i--){
			printf("%d -> ", tmp[i-1]);
		}
		printf("%d", destino);
		printf("\n\tCusto:  %d\n", (int) dist[destino-1]);
	}
	}
	
	void grafo_criar(void){
		do{
			printf("\nInforme o numero de vertices (no minimo 3): ");
			scanf("%d", &vertices);
		}while (vertices < 3);
		if(!custos){
			free(custos);
		}
		custos = (int *) malloc(sizeof(int)*vertices*vertices);
		//se o compilador falhou em alocar espaço na memoria
		if(custos == NULL){
			system("color fc");
			printf("**erro: memoria insuficiente**");
			exit(-1);
		}
		//preenchendo a matriz com -1
		for(int i = 0;i <= vertices *vertices; i++){
			custos[i] = -1;
		}
		do{
			system("cls");
			printf("entre com as arestas:\n");
			do{
				printf("origem (entre 1 e %d ou '0' para sair): ", vertices);
				scanf("%d", &origem);
			}while (origem < 0 || origem > vertices);
			if(origem){
				do{
					printf("Destino (entre 1 e %d, menos %d): ", vertices, origem);
					scanf("%d", &destino);
				}while(destino < 1 || destino > vertices || destino == origem);
			do{
				printf("custo (positivo) do vertice %d para overtice %d: ",
				 origem, destino);
				 scanf("%d", &custo);
			}while(custo < 0);
			custos[(origem-1) *vertices + destino -1] = custo;
		}
		}while(origem); 
	}
	
	//busca os menores caminhos entre os vertices
	void grafo_procurar(void){
		int i, j;
		system("cls");
		system("color 03");
		printf("Lista dos menores caminhos no grafo dado: \n");
		for(i=1;i<=vertices;i++){
			for(j=1; j<=vertices; j++){
				dijkstra(vertices, i, j, custos);
			}
			printf("\n");
		}
		system("pause");
		system("color 07");
	}
	
	//desenha o menu na tela
	void menu_mostrar(void){
		system("cls");
		printf("implemtacao do algoritmo de dijastra\n");
			printf("opcoes:\n");
				printf("\t 1 - adicionar um grafo\n:");
					printf("\t 2 - procura os menores caminhos no grafo\n");
						printf("\t 0 - sair do programa\n");
							printf("? ");
	}