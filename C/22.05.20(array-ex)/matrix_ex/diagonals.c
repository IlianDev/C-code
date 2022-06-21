#include<stdio.h>
#define MAX 100
int difference(int arr[][MAX], int n)
	{
 
		int d1 = 0, d2 = 0;
 
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
 
				if (i == j)
					d1 += arr[i][j];
 
 
				if (i == n - j - 1)
					d2 += arr[i][j];
			}
		}
		unsigned int abs = d1 - d2;
		return abs;
	}
 
	int main()
	{
		int n = 3;
 
		int arr[][MAX] =
		{
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9}
		};
 
		printf("%d",difference(arr, n));
		return 0;
	}
 
