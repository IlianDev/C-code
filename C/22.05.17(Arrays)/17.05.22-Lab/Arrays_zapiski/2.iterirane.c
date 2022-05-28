#include<stdio.h>
int main()
{
    int arrNum [ 3 ] = { 1, 2, 3 };
    for(int i = 0; i < 3; i++){
        printf("%d",arrNum[i]); // 123
        printf("%d\n",arrNum[i]); // ...
    }
}