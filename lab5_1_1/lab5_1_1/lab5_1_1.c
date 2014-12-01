/* File: lab5_1_1.c */
/* Alexander Ustyuzhanin, IE SO1 group 1, WS14, 11.11.2014 */

#define _CRT_SECURE_NO_WARNINGS									// suppress warnings about unsafe scanf (C4996)
#include <stdio.h>										
#include <stdlib.h>	

#define ROWS 2
#define COLUMNS 3

void print_2D_matrix(double [][COLUMNS]);

int main()
{
	double matrix_2D[ROWS][COLUMNS] = {
			{1,2,3},
			{4,5,6}
	};
	print_2D_matrix(matrix_2D);

	system("pause");
	return 0;
}

void print_2D_matrix(double matrix[][COLUMNS])
{
	int i = 0;	// row
	int j = 0;	// column
	while(i < ROWS)	// ?
	{
		j = 0;
		while(j < COLUMNS)
		{
			printf("%.0lf ", matrix[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
