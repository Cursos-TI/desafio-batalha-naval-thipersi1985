#include <stdio.h>

int main (){

	int mapa [10][10]; //criação da matriz
	int navio_h [3] = {3, 3, 3}; //criação dos navio 1 (posicionado na horizontal)
	int navio_v [3] = {3, 3, 3}; //criação do navio 2 (posicionado na vertival)
	int x, y, i1, j1, i2, j2; //variáveis utilizadas para entrada e saída de dados 
	int teste1, teste2; //variáveis de controle necessárias para teste da estrutura while, na entrada de dados
	int a, b; // variáveis de controle para a estrutura "do - while", necessárias para implementar os cabeçalhos
	char *vetorCol [10] = {"   A", "B", "C", "D", "E", "F", "G", "H", "I", "J"}; //cabeçalho das coluna
	char *vetorLin [10] = {" 1", " 2", " 3", " 4", " 5", " 6", " 7", " 8", " 9", "10"}; //cabeçalho das linha

	// o código abaixo preenche todas as posições da matriz com 0 (zero).
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			mapa [x][y] = 0;
		}	
		
	}
	
	// entrada de dados: Optei por solicitar do usuário os valores das linhas e colunas dos navios 1 e 2.
	printf("*** JOGO DA BATALHA NAVAL ***\n");
	printf("# Navio na Horizontal #\n");
	teste1 = 0;
	while (teste1 == 0) {
		printf("Digite o número da linha do navio 1 - Entre 1 e 10 \n");
		scanf("%d", &i1);
		printf("Digite o número da coluna do navio 1 - Entre 1 e 8 \n");
		scanf("%d", &j1);
		if ((i1 < 1 || i1 > 10 || j1 < 1 || j1 > 8) == 1) { 	//esse é o teste feito para saber se excede ou não a matriz, aqui chamada de mapa
			printf("Excede o mapa! Favor digitar intervalos válidos.\n");
			teste1 = 0;
		
		} else {	//aqui os dados da matriz que foram inicializados por "0", estão sendo substituídos por 3, representando o navio 1
			mapa [i1 - 1][j1 - 1] = navio_h[0];
			mapa [i1 - 1][j1 - 1 + 1] = navio_h[1];
			mapa [i1 - 1][j1 - 1 + 2] = navio_h[2];
			teste1 = 1;
		}
	}
	
	printf("# Navio na Vertical #\n");
	teste2 = 0;
	while (teste2 == 0) {
		printf("Digite o número da linha do navio 2 - Entre 1 e 8\n");
		scanf("%d", &i2);
		printf("Digite o número da coluna do navio 2 - Entre 1 e 10\n");
		scanf("%d", &j2);
		if ((i2 < 1 || i2 > 8 || j2 < 1 || j2 > 10) == 1) { 	//esse é o teste feito para saber se excede ou não a matriz, aqui chamada de mapa
			printf("Excede o mapa! Favor digitar intervalos válidos.\n");
			teste2 = 0;

		}else if ((i2 == i1) == 1 || (j2 == j1) == 1 || (i1 == j2)) {	//esse é o teste realizado para saber se a posição já se encontra ocupada
			printf("A posição encontra-se ocupada! Escolha outra posição.\n");	
			teste2 = 0;

		} else {	//aqui os dados da matriz que foram inicializados por "0", estão sendo substituídos por 3, representando o navio 2
			mapa [i2 - 1][j2 - 1] = navio_v[0];
			mapa [i2 - 1 + 1][j2 - 1] = navio_v[1];
			mapa [i2 - 1 + 2][j2 - 1] = navio_v[2];
			teste2 = 1;
		}
	}		
	
	// criação do cabeçalho de colunas
	a = 0;
	do {	
		printf("%s ", vetorCol[a]);
		++a;

	} while (a < 10);

	printf("\n");

	// criação do cabeçalho das linhas, e impressão da matriz já preenchida com a posição dos navios.  
	b = 0;
	do {

		for (x = 0; x < 10; x++)
		{
			printf("%s ", vetorLin[b]);
			++b;

			for (y = 0; y < 10; y++)
			{
				printf("%d ", mapa [x][y]);
			}	
			
			printf("\n");		
		
		}

	} while (b < 10);

	return 0;

}