#include<stdio.h>
#include<stdlib.h>

void init2D_Method2(int **arr, int rows, int cols) {

int i, j;
for(i=0; i < rows; i++) {
    for(j=0; j < cols; j++) {
        arr[i][j] = 0;
}
}
}

int main()
{
    int **array;
    array = (int **) malloc(sizeof (int*) *N);
    for(i=0; i < N; i++) {
        2d_array[i] = (int *) malloc(sizeof (int)*M);
    }
    init2D_Method2(array, N, M);
}