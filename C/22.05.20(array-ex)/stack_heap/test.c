#include<stdio.h>
#include<stdlib.h> 

int main()
{   
    //(void*)malloc(size_t size)
    // size_t is unsigned integer
    // returs void pointer because the func doesn't know
    // what is pointing to
    // ! the void pointer should be typecasted !!!

    int i, n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int ptr = (int*)malloc(n*sizeof(int));

    if(ptr ==NULL) {
        printf("Memory not available");
    }

    for ( i = 0; i < n; i++) {
        printf("Enter an integer: ");
        scanf("%d", ptr +i);
    }
    for(i=0; i<n; i++) {
        printf("%d\n", *(ptr +i));
    }
    

    return 0;

}