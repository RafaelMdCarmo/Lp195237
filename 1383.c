#include <stdio.h>

int main()
{
	int sudoku[3][3];
	int resposta = 1;

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			scanf("%i", &sudoku[i][j]);
		}
	}

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {

			for(int x = 0; x < 3; x++) {
				if(i != x && sudoku[i][j] == sudoku[x][j]) {
					resposta = 0;
				}
			}
		}
	}

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {

			for(int y = 0; y < 3; y++) {
				if(j != y && sudoku[i][j] == sudoku[i][y]) {
					resposta = 0;
				}
			}
		}
	}



	if (resposta == 1) {
		printf("SIM");
	}
	else {
		printf("NAO");
	}

	return 0;
}
