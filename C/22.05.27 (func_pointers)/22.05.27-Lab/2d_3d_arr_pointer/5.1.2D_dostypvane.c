#include<stdio.h>
#include<sdtlib.h>

int main()
{
    int M = 3;
    int N = 4;
    int **MN_array;

    MN_array = (int**) malloc(sizeof(int*)*N);

    //declare memory
    for (int i = 0; i < N; i++)
    {
        MN_array[i] = (int*) malloc(sizeof(int)*M);
    }
    // iterrate 1.
    for (int i = 0; i < N; i++)
    {
        for (int i = 0; i < M; i++)
        {
            MN_array[i][j] = 0;
        }
    }    
    // iterrate 2.
    for (int i = 0; i < N; i++)
    {
        *ptr = MN_array[i];
    }
    for (int j = 0; j < count; j++)
    {
        *ptr = 0;
        ptr ++;
    }   
}
