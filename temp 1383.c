#include <stdio.h>


int main()
{
	int sudoku[9][9];
	
	//int celulas[3][3];

	int resposta = 1;
	int num = 0;

	scanf("%i", &num);

    //linha e coluna
    
	for(int n = 0; n < num; n++) {

		for(int i = 0; i < 9; i++) {
			for(int j = 0; j < 9; j++) {
				scanf("%i", &sudoku[i][j]);
			}
		}

		for(int i = 0; i < 9; i++) {
			for(int j = 0; j < 9; j++) {

				for(int x = 0; x < 9; x++) {
					if(i != x && sudoku[i][j] == sudoku[x][j]) {
						resposta = 0;
					}
				}
			}
		}

		for(int i = 0; i < 9; i++) {
			for(int j = 0; j < 9; j++) {

				for(int y = 0; y < 9; y++) {
					if(j != y && sudoku[i][j] == sudoku[i][y]) {
						resposta = 0;
					}
				}
			}
		}

    //celula
    //printf("%i", celulas[3][3]);
    
    




        printf("Instancia %i\n", n+1);
        
		if (resposta == 1) {
			printf("SIM\n\n");
		}
		else {
			printf("NAO\n\n");
		}

	}

	return 0;
}
