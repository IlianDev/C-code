
/*
3. Напишете функция, която връща двумерен масив, запълнен по
следния начин: 
*/

#include <stdio.h>
#define MAX 100

// to print the resultant matrix
void print(int mat[][MAX], int n, int m)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			printf("%d ",mat[i][j]);

		printf("\n");
	}
}

// function to change the values
// of diagonal elements to 0
void makediagonalzero(int mat[][MAX], int n, int m)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			// right and left diagonal condition
			if (i == j || (i + j + 1) == n)
				mat[i][j] = 0;
		}
	}

	// print resultant matrix
	print(mat, n, m);
}

// Driver code
int main()
{

	int n = 5, m = 5;
	int mat[][MAX] = { { 1,1,1,1,1 },
					   { 1,1,1,1,1 },
                       { 1,1,1,1,1 },
                       { 1,1,1,1,1 },
                       { 1,1,1,1,1 } };

	makediagonalzero(mat, n, m);

	return 0;
}
