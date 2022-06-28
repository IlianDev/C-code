#include<stdio.h>

int main()
{
    // enum point {x = 3, y = 2, z = 1};
    // printf("%d %d %d \n", x, y, z); // 3 2 1 

    enum point2 {y = 2, x = 34, t, z = 0};
    printf("%d %d %d \n", y, x, t, z); 
    
    return 0;
}