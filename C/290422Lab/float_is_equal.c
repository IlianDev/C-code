#include<stdio.h>

int main()
{
    float a=1.3;
    if(a==1.3)
        printf("equal\n");
        else
            printf("not equal\n");
    
}
//not equal
//никога не трябва да се приравнява така, защото float може да е 1.333454...
//не е точно