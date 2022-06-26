#include<stdio.h>

enum year{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};

int main()
{
    int i;
    for ( i = jan; i <= dec ; i++)
    {
        printf("%d", i); // 0 1 2 3 4 5 6 7 8 9 10 11 11
        printf("%d ", i + 1); //  1 2 3 4 5 6 7 8 9 10 11 12 
    }

    return 0;
    
}