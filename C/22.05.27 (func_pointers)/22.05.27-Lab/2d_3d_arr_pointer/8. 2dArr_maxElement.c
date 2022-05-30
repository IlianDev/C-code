#include<stdio.h>
#include<stdlib.h>

void readArray(int **arr, int n, int m){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void printArray(int **arr, int n, int m){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int maxElement(int **arr, int n, int m){
    int max = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > max){
                max = arr[i][j];
            }
        }   
    }
    return max;
}

int main()
{
    int i, Row_n = 3, Cols_m = 4;
    int **array;

    // memory
    array = (int**)malloc(sizeof(int*)*Row_n);
    for (i = 0; i < Row_n; i++)
    {
        array[i] = (int*)malloc(sizeof(int)*Cols_m);
    }
    
    // reading
    readArray(array, Row_n, Cols_m);
    // printing
    printArray(array, Row_n, Cols_m);
    // max element
    int max_element = maxElement(array, Row_n, Cols_m);
    printf("\n The max element is: %d", max_element);

    // free memory
    // for (int i = 0; i < Row_n; i++)
    // {
    //     free(array[i]);
    //     array[i] = NULL;
    // }

    // free(array);
    // array = NULL;
}