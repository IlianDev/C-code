#include<stdio.h>


#define SIZE 5

int main()
{
    int arr[SIZE];
    int *ptr = arr;

    //reading
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("enter a[%d]: ", i);
        scanf("%d", (ptr+i));
    }

    ptr =arr;
    // print elements:
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("a[%d] = %d ", i, *(ptr+i));
    }
}

// enter a[0]: 1
// enter a[1]: 2
// enter a[2]: 3
// enter a[3]: 4
// enter a[4]: 5
// a[0] = 1 a[1] = 2 a[2] = 3 a[3] = 4 a[4] = 5 