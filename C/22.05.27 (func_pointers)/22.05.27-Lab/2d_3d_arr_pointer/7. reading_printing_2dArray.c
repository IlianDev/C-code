/*
Напишете програма, която прочита стойности в двумерен масив 3x4
с помощта на функция.
Разменят се първия и втория ред на масива.
След това стойностите на масива се извеждат
като се използва друга функция
*/

#include<stdio.h>
#include<stdlib.h>

void readArray(int **a, int n, int m){
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < m; l++)
        {
            scanf("%d", &a[k][l]);
        }
    }
}

void printArray(int **arr, int n, int m){
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < m; l++)
        {
            printf("%d\t", arr[k][l]);
        }
        printf("\n");
    }
}

void swapRow(int *x, int *y, int n){
    int row;
    for (row = 0; row < n; row ++)
    {
        int temp = x[row];
        x[row] = y[row];
        y[row] = temp;
    }
}

// void swapRows2(int **a, int n, int m);
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < count; j++)
//     {
//         int temp = a[i][j];
//         a[i][j] = a[i][j+1];
//         a[i][j+1] = temp;
//     }
// }

int main()
{
    int M = 3;
    int N = 4;

    int **array;

    array = (int**) malloc (sizeof(int*) *M);

    // memory
    for (int i = 0; i < M; i++)
    {
        array[i] = (int*) malloc(sizeof(int)*N);
    }
    
    // reading
    readArray(array, M, N); // calling finc   

    // printing
    printArray(array, M, N);

    // swap and print
    swapRow(array[0], array[1],N);
    printf("Changed\n");
    printArray(array, M, N);

    // free memory
    for (int i = 0; i < N; i++)
    {
        free(array[i]);
        array[i] = NULL;
    }

    free(array);
    array = NULL;
}

