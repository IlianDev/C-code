/*
Replace every element of the array by its previous element
*/
#include <stdio.h>

void updateArray(int arr[], int n);

int main()
{
	int arr[] = { 5, 1, 3, 2, 4 };
	int N = sizeof(arr) / sizeof(arr[0]);
	updateArray(arr, N);
	return 0;
}

void updateArray(int arr[], int n)
{
	// Update array
	for (int i = n - 1; i > 0; i--)
		arr[i] = arr[i - 1];

	// Change the first element to -1
	arr[0] = -1;

	// Print the updated array
	for (int i = 0; i < n; i++)
	printf("%d ",arr[i]);
}
