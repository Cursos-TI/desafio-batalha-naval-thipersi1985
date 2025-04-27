#include <stdio.h>

#define LINHA 3
#define COLUNA 5

int main (){

	int mapa [10][10];	//criação da matriz
	int navio_h [3] = {3, 3, 3}; //criação dos navio 1 (posicionado na horizontal)
	int navio_v [3] = {3, 3, 3}; //criação do navio 2 (posicionado na vertival)
	int navio_dd [3] = {3, 3, 3}; //criação do navio 3 (diagonal-direita)
	int navio_de [3] = {3, 3, 3}; //criação do navio 4 (diagonal-esquerda)
	int i, j, i1, j1, i2, j2, i3, j3, i4, j4; //variáveis utilizadas para entrada e saída de dados 
	int teste1, teste2, teste3, teste4;	//variáveis de controle necessárias para teste da estrutura while, na entrada de dados
	int a, b;  	// variáveis de controle para a estrutura "do - while", necessárias para implementar os cabeçalhos
	char *vetorCol [10] = {"   A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};  //cabeçalho das coluna
	char *vetorLin [10] = {" 1", " 2", " 3", " 4", " 5", " 6", " 7", " 8", " 9", "10"}; //cabeçalho das linha
	int cone [LINHA][COLUNA]; //matriz da habilidade cone
	int cruz [LINHA][COLUNA]; //matriz da habilidade cruz
	int octaedro [LINHA][COLUNA]; //matriz da habilidade octaedro

	// o código abaixo preenche todas as posições da matriz com 0 (zero).
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mapa [i][j] = 0;
		}	
		
	}
	
	// entrada de dados
	printf("*** JOGO DA BATALHA NAVAL ***\n");
	//Navio na Horizontal
	i1 = 1;
	j1 = 6;
	teste1 = 0;
	while (teste1 == 0) {
		if ((i1 < 1 || i1 > 10 || j1 < 1 || j1 > 8) == 1) { 	//esse é o teste feito para saber se excede ou não a matriz, aqui chamada de mapa
			printf("Excede o mapa!\n");
			teste1 = 0;
					
		} else {	//aqui os dados da matriz que foram inicializados por "0", estão sendo substituídos por 3, representando o navio 1
			mapa [i1 - 1][j1 - 1] = navio_h[0];
			mapa [i1 - 1][j1 - 1 + 1] = navio_h[1];
			mapa [i1 - 1][j1 - 1 + 2] = navio_h[2];
			teste1 = 1;
			
		}
	}
		
	//Navio na Vertical
	i2 = 1;
	j2 = 10;
	teste2 = 0;
	while (teste2 == 0) {
		if ((i2 < 1 || i2 > 8 || j2 < 1 || j2 > 10) == 1) { 	//esse é o teste feito para saber se excede ou não a matriz, aqui chamada de mapa
			printf("Excede o mapa!\n");
			teste2 = 0;
	
		} else {	//aqui os dados da matriz que foram inicializados por "0", estão sendo substituídos por 3, representando o navio 2
			mapa [i2 - 1][j2 - 1] = navio_v[0];
			mapa [i2 - 1 + 1][j2 - 1] = navio_v[1];
			mapa [i2 - 1 + 2][j2 - 1] = navio_v[2];
			teste2 = 1;
			
		}
	}		
	
	//Navio na Diagonal-Direita
	i3 = 4;
	j3 = 8;
	teste3 = 0;
	while (teste3 == 0) {
		if ((i3 < 1 || i3 > 8 || j3 < 1 || j3 > 8) == 1) { 	//esse é o teste feito para saber se excede ou não a matriz, aqui chamada de mapa
			printf("Excede o mapa!\n");
			teste3 = 0;

		} else {	//aqui os dados da matriz que foram inicializados por "0", estão sendo substituídos por 3, representando o navio 3
			mapa [i3 - 1][j3 - 1] = navio_dd[0];
			mapa [i3 - 1 + 1][j3 - 1 + 1] = navio_dd[1];
			mapa [i3 - 1 + 2][j3 - 1 + 2] = navio_dd[2];
			teste3 = 1;
		}
	}

	//Navio na Diagonal-Esquerda
	i4 = 8;
	j4 = 10;
	teste4 = 0;
	while (teste4 == 0) {
		if ((i4 < 1 || i4 > 8 || j4 < 3 || j4 > 10) == 1) { 	//esse é o teste feito para saber se excede ou não a matriz, aqui chamada de mapa
			printf("Excede o mapa!\n");
			teste4 = 0;

		} else {	//aqui os dados da matriz que foram inicializados por "0", estão sendo substituídos por 3, representando o navio 4
			mapa [i4 - 1][j4 - 1] = navio_de[0];
			mapa [i4 - 1 + 1][j4 - 1 - 1] = navio_de[1];
			mapa [i4 - 1 + 2][j4 - 1 - 2] = navio_de[2];
			teste4 = 1;
		}
	}

	// Habilidade "Cone"
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == 0 && j == 0) {
				cone [i][j] = 0;

			} else if (i == 0 && j == 1) {
				cone [i][j] = 0;

			} else if (i == 0 && j == 3) {
				cone [i][j] = 0;

			} else if (i == 0 && j == 4) {
				cone [i][j] = 0;  

			} else if (i == 1 && j == 0) {
				cone [i][j] = 0; 

			} else if (i == 1 && j == 4) {
				cone [i][j] = 0;  
					
			} else { 

				cone [i][j] = 1;

			}
		}   
		
		printf("\n");   

	}

   // Habilidade "Cruz"
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == 0 && j == 0) {
				cruz [i][j] = 0;

			} else if (i == 0 && j == 1) {
				cruz [i][j] = 0;

			} else if (i == 0 && j == 3) {
				cruz [i][j] = 0;

			} else if (i == 0 && j == 4) {
				cruz [i][j] = 0;  

			} else if (i == 2 && j == 0) {
				cruz [i][j] = 0;  
			
			} else if (i == 2 && j == 1) {
				cruz [i][j] = 0;  

			} else if (i == 2 && j == 3) {
				cruz [i][j] = 0;  
			
			} else if (i == 2 && j == 4) {
				cruz [i][j] = 0; 
					
			} else { 

				cruz [i][j] = 1;

			}
		}   
		
		printf("\n");   

	}
   
   // Habilidade "Octaedro"
   for (i = 0; i < 3; i++)
   {
	   for (j = 0; j < 5; j++)
	   {
		   if (i == 0 && j == 0) {
			   octaedro [i][j] = 0;

		   } else if (i == 0 && j == 1) {
			   octaedro [i][j] = 0;

		   } else if (i == 0 && j == 3) {
			   octaedro [i][j] = 0;

		   } else if (i == 0 && j == 4) {
			   octaedro [i][j] = 0;
		   
		   } else if (i == 1 && j == 0) {
			   octaedro [i][j] = 0;  

		   } else if (i == 1 && j == 4) {
			   octaedro [i][j] = 0;  

		   } else if (i == 2 && j == 0) {
			   octaedro [i][j] = 0;  
		   
		   } else if (i == 2 && j == 1) {
			   octaedro [i][j] = 0;  

		   } else if (i == 2 && j == 3) {
			   octaedro [i][j] = 0;  
		   
		   } else if (i == 2 && j == 4) {
			   octaedro [i][j] = 0; 
				   
		   } else { 

			   octaedro [i][j] = 1;

		   }
	   }   
	   
	   printf("\n");   

   } 

   int linha_sobrep = 0; // linha inicial a sobrepor com o Cone
   int coluna_sobrep = 0; // coluna inicial a sobrepor com o Cone

	   // Percorrer a matriz a sobrepor

	   for (int i = 0; i < 3; i++) {
		   for (int j = 0; j < 5; j++) {
   
			   // Calcular a posição na matriz "mapa" para sobreposição
			   int linha_mapa = linha_sobrep + i;
			   int coluna_mapa = coluna_sobrep + j;

			   // Verificar se a posição na matriz "mapa" está dentro dos limites
			   if (linha_mapa < 10 && coluna_mapa < 10) {
	   
			   // Copiar o elemento da matriz "cone" para a matriz "mapa"
			   mapa[linha_mapa][coluna_mapa] = cone[i][j];

			   } 
		   } 
	   }

   int linha_sobrep1 = 4; // linha inicial a sobrepor com a Cruz
   int coluna_sobrep1 = 0; // coluna inicial a sobrepor com a Cruz

	   // Percorrer a matriz a sobrepor

	   for (int i = 0; i < 3; i++) {
		   for (int j = 0; j < 5; j++) {
   
			   // Calcular a posição na matriz "mapa" para sobreposição
			   int linha_mapa = linha_sobrep1 + i;
			   int coluna_mapa = coluna_sobrep1 + j;

			   // Verificar se a posição na matriz "mapa" está dentro dos limites
			   if (linha_mapa < 10 && coluna_mapa < 10) {
	   
			   // Copiar o elemento da matriz "cruz" para a matriz "mapa"
			   mapa[linha_mapa][coluna_mapa] = cruz[i][j];

			   }
		   }
	   }

   int linha_sobrep2 = 7; // linha inicial a sobrepor com o Octaedro
   int coluna_sobrep2 = 2; // coluna inicial a sobrepor com o Octaedro

	   // Percorrer a matriz a sobrepor

	   for (int i = 0; i < 3; i++) {
		   for (int j = 0; j < 5; j++) {
   
			   // Calcular a posição na matriz "mapa" para sobreposição
			   int linha_mapa = linha_sobrep2 + i;
			   int coluna_mapa = coluna_sobrep2 + j;

			   // Verificar se a posição na matriz "mapa" está dentro dos limites
			   if (linha_mapa < 10 && coluna_mapa < 10) {
	   
			   // Copiar o elemento da matriz "octaedro" para a matriz "mapa"
			   mapa[linha_mapa][coluna_mapa] = octaedro[i][j];

			   }
		   }
	   }
   
	// criação do cabeçalho de colunas
	a = 0;
	do {	
		printf("%s ", vetorCol[a]);
		++a;

	} while (a < 10);

	printf("\n");

	// criação do cabeçalho das linhas, e impressão da matriz já preenchida com a posição dos navios e das habilidades.  
	b = 0;
	do {

		for (i = 0; i < 10; i++)
		{
			printf("%s ", vetorLin[b]);
			++b;

			for (j = 0; j < 10; j++)
			{
				printf("%d ", mapa [i][j]);
			}	
			
			printf("\n");		
		
		}

	} while (b < 10);

	
	return 0;

}