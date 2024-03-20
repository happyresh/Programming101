#include <stdio.h>

#define rows 5
#define column 5

int main (){
	
	int table [rows][column];
	
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < column; j++) {
			table [i][j] = (i+1) * (j+1);
		}
	}
	
	printf("MULTIPLICATION TABLE:\n\n");
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			printf("%5d  ", table [i][j]);
		}
		printf("\n\n");

	}
	return 0;
}
