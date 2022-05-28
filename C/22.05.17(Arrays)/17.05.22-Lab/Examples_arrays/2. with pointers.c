// coppy from b in a;

#include<stdio.h>
#define SIZE 3
int main(){
    int a[SIZE], b[SIZE];

    int *ptr_a = a;
    int *ptr_b = b;

    int i =0;

    //read
    for (i = 0; ptr_b+i < &b[SIZE]; i++)
    {
        scanf("%d", ptr_a + i);
    }
    

    // coppy
    for (i = 0; i < SIZE; i++)
    {
        ptr_b[i] = ptr_a[i];
    }
    printf("coppied array: \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d", ptr_a[i]);
    }
    return 0;
}
