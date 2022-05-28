// Промяна на параметрите при използване на функции

#include<stdio.h>
void multi(int arr[], int *i)
{
    int k;
    printf("array");
    for(k=0;k<3;k++ )
        printf("%d\t",arr[k]);
    int result=0;
    for( k=1;k<=3;k++)
    {
        result=result + k*arr[k-1];
    }
    *i=result;
    printf("\n result=%d\n", *i);
}
int main(){
    int i=5;
    int *pi=&i;
    int arr[3]={1,2,3};
    printf("%d\n", pi, &i);
    printf("in main() i=%d\n", i);
}
