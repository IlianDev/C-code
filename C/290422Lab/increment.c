// #include<stdio.h>
// int main()
// {
//     int count = 10;
//     printf("%d\n", count++);
//     printf("%d", ++count);
//     return 0;
// }
//++ първо го увеличава и после го използва

//10
// 12

// #include<stdio.h>
// int main()
// {
//     int x=4, y=6;
//     int z = ++x;
//     printf("%d",z);
//     return 0;
// }

#include<stdio.h>

int main(){
    int x = 4;
    int z = ++x;
    printf("%d", x);
    printf("x= %d, z=%d\n",x,z);

    int w = 1+x++;
    printf("x=%d, w=%d", x,w);
    return 0;
}