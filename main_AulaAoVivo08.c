#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*programa que adiciona valores em um vetor de 5 posições e verifica se já existe a cada novo numero adicionado*/


/*função criada para verificar numero repetidos*/
bool jaExiste(int vet[5], int numeroDigitado){
	bool existe = false;
	int c;//variavel contadora
	for(c=0; c<5; c++){/*estrutura de repetição que percorre o vetor para ver se há numeros repetidos*/
		if(vet[c] == numeroDigitado){/*condição de teste a ser realizado no vetor*/
			existe = true;
			break;
		}
	}
	return existe;
}





int main() 
{
	int numeros[5];
	
	int cont;
	
	for(cont=0; cont<5; cont++){/*preencheu vetor*/
	
		int numero;
	
		printf("digite um numero \n");
		scanf("%d", &numero);/*leitura dos numeros digitados*/
		fflush(stdin);
		
		while(jaExiste(numeros, numero)){/*enquanto jaExiste numero em vetor numeros*/
			printf("o numero já existe, digite outro\n");
			scanf("%d", &numero);/*lê o outro numero */
			fflush(stdin);		
		}
		
		numeros[cont] = numero;//atribui numeros ao vetor
			}
	
	for(cont=0; cont<5; cont++){/*percorreu vetor e imprime na tela*/
		printf("%d", numeros[cont]);
	}
	return 0;
}
